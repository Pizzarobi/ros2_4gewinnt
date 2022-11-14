// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from vier_gewinnt:srv/Kill.idl
// generated code does not contain a copyright notice

#ifndef VIER_GEWINNT__SRV__DETAIL__KILL__STRUCT_H_
#define VIER_GEWINNT__SRV__DETAIL__KILL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/Kill in the package vier_gewinnt.
typedef struct vier_gewinnt__srv__Kill_Request
{
  rosidl_runtime_c__String name;
} vier_gewinnt__srv__Kill_Request;

// Struct for a sequence of vier_gewinnt__srv__Kill_Request.
typedef struct vier_gewinnt__srv__Kill_Request__Sequence
{
  vier_gewinnt__srv__Kill_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} vier_gewinnt__srv__Kill_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/Kill in the package vier_gewinnt.
typedef struct vier_gewinnt__srv__Kill_Response
{
  uint8_t structure_needs_at_least_one_member;
} vier_gewinnt__srv__Kill_Response;

// Struct for a sequence of vier_gewinnt__srv__Kill_Response.
typedef struct vier_gewinnt__srv__Kill_Response__Sequence
{
  vier_gewinnt__srv__Kill_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} vier_gewinnt__srv__Kill_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // VIER_GEWINNT__SRV__DETAIL__KILL__STRUCT_H_
