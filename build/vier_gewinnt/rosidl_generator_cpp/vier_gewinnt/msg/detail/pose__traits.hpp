// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from vier_gewinnt:msg/Pose.idl
// generated code does not contain a copyright notice

#ifndef VIER_GEWINNT__MSG__DETAIL__POSE__TRAITS_HPP_
#define VIER_GEWINNT__MSG__DETAIL__POSE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "vier_gewinnt/msg/detail/pose__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace vier_gewinnt
{

namespace msg
{

inline void to_flow_style_yaml(
  const Pose & msg,
  std::ostream & out)
{
  out << "{";
  // member: x
  {
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << ", ";
  }

  // member: y
  {
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << ", ";
  }

  // member: theta
  {
    out << "theta: ";
    rosidl_generator_traits::value_to_yaml(msg.theta, out);
    out << ", ";
  }

  // member: linear_velocity
  {
    out << "linear_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.linear_velocity, out);
    out << ", ";
  }

  // member: angular_velocity
  {
    out << "angular_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.angular_velocity, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Pose & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << "\n";
  }

  // member: y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << "\n";
  }

  // member: theta
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "theta: ";
    rosidl_generator_traits::value_to_yaml(msg.theta, out);
    out << "\n";
  }

  // member: linear_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "linear_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.linear_velocity, out);
    out << "\n";
  }

  // member: angular_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "angular_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.angular_velocity, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Pose & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace vier_gewinnt

namespace rosidl_generator_traits
{

[[deprecated("use vier_gewinnt::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const vier_gewinnt::msg::Pose & msg,
  std::ostream & out, size_t indentation = 0)
{
  vier_gewinnt::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use vier_gewinnt::msg::to_yaml() instead")]]
inline std::string to_yaml(const vier_gewinnt::msg::Pose & msg)
{
  return vier_gewinnt::msg::to_yaml(msg);
}

template<>
inline const char * data_type<vier_gewinnt::msg::Pose>()
{
  return "vier_gewinnt::msg::Pose";
}

template<>
inline const char * name<vier_gewinnt::msg::Pose>()
{
  return "vier_gewinnt/msg/Pose";
}

template<>
struct has_fixed_size<vier_gewinnt::msg::Pose>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<vier_gewinnt::msg::Pose>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<vier_gewinnt::msg::Pose>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // VIER_GEWINNT__MSG__DETAIL__POSE__TRAITS_HPP_
