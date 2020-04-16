#include <catch2/catch.hpp>

#include <pqrs/osx/iokit_hid_system.hpp>

TEST_CASE("make_key_code") {
  //
  // Unsupported usage_page
  //

  {
    auto actual = pqrs::osx::iokit_hid_system::make_key_code(pqrs::hid::usage_page::generic_desktop,
                                                             pqrs::hid::usage::generic_desktop::keyboard);
    REQUIRE(actual == std::nullopt);
  }

  //
  // hid::usage_page::keyboard_or_keypad
  //

  {
    auto actual = pqrs::osx::iokit_hid_system::make_key_code(pqrs::hid::usage_page::keyboard_or_keypad,
                                                             pqrs::hid::usage::keyboard_or_keypad::keyboard_a);
    REQUIRE(actual == pqrs::osx::iokit_hid_system::key_code::keyboard_a);
  }
  {
    auto actual = pqrs::osx::iokit_hid_system::make_key_code(pqrs::hid::usage_page::keyboard_or_keypad,
                                                             pqrs::hid::usage::keyboard_or_keypad::keyboard_b);
    REQUIRE(actual == pqrs::osx::iokit_hid_system::key_code::keyboard_b);
  }
  {
    auto actual = pqrs::osx::iokit_hid_system::make_key_code(pqrs::hid::usage_page::keyboard_or_keypad,
                                                             pqrs::hid::usage::keyboard_or_keypad::reserved);
    REQUIRE(actual == std::nullopt);
  }

  //
  // hid::usage_page::apple_vendor_keyboard
  //

  {
    auto actual = pqrs::osx::iokit_hid_system::make_key_code(pqrs::hid::usage_page::apple_vendor_keyboard,
                                                             pqrs::hid::usage::apple_vendor_keyboard::dashboard);
    REQUIRE(actual == pqrs::osx::iokit_hid_system::key_code::apple_vendor_keyboard_dashboard);
  }
  {
    auto actual = pqrs::osx::iokit_hid_system::make_key_code(pqrs::hid::usage_page::apple_vendor_keyboard,
                                                             pqrs::hid::usage::apple_vendor_keyboard::function);
    REQUIRE(actual == pqrs::osx::iokit_hid_system::key_code::apple_vendor_keyboard_function);
  }
  {
    auto actual = pqrs::osx::iokit_hid_system::make_key_code(pqrs::hid::usage_page::apple_vendor_keyboard,
                                                             pqrs::hid::usage::apple_vendor_keyboard::spotlight);
    REQUIRE(actual == std::nullopt);
  }

  //
  // hid::usage_page::apple_vendor_top_case
  //

  {
    auto actual = pqrs::osx::iokit_hid_system::make_key_code(pqrs::hid::usage_page::apple_vendor_top_case,
                                                             pqrs::hid::usage::apple_vendor_top_case::keyboard_fn);
    REQUIRE(actual == pqrs::osx::iokit_hid_system::key_code::apple_vendor_top_case_keyboard_fn);
  }
  {
    auto actual = pqrs::osx::iokit_hid_system::make_key_code(pqrs::hid::usage_page::apple_vendor_keyboard,
                                                             pqrs::hid::usage::apple_vendor_top_case::illumination_down);
    REQUIRE(actual == std::nullopt);
  }
}
