// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from vier_gewinnt:msg/Color.idl
// generated code does not contain a copyright notice

#ifndef VIER_GEWINNT__MSG__DETAIL__COLOR__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define VIER_GEWINNT__MSG__DETAIL__COLOR__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "vier_gewinnt/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "vier_gewinnt/msg/detail/color__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace vier_gewinnt
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_vier_gewinnt
cdr_serialize(
  const vier_gewinnt::msg::Color & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_vier_gewinnt
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  vier_gewinnt::msg::Color & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_vier_gewinnt
get_serialized_size(
  const vier_gewinnt::msg::Color & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_vier_gewinnt
max_serialized_size_Color(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace vier_gewinnt

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_vier_gewinnt
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, vier_gewinnt, msg, Color)();

#ifdef __cplusplus
}
#endif

#endif  // VIER_GEWINNT__MSG__DETAIL__COLOR__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
