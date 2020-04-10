#include <catch2/catch.hpp>

#include <pqrs/osx/iokit_hid_system.hpp>

TEST_CASE("make_key_code") {
  //
  // Unsupported usage_page
  //

  {
    auto actual = pqrs::osx::iokit_hid_system::make_key_code(pqrs::osx::iokit_hid_usage_page_generic_desktop,
                                                             pqrs::osx::iokit_hid_usage_generic_desktop_keyboard);
    REQUIRE(actual == std::nullopt);
  }

  //
  // iokit_hid_usage_page_keyboard_or_keypad
  //

  {
    auto actual = pqrs::osx::iokit_hid_system::make_key_code(pqrs::osx::iokit_hid_usage_page_keyboard_or_keypad,
                                                             pqrs::osx::iokit_hid_usage_keyboard_a);
    REQUIRE(actual == pqrs::osx::iokit_hid_system::key_code_keyboard_a);
  }
  {
    auto actual = pqrs::osx::iokit_hid_system::make_key_code(pqrs::osx::iokit_hid_usage_page_keyboard_or_keypad,
                                                             pqrs::osx::iokit_hid_usage_keyboard_b);
    REQUIRE(actual == pqrs::osx::iokit_hid_system::key_code_keyboard_b);
  }
  {
    auto actual = pqrs::osx::iokit_hid_system::make_key_code(pqrs::osx::iokit_hid_usage_page_keyboard_or_keypad,
                                                             pqrs::osx::iokit_hid_usage_keyboard_reserved);
    REQUIRE(actual == std::nullopt);
  }

  //
  // iokit_hid_usage_page_apple_vendor_keyboard
  //

  {
    auto actual = pqrs::osx::iokit_hid_system::make_key_code(pqrs::osx::iokit_hid_usage_page_apple_vendor_keyboard,
                                                             pqrs::osx::iokit_hid_usage_apple_vendor_keyboard_dashboard);
    REQUIRE(actual == pqrs::osx::iokit_hid_system::key_code_apple_vendor_keyboard_dashboard);
  }
  {
    auto actual = pqrs::osx::iokit_hid_system::make_key_code(pqrs::osx::iokit_hid_usage_page_apple_vendor_keyboard,
                                                             pqrs::osx::iokit_hid_usage_apple_vendor_keyboard_function);
    REQUIRE(actual == pqrs::osx::iokit_hid_system::key_code_apple_vendor_keyboard_function);
  }
  {
    auto actual = pqrs::osx::iokit_hid_system::make_key_code(pqrs::osx::iokit_hid_usage_page_apple_vendor_keyboard,
                                                             pqrs::osx::iokit_hid_usage_apple_vendor_keyboard_spotlight);
    REQUIRE(actual == std::nullopt);
  }

  //
  // iokit_hid_usage_page_apple_vendor_top_case
  //

  {
    auto actual = pqrs::osx::iokit_hid_system::make_key_code(pqrs::osx::iokit_hid_usage_page_apple_vendor_top_case,
                                                             pqrs::osx::iokit_hid_usage_apple_vendor_top_case_keyboard_fn);
    REQUIRE(actual == pqrs::osx::iokit_hid_system::key_code_apple_vendor_top_case_keyboard_fn);
  }
  {
    auto actual = pqrs::osx::iokit_hid_system::make_key_code(pqrs::osx::iokit_hid_usage_page_apple_vendor_keyboard,
                                                             pqrs::osx::iokit_hid_usage_apple_vendor_top_case_illumination_down);
    REQUIRE(actual == std::nullopt);
  }
}
