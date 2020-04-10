#pragma once

// (C) Copyright Takayama Fumihiko 2020.
// Distributed under the Boost Software License, Version 1.0.
// (See http://www.boost.org/LICENSE_1_0.txt)

#include <frozen/unordered_map.h>
#include <optional>
#include <pqrs/osx/iokit_types.hpp>
#include <unordered_map>

namespace pqrs {
namespace osx {
namespace iokit_hid_system {
struct key_code : type_safe::strong_typedef<key_code, int32_t>,
                  type_safe::strong_typedef_op::equality_comparison<key_code>,
                  type_safe::strong_typedef_op::relational_comparison<key_code> {
  using strong_typedef::strong_typedef;
};

constexpr std::pair<type_safe::underlying_type<iokit_hid_usage>, key_code> usage_page_keyboard_or_keypad_key_code_pairs[] = {
    {type_safe::get(iokit_hid_usage_keyboard_a), key_code(0x0)},
    {type_safe::get(iokit_hid_usage_keyboard_b), key_code(0xb)},
    {type_safe::get(iokit_hid_usage_keyboard_c), key_code(0x8)},
    {type_safe::get(iokit_hid_usage_keyboard_d), key_code(0x2)},
    {type_safe::get(iokit_hid_usage_keyboard_e), key_code(0xe)},
    {type_safe::get(iokit_hid_usage_keyboard_f), key_code(0x3)},
    {type_safe::get(iokit_hid_usage_keyboard_g), key_code(0x5)},
    {type_safe::get(iokit_hid_usage_keyboard_h), key_code(0x4)},
    {type_safe::get(iokit_hid_usage_keyboard_i), key_code(0x22)},
    {type_safe::get(iokit_hid_usage_keyboard_j), key_code(0x26)},
    {type_safe::get(iokit_hid_usage_keyboard_k), key_code(0x28)},
    {type_safe::get(iokit_hid_usage_keyboard_l), key_code(0x25)},
    {type_safe::get(iokit_hid_usage_keyboard_m), key_code(0x2e)},
    {type_safe::get(iokit_hid_usage_keyboard_n), key_code(0x2d)},
    {type_safe::get(iokit_hid_usage_keyboard_o), key_code(0x1f)},
    {type_safe::get(iokit_hid_usage_keyboard_p), key_code(0x23)},
    {type_safe::get(iokit_hid_usage_keyboard_q), key_code(0xc)},
    {type_safe::get(iokit_hid_usage_keyboard_r), key_code(0xf)},
    {type_safe::get(iokit_hid_usage_keyboard_s), key_code(0x1)},
    {type_safe::get(iokit_hid_usage_keyboard_t), key_code(0x11)},
    {type_safe::get(iokit_hid_usage_keyboard_u), key_code(0x20)},
    {type_safe::get(iokit_hid_usage_keyboard_v), key_code(0x9)},
    {type_safe::get(iokit_hid_usage_keyboard_w), key_code(0xd)},
    {type_safe::get(iokit_hid_usage_keyboard_x), key_code(0x7)},
    {type_safe::get(iokit_hid_usage_keyboard_y), key_code(0x10)},
    {type_safe::get(iokit_hid_usage_keyboard_z), key_code(0x6)},

    {type_safe::get(iokit_hid_usage_keyboard_1), key_code(0x12)},
    {type_safe::get(iokit_hid_usage_keyboard_2), key_code(0x13)},
    {type_safe::get(iokit_hid_usage_keyboard_3), key_code(0x14)},
    {type_safe::get(iokit_hid_usage_keyboard_4), key_code(0x15)},
    {type_safe::get(iokit_hid_usage_keyboard_5), key_code(0x17)},
    {type_safe::get(iokit_hid_usage_keyboard_6), key_code(0x16)},
    {type_safe::get(iokit_hid_usage_keyboard_7), key_code(0x1a)},
    {type_safe::get(iokit_hid_usage_keyboard_8), key_code(0x1c)},
    {type_safe::get(iokit_hid_usage_keyboard_9), key_code(0x19)},
    {type_safe::get(iokit_hid_usage_keyboard_0), key_code(0x1d)},

    {type_safe::get(iokit_hid_usage_keyboard_return_or_enter), key_code(0x24)},
    {type_safe::get(iokit_hid_usage_keyboard_escape), key_code(0x35)},
    {type_safe::get(iokit_hid_usage_keyboard_delete_or_backspace), key_code(0x33)},
    {type_safe::get(iokit_hid_usage_keyboard_tab), key_code(0x30)},
    {type_safe::get(iokit_hid_usage_keyboard_spacebar), key_code(0x31)},
    {type_safe::get(iokit_hid_usage_keyboard_hyphen), key_code(0x1b)},
    {type_safe::get(iokit_hid_usage_keyboard_equal_sign), key_code(0x18)},
    {type_safe::get(iokit_hid_usage_keyboard_open_bracket), key_code(0x21)},
    {type_safe::get(iokit_hid_usage_keyboard_close_bracket), key_code(0x1e)},
    {type_safe::get(iokit_hid_usage_keyboard_backslash), key_code(0x2a)},
    // backslash ==  non_us_pound
    {type_safe::get(iokit_hid_usage_keyboard_non_us_pound), key_code(0x2a)},
    {type_safe::get(iokit_hid_usage_keyboard_semicolon), key_code(0x29)},
    {type_safe::get(iokit_hid_usage_keyboard_quote), key_code(0x27)},
    {type_safe::get(iokit_hid_usage_keyboard_grave_accent_and_tilde), key_code(0x32)},
    {type_safe::get(iokit_hid_usage_keyboard_comma), key_code(0x2b)},
    {type_safe::get(iokit_hid_usage_keyboard_period), key_code(0x2f)},
    {type_safe::get(iokit_hid_usage_keyboard_slash), key_code(0x2c)},
    {type_safe::get(iokit_hid_usage_keyboard_caps_lock), key_code(0x39)},

    {type_safe::get(iokit_hid_usage_keyboard_f1), key_code(0x7a)},
    {type_safe::get(iokit_hid_usage_keyboard_f2), key_code(0x78)},
    {type_safe::get(iokit_hid_usage_keyboard_f3), key_code(0x63)},
    {type_safe::get(iokit_hid_usage_keyboard_f4), key_code(0x76)},
    {type_safe::get(iokit_hid_usage_keyboard_f5), key_code(0x60)},
    {type_safe::get(iokit_hid_usage_keyboard_f6), key_code(0x61)},
    {type_safe::get(iokit_hid_usage_keyboard_f7), key_code(0x62)},
    {type_safe::get(iokit_hid_usage_keyboard_f8), key_code(0x64)},
    {type_safe::get(iokit_hid_usage_keyboard_f9), key_code(0x65)},
    {type_safe::get(iokit_hid_usage_keyboard_f10), key_code(0x6d)},
    {type_safe::get(iokit_hid_usage_keyboard_f11), key_code(0x67)},
    {type_safe::get(iokit_hid_usage_keyboard_f12), key_code(0x6f)},
};
constexpr auto usage_page_keyboard_or_keypad_key_code_map = frozen::make_unordered_map(usage_page_keyboard_or_keypad_key_code_pairs);

// hid usage -> IOHIDSystem key code
inline std::optional<key_code> make_hid_system_key(iokit_hid_usage_page usage_page, iokit_hid_usage usage) {
  if (usage_page == iokit_hid_usage_page_keyboard_or_keypad) {
    if (auto it = usage_page_keyboard_or_keypad_key_code_map.find(type_safe::get(usage))) {
      return it->second;
    }
  }

  return std::nullopt;
}
} // namespace iokit_hid_system
} // namespace osx
} // namespace pqrs

namespace std {
template <>
struct hash<pqrs::osx::iokit_hid_system::key_code> : type_safe::hashable<pqrs::osx::iokit_hid_system::key_code> {
};
} // namespace std
