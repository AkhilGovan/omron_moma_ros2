// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from om_aiv_msg:msg/Location.idl
// generated code does not contain a copyright notice
#include "om_aiv_msg/msg/detail/location__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
om_aiv_msg__msg__Location__init(om_aiv_msg__msg__Location * msg)
{
  if (!msg) {
    return false;
  }
  // x
  // y
  // theta
  return true;
}

void
om_aiv_msg__msg__Location__fini(om_aiv_msg__msg__Location * msg)
{
  if (!msg) {
    return;
  }
  // x
  // y
  // theta
}

bool
om_aiv_msg__msg__Location__are_equal(const om_aiv_msg__msg__Location * lhs, const om_aiv_msg__msg__Location * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // x
  if (lhs->x != rhs->x) {
    return false;
  }
  // y
  if (lhs->y != rhs->y) {
    return false;
  }
  // theta
  if (lhs->theta != rhs->theta) {
    return false;
  }
  return true;
}

bool
om_aiv_msg__msg__Location__copy(
  const om_aiv_msg__msg__Location * input,
  om_aiv_msg__msg__Location * output)
{
  if (!input || !output) {
    return false;
  }
  // x
  output->x = input->x;
  // y
  output->y = input->y;
  // theta
  output->theta = input->theta;
  return true;
}

om_aiv_msg__msg__Location *
om_aiv_msg__msg__Location__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  om_aiv_msg__msg__Location * msg = (om_aiv_msg__msg__Location *)allocator.allocate(sizeof(om_aiv_msg__msg__Location), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(om_aiv_msg__msg__Location));
  bool success = om_aiv_msg__msg__Location__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
om_aiv_msg__msg__Location__destroy(om_aiv_msg__msg__Location * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    om_aiv_msg__msg__Location__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
om_aiv_msg__msg__Location__Sequence__init(om_aiv_msg__msg__Location__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  om_aiv_msg__msg__Location * data = NULL;

  if (size) {
    data = (om_aiv_msg__msg__Location *)allocator.zero_allocate(size, sizeof(om_aiv_msg__msg__Location), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = om_aiv_msg__msg__Location__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        om_aiv_msg__msg__Location__fini(&data[i - 1]);
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
om_aiv_msg__msg__Location__Sequence__fini(om_aiv_msg__msg__Location__Sequence * array)
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
      om_aiv_msg__msg__Location__fini(&array->data[i]);
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

om_aiv_msg__msg__Location__Sequence *
om_aiv_msg__msg__Location__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  om_aiv_msg__msg__Location__Sequence * array = (om_aiv_msg__msg__Location__Sequence *)allocator.allocate(sizeof(om_aiv_msg__msg__Location__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = om_aiv_msg__msg__Location__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
om_aiv_msg__msg__Location__Sequence__destroy(om_aiv_msg__msg__Location__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    om_aiv_msg__msg__Location__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
om_aiv_msg__msg__Location__Sequence__are_equal(const om_aiv_msg__msg__Location__Sequence * lhs, const om_aiv_msg__msg__Location__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!om_aiv_msg__msg__Location__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
om_aiv_msg__msg__Location__Sequence__copy(
  const om_aiv_msg__msg__Location__Sequence * input,
  om_aiv_msg__msg__Location__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(om_aiv_msg__msg__Location);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    om_aiv_msg__msg__Location * data =
      (om_aiv_msg__msg__Location *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!om_aiv_msg__msg__Location__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          om_aiv_msg__msg__Location__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!om_aiv_msg__msg__Location__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
