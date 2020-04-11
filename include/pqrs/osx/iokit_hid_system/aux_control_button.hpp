#pragma once

// (C) Copyright Takayama Fumihiko 2020.
// Distributed under the Boost Software License, Version 1.0.
// (See http://www.boost.org/LICENSE_1_0.txt)

#include <IOKit/hidsystem/ev_keymap.h>
#include <frozen/unordered_map.h>
#include <optional>
#include <pqrs/osx/iokit_types.hpp>

namespace pqrs {
namespace osx {
namespace iokit_hid_system {
struct aux_control_button : type_safe::strong_typedef<aux_control_button, int32_t>,
                            type_safe::strong_typedef_op::equality_comparison<aux_control_button>,
                            type_safe::strong_typedef_op::relational_comparison<aux_control_button> {
  using strong_typedef::strong_typedef;
};

//
// aux_control_button (NX_SPECIALKEY_POST_MASK in IOKit/hidsystem/ev_keymap.h)
//

constexpr aux_control_button aux_control_button_sound_up(NX_KEYTYPE_SOUND_UP);
constexpr aux_control_button aux_control_button_sound_down(NX_KEYTYPE_SOUND_DOWN);
constexpr aux_control_button aux_control_button_power(NX_POWER_KEY);
constexpr aux_control_button aux_control_button_mute(NX_KEYTYPE_MUTE);
constexpr aux_control_button aux_control_button_brightness_up(NX_KEYTYPE_BRIGHTNESS_UP);
constexpr aux_control_button aux_control_button_brightness_down(NX_KEYTYPE_BRIGHTNESS_DOWN);
constexpr aux_control_button aux_control_button_contrast_up(NX_KEYTYPE_CONTRAST_UP);
constexpr aux_control_button aux_control_button_contrast_down(NX_KEYTYPE_CONTRAST_DOWN);
constexpr aux_control_button aux_control_button_launch_panel(NX_KEYTYPE_LAUNCH_PANEL);
constexpr aux_control_button aux_control_button_eject(NX_KEYTYPE_EJECT);
constexpr aux_control_button aux_control_button_vidmirror(NX_KEYTYPE_VIDMIRROR);
constexpr aux_control_button aux_control_button_play(NX_KEYTYPE_PLAY);
constexpr aux_control_button aux_control_button_next(NX_KEYTYPE_NEXT);
constexpr aux_control_button aux_control_button_previous(NX_KEYTYPE_PREVIOUS);
constexpr aux_control_button aux_control_button_fast(NX_KEYTYPE_FAST);
constexpr aux_control_button aux_control_button_rewind(NX_KEYTYPE_REWIND);
constexpr aux_control_button aux_control_button_illumination_up(NX_KEYTYPE_ILLUMINATION_UP);
constexpr aux_control_button aux_control_button_illumination_down(NX_KEYTYPE_ILLUMINATION_DOWN);
constexpr aux_control_button aux_control_button_illumination_toggle(NX_KEYTYPE_ILLUMINATION_TOGGLE);

//
// make_aux_control_button
//

constexpr std::pair<type_safe::underlying_type<iokit_hid_usage>, aux_control_button> usage_page_keyboard_or_keypad_aux_control_button_pairs[] = {
    {type_safe::get(iokit_hid_usage_keyboard_power), aux_control_button_power},
    {type_safe::get(iokit_hid_usage_keyboard_mute), aux_control_button_mute},
    {type_safe::get(iokit_hid_usage_keyboard_volume_up), aux_control_button_sound_up},
    {type_safe::get(iokit_hid_usage_keyboard_volume_down), aux_control_button_sound_down},
};

constexpr auto usage_page_keyboard_or_keypad_aux_control_button_map = frozen::make_unordered_map(usage_page_keyboard_or_keypad_aux_control_button_pairs);

inline std::optional<aux_control_button> make_aux_control_button(iokit_hid_usage_page usage_page, iokit_hid_usage usage) {
  if (usage_page == iokit_hid_usage_page_keyboard_or_keypad) {
    auto& map = usage_page_keyboard_or_keypad_aux_control_button_map;
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
struct hash<pqrs::osx::iokit_hid_system::aux_control_button> : type_safe::hashable<pqrs::osx::iokit_hid_system::aux_control_button> {
};
} // namespace std
