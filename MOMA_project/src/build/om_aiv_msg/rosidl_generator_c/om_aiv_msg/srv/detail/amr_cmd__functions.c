// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from om_aiv_msg:srv/AmrCmd.idl
// generated code does not contain a copyright notice
#include "om_aiv_msg/srv/detail/amr_cmd__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `command`
// Member `param1`
// Member `param2`
#include "rosidl_runtime_c/string_functions.h"

bool
om_aiv_msg__srv__AmrCmd_Request__init(om_aiv_msg__srv__AmrCmd_Request * msg)
{
  if (!msg) {
    return false;
  }
  // command
  if (!rosidl_runtime_c__String__init(&msg->command)) {
    om_aiv_msg__srv__AmrCmd_Request__fini(msg);
    return false;
  }
  // param1
  if (!rosidl_runtime_c__String__init(&msg->param1)) {
    om_aiv_msg__srv__AmrCmd_Request__fini(msg);
    return false;
  }
  // param2
  if (!rosidl_runtime_c__String__init(&msg->param2)) {
    om_aiv_msg__srv__AmrCmd_Request__fini(msg);
    return false;
  }
  return true;
}

void
om_aiv_msg__srv__AmrCmd_Request__fini(om_aiv_msg__srv__AmrCmd_Request * msg)
{
  if (!msg) {
    return;
  }
  // command
  rosidl_runtime_c__String__fini(&msg->command);
  // param1
  rosidl_runtime_c__String__fini(&msg->param1);
  // param2
  rosidl_runtime_c__String__fini(&msg->param2);
}

bool
om_aiv_msg__srv__AmrCmd_Request__are_equal(const om_aiv_msg__srv__AmrCmd_Request * lhs, const om_aiv_msg__srv__AmrCmd_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // command
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->command), &(rhs->command)))
  {
    return false;
  }
  // param1
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->param1), &(rhs->param1)))
  {
    return false;
  }
  // param2
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->param2), &(rhs->param2)))
  {
    return false;
  }
  return true;
}

bool
om_aiv_msg__srv__AmrCmd_Request__copy(
  const om_aiv_msg__srv__AmrCmd_Request * input,
  om_aiv_msg__srv__AmrCmd_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // command
  if (!rosidl_runtime_c__String__copy(
      &(input->command), &(output->command)))
  {
    return false;
  }
  // param1
  if (!rosidl_runtime_c__String__copy(
      &(input->param1), &(output->param1)))
  {
    return false;
  }
  // param2
  if (!rosidl_runtime_c__String__copy(
      &(input->param2), &(output->param2)))
  {
    return false;
  }
  return true;
}

om_aiv_msg__srv__AmrCmd_Request *
om_aiv_msg__srv__AmrCmd_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  om_aiv_msg__srv__AmrCmd_Request * msg = (om_aiv_msg__srv__AmrCmd_Request *)allocator.allocate(sizeof(om_aiv_msg__srv__AmrCmd_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(om_aiv_msg__srv__AmrCmd_Request));
  bool success = om_aiv_msg__srv__AmrCmd_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
om_aiv_msg__srv__AmrCmd_Request__destroy(om_aiv_msg__srv__AmrCmd_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    om_aiv_msg__srv__AmrCmd_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
om_aiv_msg__srv__AmrCmd_Request__Sequence__init(om_aiv_msg__srv__AmrCmd_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  om_aiv_msg__srv__AmrCmd_Request * data = NULL;

  if (size) {
    data = (om_aiv_msg__srv__AmrCmd_Request *)allocator.zero_allocate(size, sizeof(om_aiv_msg__srv__AmrCmd_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = om_aiv_msg__srv__AmrCmd_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        om_aiv_msg__srv__AmrCmd_Request__fini(&data[i - 1]);
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
om_aiv_msg__srv__AmrCmd_Request__Sequence__fini(om_aiv_msg__srv__AmrCmd_Request__Sequence * array)
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
      om_aiv_msg__srv__AmrCmd_Request__fini(&array->data[i]);
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

om_aiv_msg__srv__AmrCmd_Request__Sequence *
om_aiv_msg__srv__AmrCmd_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  om_aiv_msg__srv__AmrCmd_Request__Sequence * array = (om_aiv_msg__srv__AmrCmd_Request__Sequence *)allocator.allocate(sizeof(om_aiv_msg__srv__AmrCmd_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = om_aiv_msg__srv__AmrCmd_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
om_aiv_msg__srv__AmrCmd_Request__Sequence__destroy(om_aiv_msg__srv__AmrCmd_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    om_aiv_msg__srv__AmrCmd_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
om_aiv_msg__srv__AmrCmd_Request__Sequence__are_equal(const om_aiv_msg__srv__AmrCmd_Request__Sequence * lhs, const om_aiv_msg__srv__AmrCmd_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!om_aiv_msg__srv__AmrCmd_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
om_aiv_msg__srv__AmrCmd_Request__Sequence__copy(
  const om_aiv_msg__srv__AmrCmd_Request__Sequence * input,
  om_aiv_msg__srv__AmrCmd_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(om_aiv_msg__srv__AmrCmd_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    om_aiv_msg__srv__AmrCmd_Request * data =
      (om_aiv_msg__srv__AmrCmd_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!om_aiv_msg__srv__AmrCmd_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          om_aiv_msg__srv__AmrCmd_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!om_aiv_msg__srv__AmrCmd_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `status`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
om_aiv_msg__srv__AmrCmd_Response__init(om_aiv_msg__srv__AmrCmd_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  if (!rosidl_runtime_c__String__init(&msg->status)) {
    om_aiv_msg__srv__AmrCmd_Response__fini(msg);
    return false;
  }
  return true;
}

void
om_aiv_msg__srv__AmrCmd_Response__fini(om_aiv_msg__srv__AmrCmd_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  rosidl_runtime_c__String__fini(&msg->status);
}

bool
om_aiv_msg__srv__AmrCmd_Response__are_equal(const om_aiv_msg__srv__AmrCmd_Response * lhs, const om_aiv_msg__srv__AmrCmd_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->status), &(rhs->status)))
  {
    return false;
  }
  return true;
}

bool
om_aiv_msg__srv__AmrCmd_Response__copy(
  const om_aiv_msg__srv__AmrCmd_Response * input,
  om_aiv_msg__srv__AmrCmd_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  if (!rosidl_runtime_c__String__copy(
      &(input->status), &(output->status)))
  {
    return false;
  }
  return true;
}

om_aiv_msg__srv__AmrCmd_Response *
om_aiv_msg__srv__AmrCmd_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  om_aiv_msg__srv__AmrCmd_Response * msg = (om_aiv_msg__srv__AmrCmd_Response *)allocator.allocate(sizeof(om_aiv_msg__srv__AmrCmd_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(om_aiv_msg__srv__AmrCmd_Response));
  bool success = om_aiv_msg__srv__AmrCmd_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
om_aiv_msg__srv__AmrCmd_Response__destroy(om_aiv_msg__srv__AmrCmd_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    om_aiv_msg__srv__AmrCmd_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
om_aiv_msg__srv__AmrCmd_Response__Sequence__init(om_aiv_msg__srv__AmrCmd_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  om_aiv_msg__srv__AmrCmd_Response * data = NULL;

  if (size) {
    data = (om_aiv_msg__srv__AmrCmd_Response *)allocator.zero_allocate(size, sizeof(om_aiv_msg__srv__AmrCmd_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = om_aiv_msg__srv__AmrCmd_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        om_aiv_msg__srv__AmrCmd_Response__fini(&data[i - 1]);
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
om_aiv_msg__srv__AmrCmd_Response__Sequence__fini(om_aiv_msg__srv__AmrCmd_Response__Sequence * array)
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
      om_aiv_msg__srv__AmrCmd_Response__fini(&array->data[i]);
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

om_aiv_msg__srv__AmrCmd_Response__Sequence *
om_aiv_msg__srv__AmrCmd_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  om_aiv_msg__srv__AmrCmd_Response__Sequence * array = (om_aiv_msg__srv__AmrCmd_Response__Sequence *)allocator.allocate(sizeof(om_aiv_msg__srv__AmrCmd_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = om_aiv_msg__srv__AmrCmd_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
om_aiv_msg__srv__AmrCmd_Response__Sequence__destroy(om_aiv_msg__srv__AmrCmd_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    om_aiv_msg__srv__AmrCmd_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
om_aiv_msg__srv__AmrCmd_Response__Sequence__are_equal(const om_aiv_msg__srv__AmrCmd_Response__Sequence * lhs, const om_aiv_msg__srv__AmrCmd_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!om_aiv_msg__srv__AmrCmd_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
om_aiv_msg__srv__AmrCmd_Response__Sequence__copy(
  const om_aiv_msg__srv__AmrCmd_Response__Sequence * input,
  om_aiv_msg__srv__AmrCmd_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(om_aiv_msg__srv__AmrCmd_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    om_aiv_msg__srv__AmrCmd_Response * data =
      (om_aiv_msg__srv__AmrCmd_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!om_aiv_msg__srv__AmrCmd_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          om_aiv_msg__srv__AmrCmd_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!om_aiv_msg__srv__AmrCmd_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
