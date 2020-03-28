#pragma once

// (C) Copyright Takayama Fumihiko 2020.
// Distributed under the Boost Software License, Version 1.0.
// (See http://www.boost.org/LICENSE_1_0.txt)

#include <functional>
#include <type_safe/strong_typedef.hpp>

namespace pqrs {
namespace osx {
namespace iokit_hid_system {
struct key_code : type_safe::strong_typedef<key_code, int32_t>,
                  type_safe::strong_typedef_op::equality_comparison<key_code>,
                  type_safe::strong_typedef_op::relational_comparison<key_code> {
  using strong_typedef::strong_typedef;
};
} // namespace iokit_hid_system
} // namespace osx
} // namespace pqrs

namespace std {
template <>
struct hash<pqrs::osx::iokit_hid_system::key_code> : type_safe::hashable<pqrs::osx::iokit_hid_system::key_code> {
};
} // namespace std
