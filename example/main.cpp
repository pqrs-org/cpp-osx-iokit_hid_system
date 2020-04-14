#include <csignal>
#include <pqrs/osx/iokit_hid_system.hpp>

namespace {
auto global_wait = pqrs::make_thread_wait();
}

int main(void) {
  pqrs::dispatcher::extra::initialize_shared_dispatcher();

  std::signal(SIGINT, [](int) {
    global_wait->notify();
  });

  auto client = std::make_unique<pqrs::osx::iokit_hid_system::client>(pqrs::dispatcher::extra::get_shared_dispatcher());

  client->opened.connect([&client] {
    std::cout << "iokit_hid_system opened" << std::endl;

    for (auto event_type : {
             pqrs::osx::iokit_hid_system::event_type::key_down,
             pqrs::osx::iokit_hid_system::event_type::key_up,
         }) {
      client->async_post_key_code_event(event_type,
                                        pqrs::osx::iokit_hid_system::key_code::apple_vendor_keyboard_expose_all,
                                        0,
                                        false);
    }
  });

  client->closed.connect([] {
    std::cout << "iokit_hid_system closed" << std::endl;
  });

  client->error_occurred.connect([](auto&& message, auto&& r) {
    std::cout << message << " " << r << std::endl;
  });

  client->post_event_error_occurred.connect([](auto&& r) {
    std::cout << "post_event_error_occurred " << r << std::endl;
  });

  client->caps_lock_state_changed.connect([](auto&& state) {
    if (!state) {
      std::cout << "caps_lock_state_changed: std::nullopt" << std::endl;
    } else {
      std::cout << "caps_lock_state_changed: " << *state << std::endl;
    }
  });

  client->async_start();
  client->async_start_caps_lock_check_timer(std::chrono::milliseconds(100));

  std::this_thread::sleep_for(std::chrono::milliseconds(500));

  client->async_set_caps_lock_state(true);

  std::this_thread::sleep_for(std::chrono::milliseconds(500));

  client->async_set_caps_lock_state(true);

  std::this_thread::sleep_for(std::chrono::milliseconds(500));

  std::this_thread::sleep_for(std::chrono::milliseconds(500));

  client->async_set_caps_lock_state(false);

  std::this_thread::sleep_for(std::chrono::milliseconds(500));

  // ------------------------------------------------------------

  global_wait->wait_notice();

  // ------------------------------------------------------------

  client = nullptr;

  pqrs::dispatcher::extra::terminate_shared_dispatcher();

  std::cout << "finished" << std::endl;

  return 0;
}
