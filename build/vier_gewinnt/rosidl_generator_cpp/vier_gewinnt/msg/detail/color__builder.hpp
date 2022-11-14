// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from vier_gewinnt:msg/Color.idl
// generated code does not contain a copyright notice

#ifndef VIER_GEWINNT__MSG__DETAIL__COLOR__BUILDER_HPP_
#define VIER_GEWINNT__MSG__DETAIL__COLOR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "vier_gewinnt/msg/detail/color__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace vier_gewinnt
{

namespace msg
{

namespace builder
{

class Init_Color_b
{
public:
  explicit Init_Color_b(::vier_gewinnt::msg::Color & msg)
  : msg_(msg)
  {}
  ::vier_gewinnt::msg::Color b(::vier_gewinnt::msg::Color::_b_type arg)
  {
    msg_.b = std::move(arg);
    return std::move(msg_);
  }

private:
  ::vier_gewinnt::msg::Color msg_;
};

class Init_Color_g
{
public:
  explicit Init_Color_g(::vier_gewinnt::msg::Color & msg)
  : msg_(msg)
  {}
  Init_Color_b g(::vier_gewinnt::msg::Color::_g_type arg)
  {
    msg_.g = std::move(arg);
    return Init_Color_b(msg_);
  }

private:
  ::vier_gewinnt::msg::Color msg_;
};

class Init_Color_r
{
public:
  Init_Color_r()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Color_g r(::vier_gewinnt::msg::Color::_r_type arg)
  {
    msg_.r = std::move(arg);
    return Init_Color_g(msg_);
  }

private:
  ::vier_gewinnt::msg::Color msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::vier_gewinnt::msg::Color>()
{
  return vier_gewinnt::msg::builder::Init_Color_r();
}

}  // namespace vier_gewinnt

#endif  // VIER_GEWINNT__MSG__DETAIL__COLOR__BUILDER_HPP_
