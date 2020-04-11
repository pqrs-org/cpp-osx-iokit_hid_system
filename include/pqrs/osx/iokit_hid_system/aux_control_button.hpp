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
struct aux_control_button : type_safe::strong_typedef<aux_control_button, int32_t>,
                            type_safe::strong_typedef_op::equality_comparison<aux_control_button>,
                            type_safe::strong_typedef_op::relational_comparison<aux_control_button> {
  using strong_typedef::strong_typedef;
};
} // namespace iokit_hid_system
} // namespace osx
} // namespace pqrs

namespace std {
template <>
struct hash<pqrs::osx::iokit_hid_system::aux_control_button> : type_safe::hashable<pqrs::osx::iokit_hid_system::aux_control_button> {
};
} // namespace std
