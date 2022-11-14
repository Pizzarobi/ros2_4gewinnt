// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from vier_gewinnt:action/RotateAbsolute.idl
// generated code does not contain a copyright notice

#ifndef VIER_GEWINNT__ACTION__DETAIL__ROTATE_ABSOLUTE__FUNCTIONS_H_
#define VIER_GEWINNT__ACTION__DETAIL__ROTATE_ABSOLUTE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "vier_gewinnt/msg/rosidl_generator_c__visibility_control.h"

#include "vier_gewinnt/action/detail/rotate_absolute__struct.h"

/// Initialize action/RotateAbsolute message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * vier_gewinnt__action__RotateAbsolute_Goal
 * )) before or use
 * vier_gewinnt__action__RotateAbsolute_Goal__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_vier_gewinnt
bool
vier_gewinnt__action__RotateAbsolute_Goal__init(vier_gewinnt__action__RotateAbsolute_Goal * msg);

/// Finalize action/RotateAbsolute message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_vier_gewinnt
void
vier_gewinnt__action__RotateAbsolute_Goal__fini(vier_gewinnt__action__RotateAbsolute_Goal * msg);

/// Create action/RotateAbsolute message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * vier_gewinnt__action__RotateAbsolute_Goal__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_vier_gewinnt
vier_gewinnt__action__RotateAbsolute_Goal *
vier_gewinnt__action__RotateAbsolute_Goal__create();

/// Destroy action/RotateAbsolute message.
/**
 * It calls
 * vier_gewinnt__action__RotateAbsolute_Goal__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_vier_gewinnt
void
vier_gewinnt__action__RotateAbsolute_Goal__destroy(vier_gewinnt__action__RotateAbsolute_Goal * msg);

/// Check for action/RotateAbsolute message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_vier_gewinnt
bool
vier_gewinnt__action__RotateAbsolute_Goal__are_equal(const vier_gewinnt__action__RotateAbsolute_Goal * lhs, const vier_gewinnt__action__RotateAbsolute_Goal * rhs);

/// Copy a action/RotateAbsolute message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_vier_gewinnt
bool
vier_gewinnt__action__RotateAbsolute_Goal__copy(
  const vier_gewinnt__action__RotateAbsolute_Goal * input,
  vier_gewinnt__action__RotateAbsolute_Goal * output);

/// Initialize array of action/RotateAbsolute messages.
/**
 * It allocates the memory for the number of elements and calls
 * vier_gewinnt__action__RotateAbsolute_Goal__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_vier_gewinnt
bool
vier_gewinnt__action__RotateAbsolute_Goal__Sequence__init(vier_gewinnt__action__RotateAbsolute_Goal__Sequence * array, size_t size);

/// Finalize array of action/RotateAbsolute messages.
/**
 * It calls
 * vier_gewinnt__action__RotateAbsolute_Goal__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_vier_gewinnt
void
vier_gewinnt__action__RotateAbsolute_Goal__Sequence__fini(vier_gewinnt__action__RotateAbsolute_Goal__Sequence * array);

/// Create array of action/RotateAbsolute messages.
/**
 * It allocates the memory for the array and calls
 * vier_gewinnt__action__RotateAbsolute_Goal__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_vier_gewinnt
vier_gewinnt__action__RotateAbsolute_Goal__Sequence *
vier_gewinnt__action__RotateAbsolute_Goal__Sequence__create(size_t size);

/// Destroy array of action/RotateAbsolute messages.
/**
 * It calls
 * vier_gewinnt__action__RotateAbsolute_Goal__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_vier_gewinnt
void
vier_gewinnt__action__RotateAbsolute_Goal__Sequence__destroy(vier_gewinnt__action__RotateAbsolute_Goal__Sequence * array);

/// Check for action/RotateAbsolute message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_vier_gewinnt
bool
vier_gewinnt__action__RotateAbsolute_Goal__Sequence__are_equal(const vier_gewinnt__action__RotateAbsolute_Goal__Sequence * lhs, const vier_gewinnt__action__RotateAbsolute_Goal__Sequence * rhs);

/// Copy an array of action/RotateAbsolute messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_vier_gewinnt
bool
vier_gewinnt__action__RotateAbsolute_Goal__Sequence__copy(
  const vier_gewinnt__action__RotateAbsolute_Goal__Sequence * input,
  vier_gewinnt__action__RotateAbsolute_Goal__Sequence * output);

/// Initialize action/RotateAbsolute message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * vier_gewinnt__action__RotateAbsolute_Result
 * )) before or use
 * vier_gewinnt__action__RotateAbsolute_Result__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_vier_gewinnt
bool
vier_gewinnt__action__RotateAbsolute_Result__init(vier_gewinnt__action__RotateAbsolute_Result * msg);

/// Finalize action/RotateAbsolute message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_vier_gewinnt
void
vier_gewinnt__action__RotateAbsolute_Result__fini(vier_gewinnt__action__RotateAbsolute_Result * msg);

/// Create action/RotateAbsolute message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * vier_gewinnt__action__RotateAbsolute_Result__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_vier_gewinnt
vier_gewinnt__action__RotateAbsolute_Result *
vier_gewinnt__action__RotateAbsolute_Result__create();

/// Destroy action/RotateAbsolute message.
/**
 * It calls
 * vier_gewinnt__action__RotateAbsolute_Result__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_vier_gewinnt
void
vier_gewinnt__action__RotateAbsolute_Result__destroy(vier_gewinnt__action__RotateAbsolute_Result * msg);

/// Check for action/RotateAbsolute message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_vier_gewinnt
bool
vier_gewinnt__action__RotateAbsolute_Result__are_equal(const vier_gewinnt__action__RotateAbsolute_Result * lhs, const vier_gewinnt__action__RotateAbsolute_Result * rhs);

/// Copy a action/RotateAbsolute message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_vier_gewinnt
bool
vier_gewinnt__action__RotateAbsolute_Result__copy(
  const vier_gewinnt__action__RotateAbsolute_Result * input,
  vier_gewinnt__action__RotateAbsolute_Result * output);

/// Initialize array of action/RotateAbsolute messages.
/**
 * It allocates the memory for the number of elements and calls
 * vier_gewinnt__action__RotateAbsolute_Result__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_vier_gewinnt
bool
vier_gewinnt__action__RotateAbsolute_Result__Sequence__init(vier_gewinnt__action__RotateAbsolute_Result__Sequence * array, size_t size);

/// Finalize array of action/RotateAbsolute messages.
/**
 * It calls
 * vier_gewinnt__action__RotateAbsolute_Result__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_vier_gewinnt
void
vier_gewinnt__action__RotateAbsolute_Result__Sequence__fini(vier_gewinnt__action__RotateAbsolute_Result__Sequence * array);

/// Create array of action/RotateAbsolute messages.
/**
 * It allocates the memory for the array and calls
 * vier_gewinnt__action__RotateAbsolute_Result__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_vier_gewinnt
vier_gewinnt__action__RotateAbsolute_Result__Sequence *
vier_gewinnt__action__RotateAbsolute_Result__Sequence__create(size_t size);

/// Destroy array of action/RotateAbsolute messages.
/**
 * It calls
 * vier_gewinnt__action__RotateAbsolute_Result__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_vier_gewinnt
void
vier_gewinnt__action__RotateAbsolute_Result__Sequence__destroy(vier_gewinnt__action__RotateAbsolute_Result__Sequence * array);

/// Check for action/RotateAbsolute message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_vier_gewinnt
bool
vier_gewinnt__action__RotateAbsolute_Result__Sequence__are_equal(const vier_gewinnt__action__RotateAbsolute_Result__Sequence * lhs, const vier_gewinnt__action__RotateAbsolute_Result__Sequence * rhs);

/// Copy an array of action/RotateAbsolute messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_vier_gewinnt
bool
vier_gewinnt__action__RotateAbsolute_Result__Sequence__copy(
  const vier_gewinnt__action__RotateAbsolute_Result__Sequence * input,
  vier_gewinnt__action__RotateAbsolute_Result__Sequence * output);

/// Initialize action/RotateAbsolute message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * vier_gewinnt__action__RotateAbsolute_Feedback
 * )) before or use
 * vier_gewinnt__action__RotateAbsolute_Feedback__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_vier_gewinnt
bool
vier_gewinnt__action__RotateAbsolute_Feedback__init(vier_gewinnt__action__RotateAbsolute_Feedback * msg);

/// Finalize action/RotateAbsolute message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_vier_gewinnt
void
vier_gewinnt__action__RotateAbsolute_Feedback__fini(vier_gewinnt__action__RotateAbsolute_Feedback * msg);

/// Create action/RotateAbsolute message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * vier_gewinnt__action__RotateAbsolute_Feedback__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_vier_gewinnt
vier_gewinnt__action__RotateAbsolute_Feedback *
vier_gewinnt__action__RotateAbsolute_Feedback__create();

/// Destroy action/RotateAbsolute message.
/**
 * It calls
 * vier_gewinnt__action__RotateAbsolute_Feedback__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_vier_gewinnt
void
vier_gewinnt__action__RotateAbsolute_Feedback__destroy(vier_gewinnt__action__RotateAbsolute_Feedback * msg);

/// Check for action/RotateAbsolute message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_vier_gewinnt
bool
vier_gewinnt__action__RotateAbsolute_Feedback__are_equal(const vier_gewinnt__action__RotateAbsolute_Feedback * lhs, const vier_gewinnt__action__RotateAbsolute_Feedback * rhs);

/// Copy a action/RotateAbsolute message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_vier_gewinnt
bool
vier_gewinnt__action__RotateAbsolute_Feedback__copy(
  const vier_gewinnt__action__RotateAbsolute_Feedback * input,
  vier_gewinnt__action__RotateAbsolute_Feedback * output);

/// Initialize array of action/RotateAbsolute messages.
/**
 * It allocates the memory for the number of elements and calls
 * vier_gewinnt__action__RotateAbsolute_Feedback__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_vier_gewinnt
bool
vier_gewinnt__action__RotateAbsolute_Feedback__Sequence__init(vier_gewinnt__action__RotateAbsolute_Feedback__Sequence * array, size_t size);

/// Finalize array of action/RotateAbsolute messages.
/**
 * It calls
 * vier_gewinnt__action__RotateAbsolute_Feedback__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_vier_gewinnt
void
vier_gewinnt__action__RotateAbsolute_Feedback__Sequence__fini(vier_gewinnt__action__RotateAbsolute_Feedback__Sequence * array);

/// Create array of action/RotateAbsolute messages.
/**
 * It allocates the memory for the array and calls
 * vier_gewinnt__action__RotateAbsolute_Feedback__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_vier_gewinnt
vier_gewinnt__action__RotateAbsolute_Feedback__Sequence *
vier_gewinnt__action__RotateAbsolute_Feedback__Sequence__create(size_t size);

/// Destroy array of action/RotateAbsolute messages.
/**
 * It calls
 * vier_gewinnt__action__RotateAbsolute_Feedback__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_vier_gewinnt
void
vier_gewinnt__action__RotateAbsolute_Feedback__Sequence__destroy(vier_gewinnt__action__RotateAbsolute_Feedback__Sequence * array);

/// Check for action/RotateAbsolute message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_vier_gewinnt
bool
vier_gewinnt__action__RotateAbsolute_Feedback__Sequence__are_equal(const vier_gewinnt__action__RotateAbsolute_Feedback__Sequence * lhs, const vier_gewinnt__action__RotateAbsolute_Feedback__Sequence * rhs);

/// Copy an array of action/RotateAbsolute messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_vier_gewinnt
bool
vier_gewinnt__action__RotateAbsolute_Feedback__Sequence__copy(
  const vier_gewinnt__action__RotateAbsolute_Feedback__Sequence * input,
  vier_gewinnt__action__RotateAbsolute_Feedback__Sequence * output);

/// Initialize action/RotateAbsolute message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * vier_gewinnt__action__RotateAbsolute_SendGoal_Request
 * )) before or use
 * vier_gewinnt__action__RotateAbsolute_SendGoal_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_vier_gewinnt
bool
vier_gewinnt__action__RotateAbsolute_SendGoal_Request__init(vier_gewinnt__action__RotateAbsolute_SendGoal_Request * msg);

/// Finalize action/RotateAbsolute message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_vier_gewinnt
void
vier_gewinnt__action__RotateAbsolute_SendGoal_Request__fini(vier_gewinnt__action__RotateAbsolute_SendGoal_Request * msg);

/// Create action/RotateAbsolute message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * vier_gewinnt__action__RotateAbsolute_SendGoal_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_vier_gewinnt
vier_gewinnt__action__RotateAbsolute_SendGoal_Request *
vier_gewinnt__action__RotateAbsolute_SendGoal_Request__create();

/// Destroy action/RotateAbsolute message.
/**
 * It calls
 * vier_gewinnt__action__RotateAbsolute_SendGoal_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_vier_gewinnt
void
vier_gewinnt__action__RotateAbsolute_SendGoal_Request__destroy(vier_gewinnt__action__RotateAbsolute_SendGoal_Request * msg);

/// Check for action/RotateAbsolute message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_vier_gewinnt
bool
vier_gewinnt__action__RotateAbsolute_SendGoal_Request__are_equal(const vier_gewinnt__action__RotateAbsolute_SendGoal_Request * lhs, const vier_gewinnt__action__RotateAbsolute_SendGoal_Request * rhs);

/// Copy a action/RotateAbsolute message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_vier_gewinnt
bool
vier_gewinnt__action__RotateAbsolute_SendGoal_Request__copy(
  const vier_gewinnt__action__RotateAbsolute_SendGoal_Request * input,
  vier_gewinnt__action__RotateAbsolute_SendGoal_Request * output);

/// Initialize array of action/RotateAbsolute messages.
/**
 * It allocates the memory for the number of elements and calls
 * vier_gewinnt__action__RotateAbsolute_SendGoal_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_vier_gewinnt
bool
vier_gewinnt__action__RotateAbsolute_SendGoal_Request__Sequence__init(vier_gewinnt__action__RotateAbsolute_SendGoal_Request__Sequence * array, size_t size);

/// Finalize array of action/RotateAbsolute messages.
/**
 * It calls
 * vier_gewinnt__action__RotateAbsolute_SendGoal_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_vier_gewinnt
void
vier_gewinnt__action__RotateAbsolute_SendGoal_Request__Sequence__fini(vier_gewinnt__action__RotateAbsolute_SendGoal_Request__Sequence * array);

/// Create array of action/RotateAbsolute messages.
/**
 * It allocates the memory for the array and calls
 * vier_gewinnt__action__RotateAbsolute_SendGoal_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_vier_gewinnt
vier_gewinnt__action__RotateAbsolute_SendGoal_Request__Sequence *
vier_gewinnt__action__RotateAbsolute_SendGoal_Request__Sequence__create(size_t size);

/// Destroy array of action/RotateAbsolute messages.
/**
 * It calls
 * vier_gewinnt__action__RotateAbsolute_SendGoal_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_vier_gewinnt
void
vier_gewinnt__action__RotateAbsolute_SendGoal_Request__Sequence__destroy(vier_gewinnt__action__RotateAbsolute_SendGoal_Request__Sequence * array);

/// Check for action/RotateAbsolute message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_vier_gewinnt
bool
vier_gewinnt__action__RotateAbsolute_SendGoal_Request__Sequence__are_equal(const vier_gewinnt__action__RotateAbsolute_SendGoal_Request__Sequence * lhs, const vier_gewinnt__action__RotateAbsolute_SendGoal_Request__Sequence * rhs);

/// Copy an array of action/RotateAbsolute messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_vier_gewinnt
bool
vier_gewinnt__action__RotateAbsolute_SendGoal_Request__Sequence__copy(
  const vier_gewinnt__action__RotateAbsolute_SendGoal_Request__Sequence * input,
  vier_gewinnt__action__RotateAbsolute_SendGoal_Request__Sequence * output);

/// Initialize action/RotateAbsolute message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * vier_gewinnt__action__RotateAbsolute_SendGoal_Response
 * )) before or use
 * vier_gewinnt__action__RotateAbsolute_SendGoal_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_vier_gewinnt
bool
vier_gewinnt__action__RotateAbsolute_SendGoal_Response__init(vier_gewinnt__action__RotateAbsolute_SendGoal_Response * msg);

/// Finalize action/RotateAbsolute message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_vier_gewinnt
void
vier_gewinnt__action__RotateAbsolute_SendGoal_Response__fini(vier_gewinnt__action__RotateAbsolute_SendGoal_Response * msg);

/// Create action/RotateAbsolute message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * vier_gewinnt__action__RotateAbsolute_SendGoal_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_vier_gewinnt
vier_gewinnt__action__RotateAbsolute_SendGoal_Response *
vier_gewinnt__action__RotateAbsolute_SendGoal_Response__create();

/// Destroy action/RotateAbsolute message.
/**
 * It calls
 * vier_gewinnt__action__RotateAbsolute_SendGoal_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_vier_gewinnt
void
vier_gewinnt__action__RotateAbsolute_SendGoal_Response__destroy(vier_gewinnt__action__RotateAbsolute_SendGoal_Response * msg);

/// Check for action/RotateAbsolute message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_vier_gewinnt
bool
vier_gewinnt__action__RotateAbsolute_SendGoal_Response__are_equal(const vier_gewinnt__action__RotateAbsolute_SendGoal_Response * lhs, const vier_gewinnt__action__RotateAbsolute_SendGoal_Response * rhs);

/// Copy a action/RotateAbsolute message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_vier_gewinnt
bool
vier_gewinnt__action__RotateAbsolute_SendGoal_Response__copy(
  const vier_gewinnt__action__RotateAbsolute_SendGoal_Response * input,
  vier_gewinnt__action__RotateAbsolute_SendGoal_Response * output);

/// Initialize array of action/RotateAbsolute messages.
/**
 * It allocates the memory for the number of elements and calls
 * vier_gewinnt__action__RotateAbsolute_SendGoal_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_vier_gewinnt
bool
vier_gewinnt__action__RotateAbsolute_SendGoal_Response__Sequence__init(vier_gewinnt__action__RotateAbsolute_SendGoal_Response__Sequence * array, size_t size);

/// Finalize array of action/RotateAbsolute messages.
/**
 * It calls
 * vier_gewinnt__action__RotateAbsolute_SendGoal_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_vier_gewinnt
void
vier_gewinnt__action__RotateAbsolute_SendGoal_Response__Sequence__fini(vier_gewinnt__action__RotateAbsolute_SendGoal_Response__Sequence * array);

/// Create array of action/RotateAbsolute messages.
/**
 * It allocates the memory for the array and calls
 * vier_gewinnt__action__RotateAbsolute_SendGoal_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_vier_gewinnt
vier_gewinnt__action__RotateAbsolute_SendGoal_Response__Sequence *
vier_gewinnt__action__RotateAbsolute_SendGoal_Response__Sequence__create(size_t size);

/// Destroy array of action/RotateAbsolute messages.
/**
 * It calls
 * vier_gewinnt__action__RotateAbsolute_SendGoal_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_vier_gewinnt
void
vier_gewinnt__action__RotateAbsolute_SendGoal_Response__Sequence__destroy(vier_gewinnt__action__RotateAbsolute_SendGoal_Response__Sequence * array);

/// Check for action/RotateAbsolute message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_vier_gewinnt
bool
vier_gewinnt__action__RotateAbsolute_SendGoal_Response__Sequence__are_equal(const vier_gewinnt__action__RotateAbsolute_SendGoal_Response__Sequence * lhs, const vier_gewinnt__action__RotateAbsolute_SendGoal_Response__Sequence * rhs);

/// Copy an array of action/RotateAbsolute messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_vier_gewinnt
bool
vier_gewinnt__action__RotateAbsolute_SendGoal_Response__Sequence__copy(
  const vier_gewinnt__action__RotateAbsolute_SendGoal_Response__Sequence * input,
  vier_gewinnt__action__RotateAbsolute_SendGoal_Response__Sequence * output);

/// Initialize action/RotateAbsolute message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * vier_gewinnt__action__RotateAbsolute_GetResult_Request
 * )) before or use
 * vier_gewinnt__action__RotateAbsolute_GetResult_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_vier_gewinnt
bool
vier_gewinnt__action__RotateAbsolute_GetResult_Request__init(vier_gewinnt__action__RotateAbsolute_GetResult_Request * msg);

/// Finalize action/RotateAbsolute message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_vier_gewinnt
void
vier_gewinnt__action__RotateAbsolute_GetResult_Request__fini(vier_gewinnt__action__RotateAbsolute_GetResult_Request * msg);

/// Create action/RotateAbsolute message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * vier_gewinnt__action__RotateAbsolute_GetResult_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_vier_gewinnt
vier_gewinnt__action__RotateAbsolute_GetResult_Request *
vier_gewinnt__action__RotateAbsolute_GetResult_Request__create();

/// Destroy action/RotateAbsolute message.
/**
 * It calls
 * vier_gewinnt__action__RotateAbsolute_GetResult_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_vier_gewinnt
void
vier_gewinnt__action__RotateAbsolute_GetResult_Request__destroy(vier_gewinnt__action__RotateAbsolute_GetResult_Request * msg);

/// Check for action/RotateAbsolute message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_vier_gewinnt
bool
vier_gewinnt__action__RotateAbsolute_GetResult_Request__are_equal(const vier_gewinnt__action__RotateAbsolute_GetResult_Request * lhs, const vier_gewinnt__action__RotateAbsolute_GetResult_Request * rhs);

/// Copy a action/RotateAbsolute message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_vier_gewinnt
bool
vier_gewinnt__action__RotateAbsolute_GetResult_Request__copy(
  const vier_gewinnt__action__RotateAbsolute_GetResult_Request * input,
  vier_gewinnt__action__RotateAbsolute_GetResult_Request * output);

/// Initialize array of action/RotateAbsolute messages.
/**
 * It allocates the memory for the number of elements and calls
 * vier_gewinnt__action__RotateAbsolute_GetResult_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_vier_gewinnt
bool
vier_gewinnt__action__RotateAbsolute_GetResult_Request__Sequence__init(vier_gewinnt__action__RotateAbsolute_GetResult_Request__Sequence * array, size_t size);

/// Finalize array of action/RotateAbsolute messages.
/**
 * It calls
 * vier_gewinnt__action__RotateAbsolute_GetResult_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_vier_gewinnt
void
vier_gewinnt__action__RotateAbsolute_GetResult_Request__Sequence__fini(vier_gewinnt__action__RotateAbsolute_GetResult_Request__Sequence * array);

/// Create array of action/RotateAbsolute messages.
/**
 * It allocates the memory for the array and calls
 * vier_gewinnt__action__RotateAbsolute_GetResult_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_vier_gewinnt
vier_gewinnt__action__RotateAbsolute_GetResult_Request__Sequence *
vier_gewinnt__action__RotateAbsolute_GetResult_Request__Sequence__create(size_t size);

/// Destroy array of action/RotateAbsolute messages.
/**
 * It calls
 * vier_gewinnt__action__RotateAbsolute_GetResult_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_vier_gewinnt
void
vier_gewinnt__action__RotateAbsolute_GetResult_Request__Sequence__destroy(vier_gewinnt__action__RotateAbsolute_GetResult_Request__Sequence * array);

/// Check for action/RotateAbsolute message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_vier_gewinnt
bool
vier_gewinnt__action__RotateAbsolute_GetResult_Request__Sequence__are_equal(const vier_gewinnt__action__RotateAbsolute_GetResult_Request__Sequence * lhs, const vier_gewinnt__action__RotateAbsolute_GetResult_Request__Sequence * rhs);

/// Copy an array of action/RotateAbsolute messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_vier_gewinnt
bool
vier_gewinnt__action__RotateAbsolute_GetResult_Request__Sequence__copy(
  const vier_gewinnt__action__RotateAbsolute_GetResult_Request__Sequence * input,
  vier_gewinnt__action__RotateAbsolute_GetResult_Request__Sequence * output);

/// Initialize action/RotateAbsolute message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * vier_gewinnt__action__RotateAbsolute_GetResult_Response
 * )) before or use
 * vier_gewinnt__action__RotateAbsolute_GetResult_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_vier_gewinnt
bool
vier_gewinnt__action__RotateAbsolute_GetResult_Response__init(vier_gewinnt__action__RotateAbsolute_GetResult_Response * msg);

/// Finalize action/RotateAbsolute message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_vier_gewinnt
void
vier_gewinnt__action__RotateAbsolute_GetResult_Response__fini(vier_gewinnt__action__RotateAbsolute_GetResult_Response * msg);

/// Create action/RotateAbsolute message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * vier_gewinnt__action__RotateAbsolute_GetResult_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_vier_gewinnt
vier_gewinnt__action__RotateAbsolute_GetResult_Response *
vier_gewinnt__action__RotateAbsolute_GetResult_Response__create();

/// Destroy action/RotateAbsolute message.
/**
 * It calls
 * vier_gewinnt__action__RotateAbsolute_GetResult_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_vier_gewinnt
void
vier_gewinnt__action__RotateAbsolute_GetResult_Response__destroy(vier_gewinnt__action__RotateAbsolute_GetResult_Response * msg);

/// Check for action/RotateAbsolute message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_vier_gewinnt
bool
vier_gewinnt__action__RotateAbsolute_GetResult_Response__are_equal(const vier_gewinnt__action__RotateAbsolute_GetResult_Response * lhs, const vier_gewinnt__action__RotateAbsolute_GetResult_Response * rhs);

/// Copy a action/RotateAbsolute message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_vier_gewinnt
bool
vier_gewinnt__action__RotateAbsolute_GetResult_Response__copy(
  const vier_gewinnt__action__RotateAbsolute_GetResult_Response * input,
  vier_gewinnt__action__RotateAbsolute_GetResult_Response * output);

/// Initialize array of action/RotateAbsolute messages.
/**
 * It allocates the memory for the number of elements and calls
 * vier_gewinnt__action__RotateAbsolute_GetResult_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_vier_gewinnt
bool
vier_gewinnt__action__RotateAbsolute_GetResult_Response__Sequence__init(vier_gewinnt__action__RotateAbsolute_GetResult_Response__Sequence * array, size_t size);

/// Finalize array of action/RotateAbsolute messages.
/**
 * It calls
 * vier_gewinnt__action__RotateAbsolute_GetResult_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_vier_gewinnt
void
vier_gewinnt__action__RotateAbsolute_GetResult_Response__Sequence__fini(vier_gewinnt__action__RotateAbsolute_GetResult_Response__Sequence * array);

/// Create array of action/RotateAbsolute messages.
/**
 * It allocates the memory for the array and calls
 * vier_gewinnt__action__RotateAbsolute_GetResult_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_vier_gewinnt
vier_gewinnt__action__RotateAbsolute_GetResult_Response__Sequence *
vier_gewinnt__action__RotateAbsolute_GetResult_Response__Sequence__create(size_t size);

/// Destroy array of action/RotateAbsolute messages.
/**
 * It calls
 * vier_gewinnt__action__RotateAbsolute_GetResult_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_vier_gewinnt
void
vier_gewinnt__action__RotateAbsolute_GetResult_Response__Sequence__destroy(vier_gewinnt__action__RotateAbsolute_GetResult_Response__Sequence * array);

/// Check for action/RotateAbsolute message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_vier_gewinnt
bool
vier_gewinnt__action__RotateAbsolute_GetResult_Response__Sequence__are_equal(const vier_gewinnt__action__RotateAbsolute_GetResult_Response__Sequence * lhs, const vier_gewinnt__action__RotateAbsolute_GetResult_Response__Sequence * rhs);

/// Copy an array of action/RotateAbsolute messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_vier_gewinnt
bool
vier_gewinnt__action__RotateAbsolute_GetResult_Response__Sequence__copy(
  const vier_gewinnt__action__RotateAbsolute_GetResult_Response__Sequence * input,
  vier_gewinnt__action__RotateAbsolute_GetResult_Response__Sequence * output);

/// Initialize action/RotateAbsolute message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * vier_gewinnt__action__RotateAbsolute_FeedbackMessage
 * )) before or use
 * vier_gewinnt__action__RotateAbsolute_FeedbackMessage__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_vier_gewinnt
bool
vier_gewinnt__action__RotateAbsolute_FeedbackMessage__init(vier_gewinnt__action__RotateAbsolute_FeedbackMessage * msg);

/// Finalize action/RotateAbsolute message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_vier_gewinnt
void
vier_gewinnt__action__RotateAbsolute_FeedbackMessage__fini(vier_gewinnt__action__RotateAbsolute_FeedbackMessage * msg);

/// Create action/RotateAbsolute message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * vier_gewinnt__action__RotateAbsolute_FeedbackMessage__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_vier_gewinnt
vier_gewinnt__action__RotateAbsolute_FeedbackMessage *
vier_gewinnt__action__RotateAbsolute_FeedbackMessage__create();

/// Destroy action/RotateAbsolute message.
/**
 * It calls
 * vier_gewinnt__action__RotateAbsolute_FeedbackMessage__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_vier_gewinnt
void
vier_gewinnt__action__RotateAbsolute_FeedbackMessage__destroy(vier_gewinnt__action__RotateAbsolute_FeedbackMessage * msg);

/// Check for action/RotateAbsolute message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_vier_gewinnt
bool
vier_gewinnt__action__RotateAbsolute_FeedbackMessage__are_equal(const vier_gewinnt__action__RotateAbsolute_FeedbackMessage * lhs, const vier_gewinnt__action__RotateAbsolute_FeedbackMessage * rhs);

/// Copy a action/RotateAbsolute message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_vier_gewinnt
bool
vier_gewinnt__action__RotateAbsolute_FeedbackMessage__copy(
  const vier_gewinnt__action__RotateAbsolute_FeedbackMessage * input,
  vier_gewinnt__action__RotateAbsolute_FeedbackMessage * output);

/// Initialize array of action/RotateAbsolute messages.
/**
 * It allocates the memory for the number of elements and calls
 * vier_gewinnt__action__RotateAbsolute_FeedbackMessage__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_vier_gewinnt
bool
vier_gewinnt__action__RotateAbsolute_FeedbackMessage__Sequence__init(vier_gewinnt__action__RotateAbsolute_FeedbackMessage__Sequence * array, size_t size);

/// Finalize array of action/RotateAbsolute messages.
/**
 * It calls
 * vier_gewinnt__action__RotateAbsolute_FeedbackMessage__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_vier_gewinnt
void
vier_gewinnt__action__RotateAbsolute_FeedbackMessage__Sequence__fini(vier_gewinnt__action__RotateAbsolute_FeedbackMessage__Sequence * array);

/// Create array of action/RotateAbsolute messages.
/**
 * It allocates the memory for the array and calls
 * vier_gewinnt__action__RotateAbsolute_FeedbackMessage__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_vier_gewinnt
vier_gewinnt__action__RotateAbsolute_FeedbackMessage__Sequence *
vier_gewinnt__action__RotateAbsolute_FeedbackMessage__Sequence__create(size_t size);

/// Destroy array of action/RotateAbsolute messages.
/**
 * It calls
 * vier_gewinnt__action__RotateAbsolute_FeedbackMessage__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_vier_gewinnt
void
vier_gewinnt__action__RotateAbsolute_FeedbackMessage__Sequence__destroy(vier_gewinnt__action__RotateAbsolute_FeedbackMessage__Sequence * array);

/// Check for action/RotateAbsolute message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_vier_gewinnt
bool
vier_gewinnt__action__RotateAbsolute_FeedbackMessage__Sequence__are_equal(const vier_gewinnt__action__RotateAbsolute_FeedbackMessage__Sequence * lhs, const vier_gewinnt__action__RotateAbsolute_FeedbackMessage__Sequence * rhs);

/// Copy an array of action/RotateAbsolute messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_vier_gewinnt
bool
vier_gewinnt__action__RotateAbsolute_FeedbackMessage__Sequence__copy(
  const vier_gewinnt__action__RotateAbsolute_FeedbackMessage__Sequence * input,
  vier_gewinnt__action__RotateAbsolute_FeedbackMessage__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // VIER_GEWINNT__ACTION__DETAIL__ROTATE_ABSOLUTE__FUNCTIONS_H_
