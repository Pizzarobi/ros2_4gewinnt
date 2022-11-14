// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from vier_gewinnt:srv/TeleportRelative.idl
// generated code does not contain a copyright notice

#ifndef VIER_GEWINNT__SRV__DETAIL__TELEPORT_RELATIVE__BUILDER_HPP_
#define VIER_GEWINNT__SRV__DETAIL__TELEPORT_RELATIVE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "vier_gewinnt/srv/detail/teleport_relative__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace vier_gewinnt
{

namespace srv
{

namespace builder
{

class Init_TeleportRelative_Request_angular
{
public:
  explicit Init_TeleportRelative_Request_angular(::vier_gewinnt::srv::TeleportRelative_Request & msg)
  : msg_(msg)
  {}
  ::vier_gewinnt::srv::TeleportRelative_Request angular(::vier_gewinnt::srv::TeleportRelative_Request::_angular_type arg)
  {
    msg_.angular = std::move(arg);
    return std::move(msg_);
  }

private:
  ::vier_gewinnt::srv::TeleportRelative_Request msg_;
};

class Init_TeleportRelative_Request_linear
{
public:
  Init_TeleportRelative_Request_linear()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TeleportRelative_Request_angular linear(::vier_gewinnt::srv::TeleportRelative_Request::_linear_type arg)
  {
    msg_.linear = std::move(arg);
    return Init_TeleportRelative_Request_angular(msg_);
  }

private:
  ::vier_gewinnt::srv::TeleportRelative_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::vier_gewinnt::srv::TeleportRelative_Request>()
{
  return vier_gewinnt::srv::builder::Init_TeleportRelative_Request_linear();
}

}  // namespace vier_gewinnt


namespace vier_gewinnt
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::vier_gewinnt::srv::TeleportRelative_Response>()
{
  return ::vier_gewinnt::srv::TeleportRelative_Response(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace vier_gewinnt

#endif  // VIER_GEWINNT__SRV__DETAIL__TELEPORT_RELATIVE__BUILDER_HPP_
