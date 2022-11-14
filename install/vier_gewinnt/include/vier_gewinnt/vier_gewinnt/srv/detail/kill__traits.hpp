// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from vier_gewinnt:srv/Kill.idl
// generated code does not contain a copyright notice

#ifndef VIER_GEWINNT__SRV__DETAIL__KILL__TRAITS_HPP_
#define VIER_GEWINNT__SRV__DETAIL__KILL__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "vier_gewinnt/srv/detail/kill__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace vier_gewinnt
{

namespace srv
{

inline void to_flow_style_yaml(
  const Kill_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Kill_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Kill_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace vier_gewinnt

namespace rosidl_generator_traits
{

[[deprecated("use vier_gewinnt::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const vier_gewinnt::srv::Kill_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  vier_gewinnt::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use vier_gewinnt::srv::to_yaml() instead")]]
inline std::string to_yaml(const vier_gewinnt::srv::Kill_Request & msg)
{
  return vier_gewinnt::srv::to_yaml(msg);
}

template<>
inline const char * data_type<vier_gewinnt::srv::Kill_Request>()
{
  return "vier_gewinnt::srv::Kill_Request";
}

template<>
inline const char * name<vier_gewinnt::srv::Kill_Request>()
{
  return "vier_gewinnt/srv/Kill_Request";
}

template<>
struct has_fixed_size<vier_gewinnt::srv::Kill_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<vier_gewinnt::srv::Kill_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<vier_gewinnt::srv::Kill_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace vier_gewinnt
{

namespace srv
{

inline void to_flow_style_yaml(
  const Kill_Response & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Kill_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Kill_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace vier_gewinnt

namespace rosidl_generator_traits
{

[[deprecated("use vier_gewinnt::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const vier_gewinnt::srv::Kill_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  vier_gewinnt::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use vier_gewinnt::srv::to_yaml() instead")]]
inline std::string to_yaml(const vier_gewinnt::srv::Kill_Response & msg)
{
  return vier_gewinnt::srv::to_yaml(msg);
}

template<>
inline const char * data_type<vier_gewinnt::srv::Kill_Response>()
{
  return "vier_gewinnt::srv::Kill_Response";
}

template<>
inline const char * name<vier_gewinnt::srv::Kill_Response>()
{
  return "vier_gewinnt/srv/Kill_Response";
}

template<>
struct has_fixed_size<vier_gewinnt::srv::Kill_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<vier_gewinnt::srv::Kill_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<vier_gewinnt::srv::Kill_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<vier_gewinnt::srv::Kill>()
{
  return "vier_gewinnt::srv::Kill";
}

template<>
inline const char * name<vier_gewinnt::srv::Kill>()
{
  return "vier_gewinnt/srv/Kill";
}

template<>
struct has_fixed_size<vier_gewinnt::srv::Kill>
  : std::integral_constant<
    bool,
    has_fixed_size<vier_gewinnt::srv::Kill_Request>::value &&
    has_fixed_size<vier_gewinnt::srv::Kill_Response>::value
  >
{
};

template<>
struct has_bounded_size<vier_gewinnt::srv::Kill>
  : std::integral_constant<
    bool,
    has_bounded_size<vier_gewinnt::srv::Kill_Request>::value &&
    has_bounded_size<vier_gewinnt::srv::Kill_Response>::value
  >
{
};

template<>
struct is_service<vier_gewinnt::srv::Kill>
  : std::true_type
{
};

template<>
struct is_service_request<vier_gewinnt::srv::Kill_Request>
  : std::true_type
{
};

template<>
struct is_service_response<vier_gewinnt::srv::Kill_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // VIER_GEWINNT__SRV__DETAIL__KILL__TRAITS_HPP_
