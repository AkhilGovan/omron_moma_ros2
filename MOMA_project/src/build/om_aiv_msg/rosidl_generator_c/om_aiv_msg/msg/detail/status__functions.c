// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from om_aiv_msg:msg/Status.idl
// generated code does not contain a copyright notice
#include "om_aiv_msg/msg/detail/status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `extended_status`
// Member `status`
#include "rosidl_runtime_c/string_functions.h"
// Member `location`
#include "om_aiv_msg/msg/detail/location__functions.h"

bool
om_aiv_msg__msg__Status__init(om_aiv_msg__msg__Status * msg)
{
  if (!msg) {
    return false;
  }
  // extended_status
  if (!rosidl_runtime_c__String__init(&msg->extended_status)) {
    om_aiv_msg__msg__Status__fini(msg);
    return false;
  }
  // status
  if (!rosidl_runtime_c__String__init(&msg->status)) {
    om_aiv_msg__msg__Status__fini(msg);
    return false;
  }
  // state_of_charge
  // localization_score
  // temperature
  // location
  if (!om_aiv_msg__msg__Location__init(&msg->location)) {
    om_aiv_msg__msg__Status__fini(msg);
    return false;
  }
  return true;
}

void
om_aiv_msg__msg__Status__fini(om_aiv_msg__msg__Status * msg)
{
  if (!msg) {
    return;
  }
  // extended_status
  rosidl_runtime_c__String__fini(&msg->extended_status);
  // status
  rosidl_runtime_c__String__fini(&msg->status);
  // state_of_charge
  // localization_score
  // temperature
  // location
  om_aiv_msg__msg__Location__fini(&msg->location);
}

bool
om_aiv_msg__msg__Status__are_equal(const om_aiv_msg__msg__Status * lhs, const om_aiv_msg__msg__Status * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // extended_status
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->extended_status), &(rhs->extended_status)))
  {
    return false;
  }
  // status
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->status), &(rhs->status)))
  {
    return false;
  }
  // state_of_charge
  if (lhs->state_of_charge != rhs->state_of_charge) {
    return false;
  }
  // localization_score
  if (lhs->localization_score != rhs->localization_score) {
    return false;
  }
  // temperature
  if (lhs->temperature != rhs->temperature) {
    return false;
  }
  // location
  if (!om_aiv_msg__msg__Location__are_equal(
      &(lhs->location), &(rhs->location)))
  {
    return false;
  }
  return true;
}

bool
om_aiv_msg__msg__Status__copy(
  const om_aiv_msg__msg__Status * input,
  om_aiv_msg__msg__Status * output)
{
  if (!input || !output) {
    return false;
  }
  // extended_status
  if (!rosidl_runtime_c__String__copy(
      &(input->extended_status), &(output->extended_status)))
  {
    return false;
  }
  // status
  if (!rosidl_runtime_c__String__copy(
      &(input->status), &(output->status)))
  {
    return false;
  }
  // state_of_charge
  output->state_of_charge = input->state_of_charge;
  // localization_score
  output->localization_score = input->localization_score;
  // temperature
  output->temperature = input->temperature;
  // location
  if (!om_aiv_msg__msg__Location__copy(
      &(input->location), &(output->location)))
  {
    return false;
  }
  return true;
}

om_aiv_msg__msg__Status *
om_aiv_msg__msg__Status__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  om_aiv_msg__msg__Status * msg = (om_aiv_msg__msg__Status *)allocator.allocate(sizeof(om_aiv_msg__msg__Status), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(om_aiv_msg__msg__Status));
  bool success = om_aiv_msg__msg__Status__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
om_aiv_msg__msg__Status__destroy(om_aiv_msg__msg__Status * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    om_aiv_msg__msg__Status__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
om_aiv_msg__msg__Status__Sequence__init(om_aiv_msg__msg__Status__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  om_aiv_msg__msg__Status * data = NULL;

  if (size) {
    data = (om_aiv_msg__msg__Status *)allocator.zero_allocate(size, sizeof(om_aiv_msg__msg__Status), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = om_aiv_msg__msg__Status__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        om_aiv_msg__msg__Status__fini(&data[i - 1]);
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
om_aiv_msg__msg__Status__Sequence__fini(om_aiv_msg__msg__Status__Sequence * array)
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
      om_aiv_msg__msg__Status__fini(&array->data[i]);
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

om_aiv_msg__msg__Status__Sequence *
om_aiv_msg__msg__Status__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  om_aiv_msg__msg__Status__Sequence * array = (om_aiv_msg__msg__Status__Sequence *)allocator.allocate(sizeof(om_aiv_msg__msg__Status__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = om_aiv_msg__msg__Status__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
om_aiv_msg__msg__Status__Sequence__destroy(om_aiv_msg__msg__Status__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    om_aiv_msg__msg__Status__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
om_aiv_msg__msg__Status__Sequence__are_equal(const om_aiv_msg__msg__Status__Sequence * lhs, const om_aiv_msg__msg__Status__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!om_aiv_msg__msg__Status__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
om_aiv_msg__msg__Status__Sequence__copy(
  const om_aiv_msg__msg__Status__Sequence * input,
  om_aiv_msg__msg__Status__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(om_aiv_msg__msg__Status);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    om_aiv_msg__msg__Status * data =
      (om_aiv_msg__msg__Status *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!om_aiv_msg__msg__Status__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          om_aiv_msg__msg__Status__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!om_aiv_msg__msg__Status__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
