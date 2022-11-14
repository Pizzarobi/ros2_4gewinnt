// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from vier_gewinnt:msg/Color.idl
// generated code does not contain a copyright notice

#ifndef VIER_GEWINNT__MSG__DETAIL__COLOR__STRUCT_H_
#define VIER_GEWINNT__MSG__DETAIL__COLOR__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Color in the package vier_gewinnt.
typedef struct vier_gewinnt__msg__Color
{
  uint8_t r;
  uint8_t g;
  uint8_t b;
} vier_gewinnt__msg__Color;

// Struct for a sequence of vier_gewinnt__msg__Color.
typedef struct vier_gewinnt__msg__Color__Sequence
{
  vier_gewinnt__msg__Color * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} vier_gewinnt__msg__Color__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // VIER_GEWINNT__MSG__DETAIL__COLOR__STRUCT_H_
