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
    {type_safe::get(iokit_hid_usage_keyboard_non_us_pound), key_code(0x2a)}, // non_us_pound == backslash
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
    {type_safe::get(iokit_hid_usage_keyboard_print_screen), key_code(0x69)},
    {type_safe::get(iokit_hid_usage_keyboard_scroll_lock), key_code(0x6b)},
    {type_safe::get(iokit_hid_usage_keyboard_pause), key_code(0x71)},
    {type_safe::get(iokit_hid_usage_keyboard_insert), key_code(0x72)},
    {type_safe::get(iokit_hid_usage_keyboard_home), key_code(0x73)},
    {type_safe::get(iokit_hid_usage_keyboard_page_up), key_code(0x74)},
    {type_safe::get(iokit_hid_usage_keyboard_delete_forward), key_code(0x75)},
    {type_safe::get(iokit_hid_usage_keyboard_end), key_code(0x77)},
    {type_safe::get(iokit_hid_usage_keyboard_page_down), key_code(0x79)},
    {type_safe::get(iokit_hid_usage_keyboard_right_arrow), key_code(0x7c)},
    {type_safe::get(iokit_hid_usage_keyboard_left_arrow), key_code(0x7b)},
    {type_safe::get(iokit_hid_usage_keyboard_down_arrow), key_code(0x7d)},
    {type_safe::get(iokit_hid_usage_keyboard_up_arrow), key_code(0x7e)},
    {type_safe::get(iokit_hid_usage_keypad_num_lock), key_code(0x47)},
    {type_safe::get(iokit_hid_usage_keypad_slash), key_code(0x4b)},
    {type_safe::get(iokit_hid_usage_keypad_asterisk), key_code(0x43)},
    {type_safe::get(iokit_hid_usage_keypad_hyphen), key_code(0x4e)},
    {type_safe::get(iokit_hid_usage_keypad_plus), key_code(0x45)},
    {type_safe::get(iokit_hid_usage_keypad_enter), key_code(0x4c)},
    {type_safe::get(iokit_hid_usage_keypad_1), key_code(0x53)},
    {type_safe::get(iokit_hid_usage_keypad_2), key_code(0x54)},
    {type_safe::get(iokit_hid_usage_keypad_3), key_code(0x55)},
    {type_safe::get(iokit_hid_usage_keypad_4), key_code(0x56)},
    {type_safe::get(iokit_hid_usage_keypad_5), key_code(0x57)},
    {type_safe::get(iokit_hid_usage_keypad_6), key_code(0x58)},
    {type_safe::get(iokit_hid_usage_keypad_7), key_code(0x59)},
    {type_safe::get(iokit_hid_usage_keypad_8), key_code(0x5b)},
    {type_safe::get(iokit_hid_usage_keypad_9), key_code(0x5c)},
    {type_safe::get(iokit_hid_usage_keypad_0), key_code(0x52)},
    {type_safe::get(iokit_hid_usage_keypad_period), key_code(0x41)},
    {type_safe::get(iokit_hid_usage_keyboard_non_us_backslash), key_code(0xa)},
    {type_safe::get(iokit_hid_usage_keyboard_application), key_code(0x6e)},
    // iokit_hid_usage_keyboard_power => get_hid_aux_control_button_map
    {type_safe::get(iokit_hid_usage_keypad_equal_sign), key_code(0x51)},
    {type_safe::get(iokit_hid_usage_keyboard_f13), key_code(0x69)},
    {type_safe::get(iokit_hid_usage_keyboard_f14), key_code(0x6b)},
    {type_safe::get(iokit_hid_usage_keyboard_f15), key_code(0x71)},
    {type_safe::get(iokit_hid_usage_keyboard_f16), key_code(0x6a)},
    {type_safe::get(iokit_hid_usage_keyboard_f17), key_code(0x40)},
    {type_safe::get(iokit_hid_usage_keyboard_f18), key_code(0x4f)},
    {type_safe::get(iokit_hid_usage_keyboard_f19), key_code(0x50)},
    {type_safe::get(iokit_hid_usage_keyboard_f20), key_code(0x5a)},
    // iokit_hid_usage_keyboard_f21
    // iokit_hid_usage_keyboard_f22
    // iokit_hid_usage_keyboard_f23
    // iokit_hid_usage_keyboard_f24
    // iokit_hid_usage_keyboard_execute
    {type_safe::get(iokit_hid_usage_keyboard_help), key_code(0x72)},
    // iokit_hid_usage_keyboard_menu
    // iokit_hid_usage_keyboard_select
    // iokit_hid_usage_keyboard_stop
    // iokit_hid_usage_keyboard_again
    // iokit_hid_usage_keyboard_undo
    // iokit_hid_usage_keyboard_cut
    // iokit_hid_usage_keyboard_copy
    // iokit_hid_usage_keyboard_paste
    // iokit_hid_usage_keyboard_find
    // iokit_hid_usage_keyboard_mute => get_hid_aux_control_button_map
    // iokit_hid_usage_keyboard_volume_up => get_hid_aux_control_button_map
    // iokit_hid_usage_keyboard_volume_down => get_hid_aux_control_button_map
    // iokit_hid_usage_keyboard_locking_caps_lock
    // iokit_hid_usage_keyboard_locking_num_lock
    // iokit_hid_usage_keyboard_locking_scroll_lock
    {type_safe::get(iokit_hid_usage_keypad_comma), key_code(0x5f)},
    // iokit_hid_usage_keypad_equal_sign_as400
    {type_safe::get(iokit_hid_usage_keyboard_international1), key_code(0x5e)},
    // iokit_hid_usage_keyboard_international2
    {type_safe::get(iokit_hid_usage_keyboard_international3), key_code(0x5d)},
    // iokit_hid_usage_keyboard_international4
    // iokit_hid_usage_keyboard_international5
    // iokit_hid_usage_keyboard_international6
    // iokit_hid_usage_keyboard_international7
    // iokit_hid_usage_keyboard_international8
    // iokit_hid_usage_keyboard_international9
    {type_safe::get(iokit_hid_usage_keyboard_lang1), key_code(0x68)},
    {type_safe::get(iokit_hid_usage_keyboard_lang2), key_code(0x66)},
    // iokit_hid_usage_keyboard_lang3
    // iokit_hid_usage_keyboard_lang4
    // iokit_hid_usage_keyboard_lang5
    // iokit_hid_usage_keyboard_lang6
    // iokit_hid_usage_keyboard_lang7
    // iokit_hid_usage_keyboard_lang8
    // iokit_hid_usage_keyboard_lang9
    // iokit_hid_usage_keyboard_alternate_erase
    // iokit_hid_usage_keyboard_sys_req_or_attention
    // iokit_hid_usage_keyboard_cancel
    // iokit_hid_usage_keyboard_clear
    // iokit_hid_usage_keyboard_prior
    // iokit_hid_usage_keyboard_return
    // iokit_hid_usage_keyboard_separator
    // iokit_hid_usage_keyboard_out
    // iokit_hid_usage_keyboard_oper
    // iokit_hid_usage_keyboard_clear_or_again
    // iokit_hid_usage_keyboard_cr_sel_or_props
    // iokit_hid_usage_keyboard_ex_sel

    {type_safe::get(iokit_hid_usage_keyboard_left_control), key_code(0x3b)},
    {type_safe::get(iokit_hid_usage_keyboard_left_shift), key_code(0x38)},
    {type_safe::get(iokit_hid_usage_keyboard_left_alt), key_code(0x3a)},
    {type_safe::get(iokit_hid_usage_keyboard_left_gui), key_code(0x37)},
    {type_safe::get(iokit_hid_usage_keyboard_right_control), key_code(0x3e)},
    {type_safe::get(iokit_hid_usage_keyboard_right_shift), key_code(0x3c)},
    {type_safe::get(iokit_hid_usage_keyboard_right_alt), key_code(0x3d)},
    {type_safe::get(iokit_hid_usage_keyboard_right_gui), key_code(0x36)},
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
