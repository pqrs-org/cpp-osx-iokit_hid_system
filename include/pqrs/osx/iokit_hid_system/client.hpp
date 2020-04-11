#pragma once

// (C) Copyright Takayama Fumihiko 2020.
// Distributed under the Boost Software License, Version 1.0.
// (See http://www.boost.org/LICENSE_1_0.txt)

#include "aux_control_button.hpp"
#include "key_code.hpp"
#include <IOKit/hidsystem/IOHIDParameter.h>
#include <IOKit/hidsystem/IOHIDShared.h>
#include <pqrs/osx/iokit_return.hpp>
#include <pqrs/osx/iokit_service_monitor.hpp>

// Note:
// OS X shares IOHIDSystem among all input devices even the serial_number of IOHIDSystem is same with the one of the input device.
//
// Example:
//   The matched_callback always contains only one IOHIDSystem even if the following devices are connected.
//     * Apple Internal Keyboard / Track
//     * HHKB-BT
//
//   The IOHIDSystem object's serial_number is one of the connected devices.
//
//   But the IOHIDSystem object is shared by all input devices.
//   Thus, the IOHIDGetModifierLockState returns true if caps lock is on in one device.

namespace pqrs {
namespace osx {
namespace iokit_hid_system {
class client final : pqrs::dispatcher::extra::dispatcher_client {
public:
  // Signals (invoked from the shared dispatcher thread)

  nod::signal<void(std::optional<bool>)> caps_lock_state_changed;

  // Methods

  client(const client&) = delete;

  client(void) : dispatcher_client(),
                 caps_lock_state_check_timer_(*this) {
    if (auto matching_dictionary = IOServiceNameMatching(kIOHIDSystemClass)) {
      service_monitor_ = std::make_unique<iokit_service_monitor>(weak_dispatcher_,
                                                                 matching_dictionary);

      service_monitor_->service_matched.connect([this](auto&& registry_entry_id, auto&& service_ptr) {
        close_connection();

        // Use the last matched service.
        open_connection(service_ptr);
      });

      service_monitor_->service_terminated.connect([this](auto&& registry_entry_id) {
        close_connection();

        // Use the next service
        service_monitor_->async_invoke_service_matched();
      });

      service_monitor_->async_start();

      CFRelease(matching_dictionary);
    }
  }

  virtual ~client(void) {
    detach_from_dispatcher([this] {
      caps_lock_state_check_timer_.stop();
      close_connection();

      service_monitor_ = nullptr;
    });
  }

  void async_start_caps_lock_check_timer(std::chrono::milliseconds interval) {
    enqueue_to_dispatcher([this, interval] {
      last_caps_lock_state_ = std::nullopt;

      caps_lock_state_check_timer_.start(
          [this] {
            auto s = get_modifier_lock_state(kIOHIDCapsLockState);
            if (last_caps_lock_state_ != s) {
              last_caps_lock_state_ = s;
              enqueue_to_dispatcher([this, s] {
                caps_lock_state_changed(s);
              });
            }
          },
          interval);
    });
  }

  void async_set_caps_lock_state(bool state) {
    enqueue_to_dispatcher([this, state] {
      set_modifier_lock_state(kIOHIDCapsLockState, state);
    });
  }

private:
  // This method is executed in the dispatcher thread.
  void open_connection(iokit_object_ptr s) {
    if (!connect_) {
      service_ = s;

      io_connect_t c;
      iokit_return r = IOServiceOpen(*service_, mach_task_self(), kIOHIDParamConnectType, &c);
      if (r) {
        connect_ = iokit_object_ptr(c);
      }
    }
  }

  // This method is executed in the dispatcher thread.
  void close_connection(void) {
    if (connect_) {
      IOServiceClose(*connect_);
      connect_.reset();
    }

    service_.reset();
  }

  // This method is executed in the dispatcher thread.
  std::optional<bool> get_modifier_lock_state(int selector) {
    if (!connect_) {
      return std::nullopt;
    }

    bool state = false;
    iokit_return r = IOHIDGetModifierLockState(*connect_, selector, &state);
    if (!r) {
      return std::nullopt;
    }

    return state;
  }

  // This method is executed in the dispatcher thread.
  void set_modifier_lock_state(int selector, bool state) {
    if (!connect_) {
      return;
    }

    IOHIDSetModifierLockState(*connect_, selector, state);
  }

  std::unique_ptr<iokit_service_monitor> service_monitor_;
  iokit_object_ptr service_;
  iokit_object_ptr connect_;

  dispatcher::extra::timer caps_lock_state_check_timer_;
  std::optional<bool> last_caps_lock_state_;
};
} // namespace iokit_hid_system
} // namespace osx
} // namespace pqrs
