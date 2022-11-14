// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from vier_gewinnt:action/RotateAbsolute.idl
// generated code does not contain a copyright notice

#ifndef VIER_GEWINNT__ACTION__DETAIL__ROTATE_ABSOLUTE__STRUCT_H_
#define VIER_GEWINNT__ACTION__DETAIL__ROTATE_ABSOLUTE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in action/RotateAbsolute in the package vier_gewinnt.
typedef struct vier_gewinnt__action__RotateAbsolute_Goal
{
  float theta;
} vier_gewinnt__action__RotateAbsolute_Goal;

// Struct for a sequence of vier_gewinnt__action__RotateAbsolute_Goal.
typedef struct vier_gewinnt__action__RotateAbsolute_Goal__Sequence
{
  vier_gewinnt__action__RotateAbsolute_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} vier_gewinnt__action__RotateAbsolute_Goal__Sequence;


// Constants defined in the message

/// Struct defined in action/RotateAbsolute in the package vier_gewinnt.
typedef struct vier_gewinnt__action__RotateAbsolute_Result
{
  float delta;
} vier_gewinnt__action__RotateAbsolute_Result;

// Struct for a sequence of vier_gewinnt__action__RotateAbsolute_Result.
typedef struct vier_gewinnt__action__RotateAbsolute_Result__Sequence
{
  vier_gewinnt__action__RotateAbsolute_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} vier_gewinnt__action__RotateAbsolute_Result__Sequence;


// Constants defined in the message

/// Struct defined in action/RotateAbsolute in the package vier_gewinnt.
typedef struct vier_gewinnt__action__RotateAbsolute_Feedback
{
  float remaining;
} vier_gewinnt__action__RotateAbsolute_Feedback;

// Struct for a sequence of vier_gewinnt__action__RotateAbsolute_Feedback.
typedef struct vier_gewinnt__action__RotateAbsolute_Feedback__Sequence
{
  vier_gewinnt__action__RotateAbsolute_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} vier_gewinnt__action__RotateAbsolute_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "vier_gewinnt/action/detail/rotate_absolute__struct.h"

/// Struct defined in action/RotateAbsolute in the package vier_gewinnt.
typedef struct vier_gewinnt__action__RotateAbsolute_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  vier_gewinnt__action__RotateAbsolute_Goal goal;
} vier_gewinnt__action__RotateAbsolute_SendGoal_Request;

// Struct for a sequence of vier_gewinnt__action__RotateAbsolute_SendGoal_Request.
typedef struct vier_gewinnt__action__RotateAbsolute_SendGoal_Request__Sequence
{
  vier_gewinnt__action__RotateAbsolute_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} vier_gewinnt__action__RotateAbsolute_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/RotateAbsolute in the package vier_gewinnt.
typedef struct vier_gewinnt__action__RotateAbsolute_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} vier_gewinnt__action__RotateAbsolute_SendGoal_Response;

// Struct for a sequence of vier_gewinnt__action__RotateAbsolute_SendGoal_Response.
typedef struct vier_gewinnt__action__RotateAbsolute_SendGoal_Response__Sequence
{
  vier_gewinnt__action__RotateAbsolute_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} vier_gewinnt__action__RotateAbsolute_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/RotateAbsolute in the package vier_gewinnt.
typedef struct vier_gewinnt__action__RotateAbsolute_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} vier_gewinnt__action__RotateAbsolute_GetResult_Request;

// Struct for a sequence of vier_gewinnt__action__RotateAbsolute_GetResult_Request.
typedef struct vier_gewinnt__action__RotateAbsolute_GetResult_Request__Sequence
{
  vier_gewinnt__action__RotateAbsolute_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} vier_gewinnt__action__RotateAbsolute_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "vier_gewinnt/action/detail/rotate_absolute__struct.h"

/// Struct defined in action/RotateAbsolute in the package vier_gewinnt.
typedef struct vier_gewinnt__action__RotateAbsolute_GetResult_Response
{
  int8_t status;
  vier_gewinnt__action__RotateAbsolute_Result result;
} vier_gewinnt__action__RotateAbsolute_GetResult_Response;

// Struct for a sequence of vier_gewinnt__action__RotateAbsolute_GetResult_Response.
typedef struct vier_gewinnt__action__RotateAbsolute_GetResult_Response__Sequence
{
  vier_gewinnt__action__RotateAbsolute_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} vier_gewinnt__action__RotateAbsolute_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "vier_gewinnt/action/detail/rotate_absolute__struct.h"

/// Struct defined in action/RotateAbsolute in the package vier_gewinnt.
typedef struct vier_gewinnt__action__RotateAbsolute_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  vier_gewinnt__action__RotateAbsolute_Feedback feedback;
} vier_gewinnt__action__RotateAbsolute_FeedbackMessage;

// Struct for a sequence of vier_gewinnt__action__RotateAbsolute_FeedbackMessage.
typedef struct vier_gewinnt__action__RotateAbsolute_FeedbackMessage__Sequence
{
  vier_gewinnt__action__RotateAbsolute_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} vier_gewinnt__action__RotateAbsolute_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // VIER_GEWINNT__ACTION__DETAIL__ROTATE_ABSOLUTE__STRUCT_H_
