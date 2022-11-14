// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from vier_gewinnt:srv/Spawn.idl
// generated code does not contain a copyright notice

#ifndef VIER_GEWINNT__SRV__DETAIL__SPAWN__BUILDER_HPP_
#define VIER_GEWINNT__SRV__DETAIL__SPAWN__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "vier_gewinnt/srv/detail/spawn__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace vier_gewinnt
{

namespace srv
{

namespace builder
{

class Init_Spawn_Request_name
{
public:
  explicit Init_Spawn_Request_name(::vier_gewinnt::srv::Spawn_Request & msg)
  : msg_(msg)
  {}
  ::vier_gewinnt::srv::Spawn_Request name(::vier_gewinnt::srv::Spawn_Request::_name_type arg)
  {
    msg_.name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::vier_gewinnt::srv::Spawn_Request msg_;
};

class Init_Spawn_Request_theta
{
public:
  explicit Init_Spawn_Request_theta(::vier_gewinnt::srv::Spawn_Request & msg)
  : msg_(msg)
  {}
  Init_Spawn_Request_name theta(::vier_gewinnt::srv::Spawn_Request::_theta_type arg)
  {
    msg_.theta = std::move(arg);
    return Init_Spawn_Request_name(msg_);
  }

private:
  ::vier_gewinnt::srv::Spawn_Request msg_;
};

class Init_Spawn_Request_y
{
public:
  explicit Init_Spawn_Request_y(::vier_gewinnt::srv::Spawn_Request & msg)
  : msg_(msg)
  {}
  Init_Spawn_Request_theta y(::vier_gewinnt::srv::Spawn_Request::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_Spawn_Request_theta(msg_);
  }

private:
  ::vier_gewinnt::srv::Spawn_Request msg_;
};

class Init_Spawn_Request_x
{
public:
  Init_Spawn_Request_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Spawn_Request_y x(::vier_gewinnt::srv::Spawn_Request::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_Spawn_Request_y(msg_);
  }

private:
  ::vier_gewinnt::srv::Spawn_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::vier_gewinnt::srv::Spawn_Request>()
{
  return vier_gewinnt::srv::builder::Init_Spawn_Request_x();
}

}  // namespace vier_gewinnt


namespace vier_gewinnt
{

namespace srv
{

namespace builder
{

class Init_Spawn_Response_name
{
public:
  Init_Spawn_Response_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::vier_gewinnt::srv::Spawn_Response name(::vier_gewinnt::srv::Spawn_Response::_name_type arg)
  {
    msg_.name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::vier_gewinnt::srv::Spawn_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::vier_gewinnt::srv::Spawn_Response>()
{
  return vier_gewinnt::srv::builder::Init_Spawn_Response_name();
}

}  // namespace vier_gewinnt

#endif  // VIER_GEWINNT__SRV__DETAIL__SPAWN__BUILDER_HPP_
