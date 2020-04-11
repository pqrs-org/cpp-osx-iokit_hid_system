#pragma once

// (C) Copyright Takayama Fumihiko 2020.
// Distributed under the Boost Software License, Version 1.0.
// (See http://www.boost.org/LICENSE_1_0.txt)

namespace pqrs {
namespace osx {
namespace iokit_hid_system {
enum class event_type {
  key_down = NX_KEYDOWN,
  key_up = NX_KEYUP,
  flags_changed = NX_FLAGSCHANGED,
  system_defined = NX_SYSDEFINED,
};
}
} // namespace osx
} // namespace pqrs
