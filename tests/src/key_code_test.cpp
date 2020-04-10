#include <catch2/catch.hpp>

#include <pqrs/osx/iokit_hid_system.hpp>

TEST_CASE("make_key_code") {
  {
    auto actual = pqrs::osx::iokit_hid_system::make_key_code(pqrs::osx::iokit_hid_usage_page_generic_desktop,
                                                             pqrs::osx::iokit_hid_usage_generic_desktop_keyboard);
    REQUIRE(actual == std::nullopt);
  }
  {
    auto actual = pqrs::osx::iokit_hid_system::make_key_code(pqrs::osx::iokit_hid_usage_page_keyboard_or_keypad,
                                                             pqrs::osx::iokit_hid_usage_keyboard_a);
    REQUIRE(actual == pqrs::osx::iokit_hid_system::key_code(0x0));
  }
  {
    auto actual = pqrs::osx::iokit_hid_system::make_key_code(pqrs::osx::iokit_hid_usage_page_keyboard_or_keypad,
                                                             pqrs::osx::iokit_hid_usage_keyboard_b);
    REQUIRE(actual == pqrs::osx::iokit_hid_system::key_code(0xb));
  }
}
