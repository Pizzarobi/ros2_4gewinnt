// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from vier_gewinnt:srv/Kill.idl
// generated code does not contain a copyright notice

#ifndef VIER_GEWINNT__SRV__DETAIL__KILL__BUILDER_HPP_
#define VIER_GEWINNT__SRV__DETAIL__KILL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "vier_gewinnt/srv/detail/kill__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace vier_gewinnt
{

namespace srv
{

namespace builder
{

class Init_Kill_Request_name
{
public:
  Init_Kill_Request_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::vier_gewinnt::srv::Kill_Request name(::vier_gewinnt::srv::Kill_Request::_name_type arg)
  {
    msg_.name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::vier_gewinnt::srv::Kill_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::vier_gewinnt::srv::Kill_Request>()
{
  return vier_gewinnt::srv::builder::Init_Kill_Request_name();
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
auto build<::vier_gewinnt::srv::Kill_Response>()
{
  return ::vier_gewinnt::srv::Kill_Response(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace vier_gewinnt

#endif  // VIER_GEWINNT__SRV__DETAIL__KILL__BUILDER_HPP_
