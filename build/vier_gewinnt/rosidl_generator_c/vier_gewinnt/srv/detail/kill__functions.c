// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from vier_gewinnt:srv/Kill.idl
// generated code does not contain a copyright notice
#include "vier_gewinnt/srv/detail/kill__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"

bool
vier_gewinnt__srv__Kill_Request__init(vier_gewinnt__srv__Kill_Request * msg)
{
  if (!msg) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    vier_gewinnt__srv__Kill_Request__fini(msg);
    return false;
  }
  return true;
}

void
vier_gewinnt__srv__Kill_Request__fini(vier_gewinnt__srv__Kill_Request * msg)
{
  if (!msg) {
    return;
  }
  // name
  rosidl_runtime_c__String__fini(&msg->name);
}

bool
vier_gewinnt__srv__Kill_Request__are_equal(const vier_gewinnt__srv__Kill_Request * lhs, const vier_gewinnt__srv__Kill_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->name), &(rhs->name)))
  {
    return false;
  }
  return true;
}

bool
vier_gewinnt__srv__Kill_Request__copy(
  const vier_gewinnt__srv__Kill_Request * input,
  vier_gewinnt__srv__Kill_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__copy(
      &(input->name), &(output->name)))
  {
    return false;
  }
  return true;
}

vier_gewinnt__srv__Kill_Request *
vier_gewinnt__srv__Kill_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  vier_gewinnt__srv__Kill_Request * msg = (vier_gewinnt__srv__Kill_Request *)allocator.allocate(sizeof(vier_gewinnt__srv__Kill_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(vier_gewinnt__srv__Kill_Request));
  bool success = vier_gewinnt__srv__Kill_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
vier_gewinnt__srv__Kill_Request__destroy(vier_gewinnt__srv__Kill_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    vier_gewinnt__srv__Kill_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
vier_gewinnt__srv__Kill_Request__Sequence__init(vier_gewinnt__srv__Kill_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  vier_gewinnt__srv__Kill_Request * data = NULL;

  if (size) {
    data = (vier_gewinnt__srv__Kill_Request *)allocator.zero_allocate(size, sizeof(vier_gewinnt__srv__Kill_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = vier_gewinnt__srv__Kill_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        vier_gewinnt__srv__Kill_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
vier_gewinnt__srv__Kill_Request__Sequence__fini(vier_gewinnt__srv__Kill_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      vier_gewinnt__srv__Kill_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

vier_gewinnt__srv__Kill_Request__Sequence *
vier_gewinnt__srv__Kill_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  vier_gewinnt__srv__Kill_Request__Sequence * array = (vier_gewinnt__srv__Kill_Request__Sequence *)allocator.allocate(sizeof(vier_gewinnt__srv__Kill_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = vier_gewinnt__srv__Kill_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
vier_gewinnt__srv__Kill_Request__Sequence__destroy(vier_gewinnt__srv__Kill_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    vier_gewinnt__srv__Kill_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
vier_gewinnt__srv__Kill_Request__Sequence__are_equal(const vier_gewinnt__srv__Kill_Request__Sequence * lhs, const vier_gewinnt__srv__Kill_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!vier_gewinnt__srv__Kill_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
vier_gewinnt__srv__Kill_Request__Sequence__copy(
  const vier_gewinnt__srv__Kill_Request__Sequence * input,
  vier_gewinnt__srv__Kill_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(vier_gewinnt__srv__Kill_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    vier_gewinnt__srv__Kill_Request * data =
      (vier_gewinnt__srv__Kill_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!vier_gewinnt__srv__Kill_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          vier_gewinnt__srv__Kill_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!vier_gewinnt__srv__Kill_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
vier_gewinnt__srv__Kill_Response__init(vier_gewinnt__srv__Kill_Response * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
vier_gewinnt__srv__Kill_Response__fini(vier_gewinnt__srv__Kill_Response * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

bool
vier_gewinnt__srv__Kill_Response__are_equal(const vier_gewinnt__srv__Kill_Response * lhs, const vier_gewinnt__srv__Kill_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // structure_needs_at_least_one_member
  if (lhs->structure_needs_at_least_one_member != rhs->structure_needs_at_least_one_member) {
    return false;
  }
  return true;
}

bool
vier_gewinnt__srv__Kill_Response__copy(
  const vier_gewinnt__srv__Kill_Response * input,
  vier_gewinnt__srv__Kill_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // structure_needs_at_least_one_member
  output->structure_needs_at_least_one_member = input->structure_needs_at_least_one_member;
  return true;
}

vier_gewinnt__srv__Kill_Response *
vier_gewinnt__srv__Kill_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  vier_gewinnt__srv__Kill_Response * msg = (vier_gewinnt__srv__Kill_Response *)allocator.allocate(sizeof(vier_gewinnt__srv__Kill_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(vier_gewinnt__srv__Kill_Response));
  bool success = vier_gewinnt__srv__Kill_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
vier_gewinnt__srv__Kill_Response__destroy(vier_gewinnt__srv__Kill_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    vier_gewinnt__srv__Kill_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
vier_gewinnt__srv__Kill_Response__Sequence__init(vier_gewinnt__srv__Kill_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  vier_gewinnt__srv__Kill_Response * data = NULL;

  if (size) {
    data = (vier_gewinnt__srv__Kill_Response *)allocator.zero_allocate(size, sizeof(vier_gewinnt__srv__Kill_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = vier_gewinnt__srv__Kill_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        vier_gewinnt__srv__Kill_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
vier_gewinnt__srv__Kill_Response__Sequence__fini(vier_gewinnt__srv__Kill_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      vier_gewinnt__srv__Kill_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

vier_gewinnt__srv__Kill_Response__Sequence *
vier_gewinnt__srv__Kill_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  vier_gewinnt__srv__Kill_Response__Sequence * array = (vier_gewinnt__srv__Kill_Response__Sequence *)allocator.allocate(sizeof(vier_gewinnt__srv__Kill_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = vier_gewinnt__srv__Kill_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
vier_gewinnt__srv__Kill_Response__Sequence__destroy(vier_gewinnt__srv__Kill_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    vier_gewinnt__srv__Kill_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
vier_gewinnt__srv__Kill_Response__Sequence__are_equal(const vier_gewinnt__srv__Kill_Response__Sequence * lhs, const vier_gewinnt__srv__Kill_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!vier_gewinnt__srv__Kill_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
vier_gewinnt__srv__Kill_Response__Sequence__copy(
  const vier_gewinnt__srv__Kill_Response__Sequence * input,
  vier_gewinnt__srv__Kill_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(vier_gewinnt__srv__Kill_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    vier_gewinnt__srv__Kill_Response * data =
      (vier_gewinnt__srv__Kill_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!vier_gewinnt__srv__Kill_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          vier_gewinnt__srv__Kill_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!vier_gewinnt__srv__Kill_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
