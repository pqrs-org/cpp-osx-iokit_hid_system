#pragma once

// (C) Copyright Takayama Fumihiko 2018.
// Distributed under the Boost Software License, Version 1.0.
// (See http://www.boost.org/LICENSE_1_0.txt)

#include <IOKit/hid/IOHIDUsageTables.h>
#include <functional>
#include <iostream>
#include <type_safe/strong_typedef.hpp>

namespace pqrs {
namespace osx {
struct iokit_hid_usage : type_safe::strong_typedef<iokit_hid_usage, int32_t>,
                         type_safe::strong_typedef_op::equality_comparison<iokit_hid_usage>,
                         type_safe::strong_typedef_op::relational_comparison<iokit_hid_usage> {
  using strong_typedef::strong_typedef;
};

inline std::ostream& operator<<(std::ostream& stream, const iokit_hid_usage& value) {
  return stream << type_safe::get(value);
}

constexpr iokit_hid_usage iokit_hid_usage_generic_desktop_pointer(kHIDUsage_GD_Pointer);
constexpr iokit_hid_usage iokit_hid_usage_generic_desktop_mouse(kHIDUsage_GD_Mouse);
constexpr iokit_hid_usage iokit_hid_usage_generic_desktop_keyboard(kHIDUsage_GD_Keyboard);
constexpr iokit_hid_usage iokit_hid_usage_generic_desktop_keypad(kHIDUsage_GD_Keypad);
constexpr iokit_hid_usage iokit_hid_usage_generic_desktop_x(kHIDUsage_GD_X);
constexpr iokit_hid_usage iokit_hid_usage_generic_desktop_y(kHIDUsage_GD_Y);
constexpr iokit_hid_usage iokit_hid_usage_generic_desktop_z(kHIDUsage_GD_Z);
constexpr iokit_hid_usage iokit_hid_usage_generic_desktop_wheel(kHIDUsage_GD_Wheel);

constexpr iokit_hid_usage iokit_hid_usage_led_caps_lock(kHIDUsage_LED_CapsLock);

constexpr iokit_hid_usage iokit_hid_usage_consumer_consumer_control(kHIDUsage_Csmr_ConsumerControl);
constexpr iokit_hid_usage iokit_hid_usage_consumer_power(kHIDUsage_Csmr_Power);
constexpr iokit_hid_usage iokit_hid_usage_consumer_display_brightness_increment(kHIDUsage_Csmr_DisplayBrightnessIncrement);
constexpr iokit_hid_usage iokit_hid_usage_consumer_display_brightness_decrement(kHIDUsage_Csmr_DisplayBrightnessDecrement);
constexpr iokit_hid_usage iokit_hid_usage_consumer_fast_forward(kHIDUsage_Csmr_FastForward);
constexpr iokit_hid_usage iokit_hid_usage_consumer_rewind(kHIDUsage_Csmr_Rewind);
constexpr iokit_hid_usage iokit_hid_usage_consumer_scan_next_track(kHIDUsage_Csmr_ScanNextTrack);
constexpr iokit_hid_usage iokit_hid_usage_consumer_scan_previous_track(kHIDUsage_Csmr_ScanPreviousTrack);
constexpr iokit_hid_usage iokit_hid_usage_consumer_eject(kHIDUsage_Csmr_Eject);
constexpr iokit_hid_usage iokit_hid_usage_consumer_play_or_pause(kHIDUsage_Csmr_PlayOrPause);
constexpr iokit_hid_usage iokit_hid_usage_consumer_mute(kHIDUsage_Csmr_Mute);
constexpr iokit_hid_usage iokit_hid_usage_consumer_volume_increment(kHIDUsage_Csmr_VolumeIncrement);
constexpr iokit_hid_usage iokit_hid_usage_consumer_volume_decrement(kHIDUsage_Csmr_VolumeDecrement);
constexpr iokit_hid_usage iokit_hid_usage_consumer_ac_pan(kHIDUsage_Csmr_ACPan);

constexpr iokit_hid_usage iokit_hid_usage_apple_vendor_top_case(0x0001);
constexpr iokit_hid_usage iokit_hid_usage_apple_vendor_display(0x0002);
constexpr iokit_hid_usage iokit_hid_usage_apple_vendor_accelerometer(0x0003);
constexpr iokit_hid_usage iokit_hid_usage_apple_vendor_ambient_light_sensor(0x0004);
constexpr iokit_hid_usage iokit_hid_usage_apple_vendor_temperature_sensor(0x0005);
constexpr iokit_hid_usage iokit_hid_usage_apple_vendor_keyboard(0x0006);
constexpr iokit_hid_usage iokit_hid_usage_apple_vendor_headset(0x0007);
constexpr iokit_hid_usage iokit_hid_usage_apple_vendor_proximity_sensor(0x0008);
constexpr iokit_hid_usage iokit_hid_usage_apple_vendor_gyro(0x0009);
constexpr iokit_hid_usage iokit_hid_usage_apple_vendor_compass(0x000A);
constexpr iokit_hid_usage iokit_hid_usage_apple_vendor_device_management(0x000B);
constexpr iokit_hid_usage iokit_hid_usage_apple_vendor_trackpad(0x000C);
constexpr iokit_hid_usage iokit_hid_usage_apple_vendor_top_case_reserved(0x000D);
constexpr iokit_hid_usage iokit_hid_usage_apple_vendor_motion(0x000E);
constexpr iokit_hid_usage iokit_hid_usage_apple_vendor_keyboard_backlight(0x000F);
constexpr iokit_hid_usage iokit_hid_usage_apple_vendor_device_motion_lite(0x0010);
constexpr iokit_hid_usage iokit_hid_usage_apple_vendor_force(0x0011);
constexpr iokit_hid_usage iokit_hid_usage_apple_vendor_bluetooth_radio(0x0012);
constexpr iokit_hid_usage iokit_hid_usage_apple_vendor_orb(0x0013);
constexpr iokit_hid_usage iokit_hid_usage_apple_vendor_accessory_battery(0x0014);
constexpr iokit_hid_usage iokit_hid_usage_apple_vendor_humidity(0x0015);
constexpr iokit_hid_usage iokit_hid_usage_apple_vendor_hid_event_relay(0x0016);
constexpr iokit_hid_usage iokit_hid_usage_apple_vendor_nx_event(0x0017);
constexpr iokit_hid_usage iokit_hid_usage_apple_vendor_nx_event_translated(0x0018);
constexpr iokit_hid_usage iokit_hid_usage_apple_vendor_nx_event_diagnostic(0x0019);
constexpr iokit_hid_usage iokit_hid_usage_apple_vendor_homer(0x0020);
constexpr iokit_hid_usage iokit_hid_usage_apple_vendor_color(0x0021);
constexpr iokit_hid_usage iokit_hid_usage_apple_vendor_accessibility(0x0022);

constexpr iokit_hid_usage iokit_hid_usage_apple_vendor_keyboard_spotlight(0x0001);
constexpr iokit_hid_usage iokit_hid_usage_apple_vendor_keyboard_dashboard(0x0002);
constexpr iokit_hid_usage iokit_hid_usage_apple_vendor_keyboard_function(0x0003);
constexpr iokit_hid_usage iokit_hid_usage_apple_vendor_keyboard_launchpad(0x0004);
constexpr iokit_hid_usage iokit_hid_usage_apple_vendor_keyboard_reserved(0x000a);
constexpr iokit_hid_usage iokit_hid_usage_apple_vendor_keyboard_caps_lock_delay_enable(0x000b);
constexpr iokit_hid_usage iokit_hid_usage_apple_vendor_keyboard_power_state(0x000c);
constexpr iokit_hid_usage iokit_hid_usage_apple_vendor_keyboard_expose_all(0x0010);
constexpr iokit_hid_usage iokit_hid_usage_apple_vendor_keyboard_expose_desktop(0x0011);
constexpr iokit_hid_usage iokit_hid_usage_apple_vendor_keyboard_brightness_up(0x0020);
constexpr iokit_hid_usage iokit_hid_usage_apple_vendor_keyboard_brightness_down(0x0021);
constexpr iokit_hid_usage iokit_hid_usage_apple_vendor_keyboard_language(0x0030);

constexpr iokit_hid_usage iokit_hid_usage_apple_vendor_multitouch_power_off(0x0001);
constexpr iokit_hid_usage iokit_hid_usage_apple_vendor_multitouch_device_ready(0x0002);
constexpr iokit_hid_usage iokit_hid_usage_apple_vendor_multitouch_external_message(0x0003);
constexpr iokit_hid_usage iokit_hid_usage_apple_vendor_multitouch_will_power_on(0x0004);
constexpr iokit_hid_usage iokit_hid_usage_apple_vendor_multitouch_touch_cancel(0x0005);

constexpr iokit_hid_usage iokit_hid_usage_apple_vendor_top_case_keyboard_fn(0x0003);
constexpr iokit_hid_usage iokit_hid_usage_apple_vendor_top_case_brightness_up(0x0004);
constexpr iokit_hid_usage iokit_hid_usage_apple_vendor_top_case_brightness_down(0x0005);
constexpr iokit_hid_usage iokit_hid_usage_apple_vendor_top_case_video_mirror(0x0006);
constexpr iokit_hid_usage iokit_hid_usage_apple_vendor_top_case_illumination_toggle(0x0007);
constexpr iokit_hid_usage iokit_hid_usage_apple_vendor_top_case_illumination_up(0x0008);
constexpr iokit_hid_usage iokit_hid_usage_apple_vendor_top_case_illumination_down(0x0009);
constexpr iokit_hid_usage iokit_hid_usage_apple_vendor_top_case_clamshell_latched(0x000a);
constexpr iokit_hid_usage iokit_hid_usage_apple_vendor_top_case_reserved_mouse_data(0x00c0);
} // namespace osx
} // namespace pqrs

namespace std {
template <>
struct hash<pqrs::osx::iokit_hid_usage> : type_safe::hashable<pqrs::osx::iokit_hid_usage> {
};
} // namespace std
