// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from vier_gewinnt:msg/Color.idl
// generated code does not contain a copyright notice
#include "vier_gewinnt/msg/detail/color__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
vier_gewinnt__msg__Color__init(vier_gewinnt__msg__Color * msg)
{
  if (!msg) {
    return false;
  }
  // r
  // g
  // b
  return true;
}

void
vier_gewinnt__msg__Color__fini(vier_gewinnt__msg__Color * msg)
{
  if (!msg) {
    return;
  }
  // r
  // g
  // b
}

bool
vier_gewinnt__msg__Color__are_equal(const vier_gewinnt__msg__Color * lhs, const vier_gewinnt__msg__Color * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // r
  if (lhs->r != rhs->r) {
    return false;
  }
  // g
  if (lhs->g != rhs->g) {
    return false;
  }
  // b
  if (lhs->b != rhs->b) {
    return false;
  }
  return true;
}

bool
vier_gewinnt__msg__Color__copy(
  const vier_gewinnt__msg__Color * input,
  vier_gewinnt__msg__Color * output)
{
  if (!input || !output) {
    return false;
  }
  // r
  output->r = input->r;
  // g
  output->g = input->g;
  // b
  output->b = input->b;
  return true;
}

vier_gewinnt__msg__Color *
vier_gewinnt__msg__Color__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  vier_gewinnt__msg__Color * msg = (vier_gewinnt__msg__Color *)allocator.allocate(sizeof(vier_gewinnt__msg__Color), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(vier_gewinnt__msg__Color));
  bool success = vier_gewinnt__msg__Color__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
vier_gewinnt__msg__Color__destroy(vier_gewinnt__msg__Color * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    vier_gewinnt__msg__Color__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
vier_gewinnt__msg__Color__Sequence__init(vier_gewinnt__msg__Color__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  vier_gewinnt__msg__Color * data = NULL;

  if (size) {
    data = (vier_gewinnt__msg__Color *)allocator.zero_allocate(size, sizeof(vier_gewinnt__msg__Color), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = vier_gewinnt__msg__Color__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        vier_gewinnt__msg__Color__fini(&data[i - 1]);
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
vier_gewinnt__msg__Color__Sequence__fini(vier_gewinnt__msg__Color__Sequence * array)
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
      vier_gewinnt__msg__Color__fini(&array->data[i]);
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

vier_gewinnt__msg__Color__Sequence *
vier_gewinnt__msg__Color__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  vier_gewinnt__msg__Color__Sequence * array = (vier_gewinnt__msg__Color__Sequence *)allocator.allocate(sizeof(vier_gewinnt__msg__Color__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = vier_gewinnt__msg__Color__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
vier_gewinnt__msg__Color__Sequence__destroy(vier_gewinnt__msg__Color__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    vier_gewinnt__msg__Color__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
vier_gewinnt__msg__Color__Sequence__are_equal(const vier_gewinnt__msg__Color__Sequence * lhs, const vier_gewinnt__msg__Color__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!vier_gewinnt__msg__Color__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
vier_gewinnt__msg__Color__Sequence__copy(
  const vier_gewinnt__msg__Color__Sequence * input,
  vier_gewinnt__msg__Color__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(vier_gewinnt__msg__Color);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    vier_gewinnt__msg__Color * data =
      (vier_gewinnt__msg__Color *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!vier_gewinnt__msg__Color__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          vier_gewinnt__msg__Color__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!vier_gewinnt__msg__Color__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
