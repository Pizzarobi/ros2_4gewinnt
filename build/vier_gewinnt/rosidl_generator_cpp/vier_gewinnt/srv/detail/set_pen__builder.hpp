// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from vier_gewinnt:srv/SetPen.idl
// generated code does not contain a copyright notice

#ifndef VIER_GEWINNT__SRV__DETAIL__SET_PEN__BUILDER_HPP_
#define VIER_GEWINNT__SRV__DETAIL__SET_PEN__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "vier_gewinnt/srv/detail/set_pen__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace vier_gewinnt
{

namespace srv
{

namespace builder
{

class Init_SetPen_Request_off
{
public:
  explicit Init_SetPen_Request_off(::vier_gewinnt::srv::SetPen_Request & msg)
  : msg_(msg)
  {}
  ::vier_gewinnt::srv::SetPen_Request off(::vier_gewinnt::srv::SetPen_Request::_off_type arg)
  {
    msg_.off = std::move(arg);
    return std::move(msg_);
  }

private:
  ::vier_gewinnt::srv::SetPen_Request msg_;
};

class Init_SetPen_Request_width
{
public:
  explicit Init_SetPen_Request_width(::vier_gewinnt::srv::SetPen_Request & msg)
  : msg_(msg)
  {}
  Init_SetPen_Request_off width(::vier_gewinnt::srv::SetPen_Request::_width_type arg)
  {
    msg_.width = std::move(arg);
    return Init_SetPen_Request_off(msg_);
  }

private:
  ::vier_gewinnt::srv::SetPen_Request msg_;
};

class Init_SetPen_Request_b
{
public:
  explicit Init_SetPen_Request_b(::vier_gewinnt::srv::SetPen_Request & msg)
  : msg_(msg)
  {}
  Init_SetPen_Request_width b(::vier_gewinnt::srv::SetPen_Request::_b_type arg)
  {
    msg_.b = std::move(arg);
    return Init_SetPen_Request_width(msg_);
  }

private:
  ::vier_gewinnt::srv::SetPen_Request msg_;
};

class Init_SetPen_Request_g
{
public:
  explicit Init_SetPen_Request_g(::vier_gewinnt::srv::SetPen_Request & msg)
  : msg_(msg)
  {}
  Init_SetPen_Request_b g(::vier_gewinnt::srv::SetPen_Request::_g_type arg)
  {
    msg_.g = std::move(arg);
    return Init_SetPen_Request_b(msg_);
  }

private:
  ::vier_gewinnt::srv::SetPen_Request msg_;
};

class Init_SetPen_Request_r
{
public:
  Init_SetPen_Request_r()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetPen_Request_g r(::vier_gewinnt::srv::SetPen_Request::_r_type arg)
  {
    msg_.r = std::move(arg);
    return Init_SetPen_Request_g(msg_);
  }

private:
  ::vier_gewinnt::srv::SetPen_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::vier_gewinnt::srv::SetPen_Request>()
{
  return vier_gewinnt::srv::builder::Init_SetPen_Request_r();
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
auto build<::vier_gewinnt::srv::SetPen_Response>()
{
  return ::vier_gewinnt::srv::SetPen_Response(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace vier_gewinnt

#endif  // VIER_GEWINNT__SRV__DETAIL__SET_PEN__BUILDER_HPP_
