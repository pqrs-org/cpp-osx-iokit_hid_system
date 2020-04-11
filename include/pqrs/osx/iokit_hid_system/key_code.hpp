#pragma once

// (C) Copyright Takayama Fumihiko 2020.
// Distributed under the Boost Software License, Version 1.0.
// (See http://www.boost.org/LICENSE_1_0.txt)

#include <frozen/unordered_map.h>
#include <optional>
#include <pqrs/osx/iokit_types.hpp>

namespace pqrs {
namespace osx {
namespace iokit_hid_system {
struct key_code : type_safe::strong_typedef<key_code, int32_t>,
                  type_safe::strong_typedef_op::equality_comparison<key_code>,
                  type_safe::strong_typedef_op::relational_comparison<key_code> {
  using strong_typedef::strong_typedef;
};

//
// key_code
//

constexpr key_code key_code_keyboard_a(0x0);
constexpr key_code key_code_keyboard_b(0xb);
constexpr key_code key_code_keyboard_c(0x8);
constexpr key_code key_code_keyboard_d(0x2);
constexpr key_code key_code_keyboard_e(0xe);
constexpr key_code key_code_keyboard_f(0x3);
constexpr key_code key_code_keyboard_g(0x5);
constexpr key_code key_code_keyboard_h(0x4);
constexpr key_code key_code_keyboard_i(0x22);
constexpr key_code key_code_keyboard_j(0x26);
constexpr key_code key_code_keyboard_k(0x28);
constexpr key_code key_code_keyboard_l(0x25);
constexpr key_code key_code_keyboard_m(0x2e);
constexpr key_code key_code_keyboard_n(0x2d);
constexpr key_code key_code_keyboard_o(0x1f);
constexpr key_code key_code_keyboard_p(0x23);
constexpr key_code key_code_keyboard_q(0xc);
constexpr key_code key_code_keyboard_r(0xf);
constexpr key_code key_code_keyboard_s(0x1);
constexpr key_code key_code_keyboard_t(0x11);
constexpr key_code key_code_keyboard_u(0x20);
constexpr key_code key_code_keyboard_v(0x9);
constexpr key_code key_code_keyboard_w(0xd);
constexpr key_code key_code_keyboard_x(0x7);
constexpr key_code key_code_keyboard_y(0x10);
constexpr key_code key_code_keyboard_z(0x6);
constexpr key_code key_code_keyboard_1(0x12);
constexpr key_code key_code_keyboard_2(0x13);
constexpr key_code key_code_keyboard_3(0x14);
constexpr key_code key_code_keyboard_4(0x15);
constexpr key_code key_code_keyboard_5(0x17);
constexpr key_code key_code_keyboard_6(0x16);
constexpr key_code key_code_keyboard_7(0x1a);
constexpr key_code key_code_keyboard_8(0x1c);
constexpr key_code key_code_keyboard_9(0x19);
constexpr key_code key_code_keyboard_0(0x1d);
constexpr key_code key_code_keyboard_return_or_enter(0x24);
constexpr key_code key_code_keyboard_escape(0x35);
constexpr key_code key_code_keyboard_delete_or_backspace(0x33);
constexpr key_code key_code_keyboard_tab(0x30);
constexpr key_code key_code_keyboard_spacebar(0x31);
constexpr key_code key_code_keyboard_hyphen(0x1b);
constexpr key_code key_code_keyboard_equal_sign(0x18);
constexpr key_code key_code_keyboard_open_bracket(0x21);
constexpr key_code key_code_keyboard_close_bracket(0x1e);
constexpr key_code key_code_keyboard_backslash(0x2a);
constexpr key_code key_code_keyboard_non_us_pound(0x2a); // non_us_pound == backslash
constexpr key_code key_code_keyboard_semicolon(0x29);
constexpr key_code key_code_keyboard_quote(0x27);
constexpr key_code key_code_keyboard_grave_accent_and_tilde(0x32);
constexpr key_code key_code_keyboard_comma(0x2b);
constexpr key_code key_code_keyboard_period(0x2f);
constexpr key_code key_code_keyboard_slash(0x2c);
constexpr key_code key_code_keyboard_caps_lock(0x39);
constexpr key_code key_code_keyboard_f1(0x7a);
constexpr key_code key_code_keyboard_f2(0x78);
constexpr key_code key_code_keyboard_f3(0x63);
constexpr key_code key_code_keyboard_f4(0x76);
constexpr key_code key_code_keyboard_f5(0x60);
constexpr key_code key_code_keyboard_f6(0x61);
constexpr key_code key_code_keyboard_f7(0x62);
constexpr key_code key_code_keyboard_f8(0x64);
constexpr key_code key_code_keyboard_f9(0x65);
constexpr key_code key_code_keyboard_f10(0x6d);
constexpr key_code key_code_keyboard_f11(0x67);
constexpr key_code key_code_keyboard_f12(0x6f);
constexpr key_code key_code_keyboard_print_screen(0x69);
constexpr key_code key_code_keyboard_scroll_lock(0x6b);
constexpr key_code key_code_keyboard_pause(0x71);
constexpr key_code key_code_keyboard_insert(0x72);
constexpr key_code key_code_keyboard_home(0x73);
constexpr key_code key_code_keyboard_page_up(0x74);
constexpr key_code key_code_keyboard_delete_forward(0x75);
constexpr key_code key_code_keyboard_end(0x77);
constexpr key_code key_code_keyboard_page_down(0x79);
constexpr key_code key_code_keyboard_right_arrow(0x7c);
constexpr key_code key_code_keyboard_left_arrow(0x7b);
constexpr key_code key_code_keyboard_down_arrow(0x7d);
constexpr key_code key_code_keyboard_up_arrow(0x7e);
constexpr key_code key_code_keypad_num_lock(0x47);
constexpr key_code key_code_keypad_slash(0x4b);
constexpr key_code key_code_keypad_asterisk(0x43);
constexpr key_code key_code_keypad_hyphen(0x4e);
constexpr key_code key_code_keypad_plus(0x45);
constexpr key_code key_code_keypad_enter(0x4c);
constexpr key_code key_code_keypad_1(0x53);
constexpr key_code key_code_keypad_2(0x54);
constexpr key_code key_code_keypad_3(0x55);
constexpr key_code key_code_keypad_4(0x56);
constexpr key_code key_code_keypad_5(0x57);
constexpr key_code key_code_keypad_6(0x58);
constexpr key_code key_code_keypad_7(0x59);
constexpr key_code key_code_keypad_8(0x5b);
constexpr key_code key_code_keypad_9(0x5c);
constexpr key_code key_code_keypad_0(0x52);
constexpr key_code key_code_keypad_period(0x41);
constexpr key_code key_code_keyboard_non_us_backslash(0xa);
constexpr key_code key_code_keyboard_application(0x6e);
// iokit_hid_usage_keyboard_power => aux_control_button
constexpr key_code key_code_keypad_equal_sign(0x51);
constexpr key_code key_code_keyboard_f13(0x69);
constexpr key_code key_code_keyboard_f14(0x6b);
constexpr key_code key_code_keyboard_f15(0x71);
constexpr key_code key_code_keyboard_f16(0x6a);
constexpr key_code key_code_keyboard_f17(0x40);
constexpr key_code key_code_keyboard_f18(0x4f);
constexpr key_code key_code_keyboard_f19(0x50);
constexpr key_code key_code_keyboard_f20(0x5a);
// iokit_hid_usage_keyboard_f21
// iokit_hid_usage_keyboard_f22
// iokit_hid_usage_keyboard_f23
// iokit_hid_usage_keyboard_f24
// iokit_hid_usage_keyboard_execute
constexpr key_code key_code_keyboard_help(0x72);
// iokit_hid_usage_keyboard_menu
// iokit_hid_usage_keyboard_select
// iokit_hid_usage_keyboard_stop
// iokit_hid_usage_keyboard_again
// iokit_hid_usage_keyboard_undo
// iokit_hid_usage_keyboard_cut
// iokit_hid_usage_keyboard_copy
// iokit_hid_usage_keyboard_paste
// iokit_hid_usage_keyboard_find
// iokit_hid_usage_keyboard_mute => aux_control_button
// iokit_hid_usage_keyboard_volume_up => aux_control_button
// iokit_hid_usage_keyboard_volume_down => aux_control_button
// iokit_hid_usage_keyboard_locking_caps_lock
// iokit_hid_usage_keyboard_locking_num_lock
// iokit_hid_usage_keyboard_locking_scroll_lock
constexpr key_code key_code_keypad_comma(0x5f);
// iokit_hid_usage_keypad_equal_sign_as400
constexpr key_code key_code_keyboard_international1(0x5e);
// iokit_hid_usage_keyboard_international2
constexpr key_code key_code_keyboard_international3(0x5d);
// iokit_hid_usage_keyboard_international4
// iokit_hid_usage_keyboard_international5
// iokit_hid_usage_keyboard_international6
// iokit_hid_usage_keyboard_international7
// iokit_hid_usage_keyboard_international8
// iokit_hid_usage_keyboard_international9
constexpr key_code key_code_keyboard_lang1(0x68);
constexpr key_code key_code_keyboard_lang2(0x66);
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

constexpr key_code key_code_keyboard_left_control(0x3b);
constexpr key_code key_code_keyboard_left_shift(0x38);
constexpr key_code key_code_keyboard_left_alt(0x3a);
constexpr key_code key_code_keyboard_left_gui(0x37);
constexpr key_code key_code_keyboard_right_control(0x3e);
constexpr key_code key_code_keyboard_right_shift(0x3c);
constexpr key_code key_code_keyboard_right_alt(0x3d);
constexpr key_code key_code_keyboard_right_gui(0x36);

constexpr key_code key_code_apple_vendor_keyboard_dashboard(0x82);
constexpr key_code key_code_apple_vendor_keyboard_function(0x3f);
constexpr key_code key_code_apple_vendor_keyboard_launchpad(0x83);
constexpr key_code key_code_apple_vendor_keyboard_expose_all(0xa0);

constexpr key_code key_code_apple_vendor_top_case_keyboard_fn(0x3f); // apple_vendor_top_case_keyboard_fn == apple_vendor_keyboard_function

//
// make_key_code
//

#define PQRS_OSX_IOKIT_HID_SYSTEM_KEY_CODE_PAIR(name) \
  { type_safe::get(iokit_hid_usage_##name), key_code_##name }

constexpr std::pair<type_safe::underlying_type<iokit_hid_usage>, key_code> usage_page_keyboard_or_keypad_key_code_pairs[] = {
    PQRS_OSX_IOKIT_HID_SYSTEM_KEY_CODE_PAIR(keyboard_a),
    PQRS_OSX_IOKIT_HID_SYSTEM_KEY_CODE_PAIR(keyboard_b),
    PQRS_OSX_IOKIT_HID_SYSTEM_KEY_CODE_PAIR(keyboard_c),
    PQRS_OSX_IOKIT_HID_SYSTEM_KEY_CODE_PAIR(keyboard_d),
    PQRS_OSX_IOKIT_HID_SYSTEM_KEY_CODE_PAIR(keyboard_e),
    PQRS_OSX_IOKIT_HID_SYSTEM_KEY_CODE_PAIR(keyboard_f),
    PQRS_OSX_IOKIT_HID_SYSTEM_KEY_CODE_PAIR(keyboard_g),
    PQRS_OSX_IOKIT_HID_SYSTEM_KEY_CODE_PAIR(keyboard_h),
    PQRS_OSX_IOKIT_HID_SYSTEM_KEY_CODE_PAIR(keyboard_i),
    PQRS_OSX_IOKIT_HID_SYSTEM_KEY_CODE_PAIR(keyboard_j),
    PQRS_OSX_IOKIT_HID_SYSTEM_KEY_CODE_PAIR(keyboard_k),
    PQRS_OSX_IOKIT_HID_SYSTEM_KEY_CODE_PAIR(keyboard_l),
    PQRS_OSX_IOKIT_HID_SYSTEM_KEY_CODE_PAIR(keyboard_m),
    PQRS_OSX_IOKIT_HID_SYSTEM_KEY_CODE_PAIR(keyboard_n),
    PQRS_OSX_IOKIT_HID_SYSTEM_KEY_CODE_PAIR(keyboard_o),
    PQRS_OSX_IOKIT_HID_SYSTEM_KEY_CODE_PAIR(keyboard_p),
    PQRS_OSX_IOKIT_HID_SYSTEM_KEY_CODE_PAIR(keyboard_q),
    PQRS_OSX_IOKIT_HID_SYSTEM_KEY_CODE_PAIR(keyboard_r),
    PQRS_OSX_IOKIT_HID_SYSTEM_KEY_CODE_PAIR(keyboard_s),
    PQRS_OSX_IOKIT_HID_SYSTEM_KEY_CODE_PAIR(keyboard_t),
    PQRS_OSX_IOKIT_HID_SYSTEM_KEY_CODE_PAIR(keyboard_u),
    PQRS_OSX_IOKIT_HID_SYSTEM_KEY_CODE_PAIR(keyboard_v),
    PQRS_OSX_IOKIT_HID_SYSTEM_KEY_CODE_PAIR(keyboard_w),
    PQRS_OSX_IOKIT_HID_SYSTEM_KEY_CODE_PAIR(keyboard_x),
    PQRS_OSX_IOKIT_HID_SYSTEM_KEY_CODE_PAIR(keyboard_y),
    PQRS_OSX_IOKIT_HID_SYSTEM_KEY_CODE_PAIR(keyboard_z),
    PQRS_OSX_IOKIT_HID_SYSTEM_KEY_CODE_PAIR(keyboard_1),
    PQRS_OSX_IOKIT_HID_SYSTEM_KEY_CODE_PAIR(keyboard_2),
    PQRS_OSX_IOKIT_HID_SYSTEM_KEY_CODE_PAIR(keyboard_3),
    PQRS_OSX_IOKIT_HID_SYSTEM_KEY_CODE_PAIR(keyboard_4),
    PQRS_OSX_IOKIT_HID_SYSTEM_KEY_CODE_PAIR(keyboard_5),
    PQRS_OSX_IOKIT_HID_SYSTEM_KEY_CODE_PAIR(keyboard_6),
    PQRS_OSX_IOKIT_HID_SYSTEM_KEY_CODE_PAIR(keyboard_7),
    PQRS_OSX_IOKIT_HID_SYSTEM_KEY_CODE_PAIR(keyboard_8),
    PQRS_OSX_IOKIT_HID_SYSTEM_KEY_CODE_PAIR(keyboard_9),
    PQRS_OSX_IOKIT_HID_SYSTEM_KEY_CODE_PAIR(keyboard_0),
    PQRS_OSX_IOKIT_HID_SYSTEM_KEY_CODE_PAIR(keyboard_return_or_enter),
    PQRS_OSX_IOKIT_HID_SYSTEM_KEY_CODE_PAIR(keyboard_escape),
    PQRS_OSX_IOKIT_HID_SYSTEM_KEY_CODE_PAIR(keyboard_delete_or_backspace),
    PQRS_OSX_IOKIT_HID_SYSTEM_KEY_CODE_PAIR(keyboard_tab),
    PQRS_OSX_IOKIT_HID_SYSTEM_KEY_CODE_PAIR(keyboard_spacebar),
    PQRS_OSX_IOKIT_HID_SYSTEM_KEY_CODE_PAIR(keyboard_hyphen),
    PQRS_OSX_IOKIT_HID_SYSTEM_KEY_CODE_PAIR(keyboard_equal_sign),
    PQRS_OSX_IOKIT_HID_SYSTEM_KEY_CODE_PAIR(keyboard_open_bracket),
    PQRS_OSX_IOKIT_HID_SYSTEM_KEY_CODE_PAIR(keyboard_close_bracket),
    PQRS_OSX_IOKIT_HID_SYSTEM_KEY_CODE_PAIR(keyboard_backslash),
    PQRS_OSX_IOKIT_HID_SYSTEM_KEY_CODE_PAIR(keyboard_non_us_pound),
    PQRS_OSX_IOKIT_HID_SYSTEM_KEY_CODE_PAIR(keyboard_semicolon),
    PQRS_OSX_IOKIT_HID_SYSTEM_KEY_CODE_PAIR(keyboard_quote),
    PQRS_OSX_IOKIT_HID_SYSTEM_KEY_CODE_PAIR(keyboard_grave_accent_and_tilde),
    PQRS_OSX_IOKIT_HID_SYSTEM_KEY_CODE_PAIR(keyboard_comma),
    PQRS_OSX_IOKIT_HID_SYSTEM_KEY_CODE_PAIR(keyboard_period),
    PQRS_OSX_IOKIT_HID_SYSTEM_KEY_CODE_PAIR(keyboard_slash),
    PQRS_OSX_IOKIT_HID_SYSTEM_KEY_CODE_PAIR(keyboard_caps_lock),
    PQRS_OSX_IOKIT_HID_SYSTEM_KEY_CODE_PAIR(keyboard_f1),
    PQRS_OSX_IOKIT_HID_SYSTEM_KEY_CODE_PAIR(keyboard_f2),
    PQRS_OSX_IOKIT_HID_SYSTEM_KEY_CODE_PAIR(keyboard_f3),
    PQRS_OSX_IOKIT_HID_SYSTEM_KEY_CODE_PAIR(keyboard_f4),
    PQRS_OSX_IOKIT_HID_SYSTEM_KEY_CODE_PAIR(keyboard_f5),
    PQRS_OSX_IOKIT_HID_SYSTEM_KEY_CODE_PAIR(keyboard_f6),
    PQRS_OSX_IOKIT_HID_SYSTEM_KEY_CODE_PAIR(keyboard_f7),
    PQRS_OSX_IOKIT_HID_SYSTEM_KEY_CODE_PAIR(keyboard_f8),
    PQRS_OSX_IOKIT_HID_SYSTEM_KEY_CODE_PAIR(keyboard_f9),
    PQRS_OSX_IOKIT_HID_SYSTEM_KEY_CODE_PAIR(keyboard_f10),
    PQRS_OSX_IOKIT_HID_SYSTEM_KEY_CODE_PAIR(keyboard_f11),
    PQRS_OSX_IOKIT_HID_SYSTEM_KEY_CODE_PAIR(keyboard_f12),
    PQRS_OSX_IOKIT_HID_SYSTEM_KEY_CODE_PAIR(keyboard_print_screen),
    PQRS_OSX_IOKIT_HID_SYSTEM_KEY_CODE_PAIR(keyboard_scroll_lock),
    PQRS_OSX_IOKIT_HID_SYSTEM_KEY_CODE_PAIR(keyboard_pause),
    PQRS_OSX_IOKIT_HID_SYSTEM_KEY_CODE_PAIR(keyboard_insert),
    PQRS_OSX_IOKIT_HID_SYSTEM_KEY_CODE_PAIR(keyboard_home),
    PQRS_OSX_IOKIT_HID_SYSTEM_KEY_CODE_PAIR(keyboard_page_up),
    PQRS_OSX_IOKIT_HID_SYSTEM_KEY_CODE_PAIR(keyboard_delete_forward),
    PQRS_OSX_IOKIT_HID_SYSTEM_KEY_CODE_PAIR(keyboard_end),
    PQRS_OSX_IOKIT_HID_SYSTEM_KEY_CODE_PAIR(keyboard_page_down),
    PQRS_OSX_IOKIT_HID_SYSTEM_KEY_CODE_PAIR(keyboard_right_arrow),
    PQRS_OSX_IOKIT_HID_SYSTEM_KEY_CODE_PAIR(keyboard_left_arrow),
    PQRS_OSX_IOKIT_HID_SYSTEM_KEY_CODE_PAIR(keyboard_down_arrow),
    PQRS_OSX_IOKIT_HID_SYSTEM_KEY_CODE_PAIR(keyboard_up_arrow),
    PQRS_OSX_IOKIT_HID_SYSTEM_KEY_CODE_PAIR(keypad_num_lock),
    PQRS_OSX_IOKIT_HID_SYSTEM_KEY_CODE_PAIR(keypad_slash),
    PQRS_OSX_IOKIT_HID_SYSTEM_KEY_CODE_PAIR(keypad_asterisk),
    PQRS_OSX_IOKIT_HID_SYSTEM_KEY_CODE_PAIR(keypad_hyphen),
    PQRS_OSX_IOKIT_HID_SYSTEM_KEY_CODE_PAIR(keypad_plus),
    PQRS_OSX_IOKIT_HID_SYSTEM_KEY_CODE_PAIR(keypad_enter),
    PQRS_OSX_IOKIT_HID_SYSTEM_KEY_CODE_PAIR(keypad_1),
    PQRS_OSX_IOKIT_HID_SYSTEM_KEY_CODE_PAIR(keypad_2),
    PQRS_OSX_IOKIT_HID_SYSTEM_KEY_CODE_PAIR(keypad_3),
    PQRS_OSX_IOKIT_HID_SYSTEM_KEY_CODE_PAIR(keypad_4),
    PQRS_OSX_IOKIT_HID_SYSTEM_KEY_CODE_PAIR(keypad_5),
    PQRS_OSX_IOKIT_HID_SYSTEM_KEY_CODE_PAIR(keypad_6),
    PQRS_OSX_IOKIT_HID_SYSTEM_KEY_CODE_PAIR(keypad_7),
    PQRS_OSX_IOKIT_HID_SYSTEM_KEY_CODE_PAIR(keypad_8),
    PQRS_OSX_IOKIT_HID_SYSTEM_KEY_CODE_PAIR(keypad_9),
    PQRS_OSX_IOKIT_HID_SYSTEM_KEY_CODE_PAIR(keypad_0),
    PQRS_OSX_IOKIT_HID_SYSTEM_KEY_CODE_PAIR(keypad_period),
    PQRS_OSX_IOKIT_HID_SYSTEM_KEY_CODE_PAIR(keyboard_non_us_backslash),
    PQRS_OSX_IOKIT_HID_SYSTEM_KEY_CODE_PAIR(keyboard_application),
    // iokit_hid_usage_keyboard_power
    PQRS_OSX_IOKIT_HID_SYSTEM_KEY_CODE_PAIR(keypad_equal_sign),
    PQRS_OSX_IOKIT_HID_SYSTEM_KEY_CODE_PAIR(keyboard_f13),
    PQRS_OSX_IOKIT_HID_SYSTEM_KEY_CODE_PAIR(keyboard_f14),
    PQRS_OSX_IOKIT_HID_SYSTEM_KEY_CODE_PAIR(keyboard_f15),
    PQRS_OSX_IOKIT_HID_SYSTEM_KEY_CODE_PAIR(keyboard_f16),
    PQRS_OSX_IOKIT_HID_SYSTEM_KEY_CODE_PAIR(keyboard_f17),
    PQRS_OSX_IOKIT_HID_SYSTEM_KEY_CODE_PAIR(keyboard_f18),
    PQRS_OSX_IOKIT_HID_SYSTEM_KEY_CODE_PAIR(keyboard_f19),
    PQRS_OSX_IOKIT_HID_SYSTEM_KEY_CODE_PAIR(keyboard_f20),
    // iokit_hid_usage_keyboard_f21
    // iokit_hid_usage_keyboard_f22
    // iokit_hid_usage_keyboard_f23
    // iokit_hid_usage_keyboard_f24
    // iokit_hid_usage_keyboard_execute
    PQRS_OSX_IOKIT_HID_SYSTEM_KEY_CODE_PAIR(keyboard_help),
    // iokit_hid_usage_keyboard_menu
    // iokit_hid_usage_keyboard_select
    // iokit_hid_usage_keyboard_stop
    // iokit_hid_usage_keyboard_again
    // iokit_hid_usage_keyboard_undo
    // iokit_hid_usage_keyboard_cut
    // iokit_hid_usage_keyboard_copy
    // iokit_hid_usage_keyboard_paste
    // iokit_hid_usage_keyboard_find
    // iokit_hid_usage_keyboard_mute
    // iokit_hid_usage_keyboard_volume_up
    // iokit_hid_usage_keyboard_volume_down
    // iokit_hid_usage_keyboard_locking_caps_lock
    // iokit_hid_usage_keyboard_locking_num_lock
    // iokit_hid_usage_keyboard_locking_scroll_lock
    PQRS_OSX_IOKIT_HID_SYSTEM_KEY_CODE_PAIR(keypad_comma),
    // iokit_hid_usage_keypad_equal_sign_as400
    PQRS_OSX_IOKIT_HID_SYSTEM_KEY_CODE_PAIR(keyboard_international1),
    // iokit_hid_usage_keyboard_international2
    PQRS_OSX_IOKIT_HID_SYSTEM_KEY_CODE_PAIR(keyboard_international3),
    // iokit_hid_usage_keyboard_international4
    // iokit_hid_usage_keyboard_international5
    // iokit_hid_usage_keyboard_international6
    // iokit_hid_usage_keyboard_international7
    // iokit_hid_usage_keyboard_international8
    // iokit_hid_usage_keyboard_international9
    PQRS_OSX_IOKIT_HID_SYSTEM_KEY_CODE_PAIR(keyboard_lang1),
    PQRS_OSX_IOKIT_HID_SYSTEM_KEY_CODE_PAIR(keyboard_lang2),
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

    PQRS_OSX_IOKIT_HID_SYSTEM_KEY_CODE_PAIR(keyboard_left_control),
    PQRS_OSX_IOKIT_HID_SYSTEM_KEY_CODE_PAIR(keyboard_left_shift),
    PQRS_OSX_IOKIT_HID_SYSTEM_KEY_CODE_PAIR(keyboard_left_alt),
    PQRS_OSX_IOKIT_HID_SYSTEM_KEY_CODE_PAIR(keyboard_left_gui),
    PQRS_OSX_IOKIT_HID_SYSTEM_KEY_CODE_PAIR(keyboard_right_control),
    PQRS_OSX_IOKIT_HID_SYSTEM_KEY_CODE_PAIR(keyboard_right_shift),
    PQRS_OSX_IOKIT_HID_SYSTEM_KEY_CODE_PAIR(keyboard_right_alt),
    PQRS_OSX_IOKIT_HID_SYSTEM_KEY_CODE_PAIR(keyboard_right_gui),
};

constexpr std::pair<type_safe::underlying_type<iokit_hid_usage>, key_code> usage_page_apple_vendor_keyboard_key_code_pairs[] = {
    PQRS_OSX_IOKIT_HID_SYSTEM_KEY_CODE_PAIR(apple_vendor_keyboard_dashboard),
    PQRS_OSX_IOKIT_HID_SYSTEM_KEY_CODE_PAIR(apple_vendor_keyboard_function),
    PQRS_OSX_IOKIT_HID_SYSTEM_KEY_CODE_PAIR(apple_vendor_keyboard_launchpad),
    PQRS_OSX_IOKIT_HID_SYSTEM_KEY_CODE_PAIR(apple_vendor_keyboard_expose_all),
};

constexpr std::pair<type_safe::underlying_type<iokit_hid_usage>, key_code> usage_page_apple_vendor_top_case_key_code_pairs[] = {
    PQRS_OSX_IOKIT_HID_SYSTEM_KEY_CODE_PAIR(apple_vendor_top_case_keyboard_fn),
};

#undef PQRS_OSX_IOKIT_HID_SYSTEM_KEY_CODE_PAIR

constexpr auto usage_page_keyboard_or_keypad_key_code_map = frozen::make_unordered_map(usage_page_keyboard_or_keypad_key_code_pairs);
constexpr auto usage_page_apple_vendor_keyboard_key_code_map = frozen::make_unordered_map(usage_page_apple_vendor_keyboard_key_code_pairs);
constexpr auto usage_page_apple_vendor_top_case_key_code_map = frozen::make_unordered_map(usage_page_apple_vendor_top_case_key_code_pairs);

inline std::optional<key_code> make_key_code(iokit_hid_usage_page usage_page, iokit_hid_usage usage) {
  if (usage_page == iokit_hid_usage_page_keyboard_or_keypad) {
    auto& map = usage_page_keyboard_or_keypad_key_code_map;
    auto it = map.find(type_safe::get(usage));
    if (it != std::end(map)) {
      return it->second;
    }

  } else if (usage_page == iokit_hid_usage_page_apple_vendor_keyboard) {
    auto& map = usage_page_apple_vendor_keyboard_key_code_map;
    auto it = map.find(type_safe::get(usage));
    if (it != std::end(map)) {
      return it->second;
    }

  } else if (usage_page == iokit_hid_usage_page_apple_vendor_top_case) {
    auto& map = usage_page_apple_vendor_top_case_key_code_map;
    auto it = map.find(type_safe::get(usage));
    if (it != std::end(map)) {
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
