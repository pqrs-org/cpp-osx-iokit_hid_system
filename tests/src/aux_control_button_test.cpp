#include <catch2/catch.hpp>

#include <pqrs/osx/iokit_hid_system.hpp>

TEST_CASE("make_aux_control_button") {
  //
  // Unsupported usage_page
  //

  {
    auto actual = pqrs::osx::iokit_hid_system::make_aux_control_button(pqrs::hid::usage_page::generic_desktop,
                                                                       pqrs::hid::usage::generic_desktop::keyboard);
    REQUIRE(actual == std::nullopt);
  }

  //
  // hid::usage_page::keyboard_or_keypad
  //

  {
    auto actual = pqrs::osx::iokit_hid_system::make_aux_control_button(pqrs::hid::usage_page::keyboard_or_keypad,
                                                                       pqrs::hid::usage::keyboard_or_keypad::keyboard_power);
    REQUIRE(actual == pqrs::osx::iokit_hid_system::aux_control_button::power);
  }
  {
    auto actual = pqrs::osx::iokit_hid_system::make_aux_control_button(pqrs::hid::usage_page::keyboard_or_keypad,
                                                                       pqrs::hid::usage::keyboard_or_keypad::reserved);
    REQUIRE(actual == std::nullopt);
  }

  //
  // hid::usage_page::consumer
  //

  {
    auto actual = pqrs::osx::iokit_hid_system::make_aux_control_button(pqrs::hid::usage_page::consumer,
                                                                       pqrs::hid::usage::consumer::mute);
    REQUIRE(actual == pqrs::osx::iokit_hid_system::aux_control_button::mute);
  }
  {
    auto actual = pqrs::osx::iokit_hid_system::make_aux_control_button(pqrs::hid::usage_page::consumer,
                                                                       pqrs::hid::usage::consumer::consumer_control);
    REQUIRE(actual == std::nullopt);
  }

  //
  // hid::usage_page::apple_vendor_keyboard
  //

  {
    auto actual = pqrs::osx::iokit_hid_system::make_aux_control_button(pqrs::hid::usage_page::apple_vendor_keyboard,
                                                                       pqrs::hid::usage::apple_vendor_keyboard::brightness_down);
    REQUIRE(actual == pqrs::osx::iokit_hid_system::aux_control_button::brightness_down);
  }
  {
    auto actual = pqrs::osx::iokit_hid_system::make_aux_control_button(pqrs::hid::usage_page::apple_vendor_keyboard,
                                                                       pqrs::hid::usage::apple_vendor_keyboard::spotlight);
    REQUIRE(actual == std::nullopt);
  }

  //
  // hid::usage_page::apple_vendor_top_case
  //

  {
    auto actual = pqrs::osx::iokit_hid_system::make_aux_control_button(pqrs::hid::usage_page::apple_vendor_top_case,
                                                                       pqrs::hid::usage::apple_vendor_top_case::illumination_down);
    REQUIRE(actual == pqrs::osx::iokit_hid_system::aux_control_button::illumination_down);
  }
  {
    auto actual = pqrs::osx::iokit_hid_system::make_aux_control_button(pqrs::hid::usage_page::apple_vendor_keyboard,
                                                                       pqrs::hid::usage::apple_vendor_top_case::keyboard_fn);
    REQUIRE(actual == std::nullopt);
  }
}
