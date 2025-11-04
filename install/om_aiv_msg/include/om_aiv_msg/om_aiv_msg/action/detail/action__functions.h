// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from om_aiv_msg:action/Action.idl
// generated code does not contain a copyright notice

#ifndef OM_AIV_MSG__ACTION__DETAIL__ACTION__FUNCTIONS_H_
#define OM_AIV_MSG__ACTION__DETAIL__ACTION__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "om_aiv_msg/msg/rosidl_generator_c__visibility_control.h"

#include "om_aiv_msg/action/detail/action__struct.h"

/// Initialize action/Action message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * om_aiv_msg__action__Action_Goal
 * )) before or use
 * om_aiv_msg__action__Action_Goal__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_om_aiv_msg
bool
om_aiv_msg__action__Action_Goal__init(om_aiv_msg__action__Action_Goal * msg);

/// Finalize action/Action message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_om_aiv_msg
void
om_aiv_msg__action__Action_Goal__fini(om_aiv_msg__action__Action_Goal * msg);

/// Create action/Action message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * om_aiv_msg__action__Action_Goal__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_om_aiv_msg
om_aiv_msg__action__Action_Goal *
om_aiv_msg__action__Action_Goal__create();

/// Destroy action/Action message.
/**
 * It calls
 * om_aiv_msg__action__Action_Goal__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_om_aiv_msg
void
om_aiv_msg__action__Action_Goal__destroy(om_aiv_msg__action__Action_Goal * msg);

/// Check for action/Action message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_om_aiv_msg
bool
om_aiv_msg__action__Action_Goal__are_equal(const om_aiv_msg__action__Action_Goal * lhs, const om_aiv_msg__action__Action_Goal * rhs);

/// Copy a action/Action message.
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
ROSIDL_GENERATOR_C_PUBLIC_om_aiv_msg
bool
om_aiv_msg__action__Action_Goal__copy(
  const om_aiv_msg__action__Action_Goal * input,
  om_aiv_msg__action__Action_Goal * output);

/// Initialize array of action/Action messages.
/**
 * It allocates the memory for the number of elements and calls
 * om_aiv_msg__action__Action_Goal__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_om_aiv_msg
bool
om_aiv_msg__action__Action_Goal__Sequence__init(om_aiv_msg__action__Action_Goal__Sequence * array, size_t size);

/// Finalize array of action/Action messages.
/**
 * It calls
 * om_aiv_msg__action__Action_Goal__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_om_aiv_msg
void
om_aiv_msg__action__Action_Goal__Sequence__fini(om_aiv_msg__action__Action_Goal__Sequence * array);

/// Create array of action/Action messages.
/**
 * It allocates the memory for the array and calls
 * om_aiv_msg__action__Action_Goal__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_om_aiv_msg
om_aiv_msg__action__Action_Goal__Sequence *
om_aiv_msg__action__Action_Goal__Sequence__create(size_t size);

/// Destroy array of action/Action messages.
/**
 * It calls
 * om_aiv_msg__action__Action_Goal__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_om_aiv_msg
void
om_aiv_msg__action__Action_Goal__Sequence__destroy(om_aiv_msg__action__Action_Goal__Sequence * array);

/// Check for action/Action message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_om_aiv_msg
bool
om_aiv_msg__action__Action_Goal__Sequence__are_equal(const om_aiv_msg__action__Action_Goal__Sequence * lhs, const om_aiv_msg__action__Action_Goal__Sequence * rhs);

/// Copy an array of action/Action messages.
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
ROSIDL_GENERATOR_C_PUBLIC_om_aiv_msg
bool
om_aiv_msg__action__Action_Goal__Sequence__copy(
  const om_aiv_msg__action__Action_Goal__Sequence * input,
  om_aiv_msg__action__Action_Goal__Sequence * output);

/// Initialize action/Action message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * om_aiv_msg__action__Action_Result
 * )) before or use
 * om_aiv_msg__action__Action_Result__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_om_aiv_msg
bool
om_aiv_msg__action__Action_Result__init(om_aiv_msg__action__Action_Result * msg);

/// Finalize action/Action message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_om_aiv_msg
void
om_aiv_msg__action__Action_Result__fini(om_aiv_msg__action__Action_Result * msg);

/// Create action/Action message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * om_aiv_msg__action__Action_Result__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_om_aiv_msg
om_aiv_msg__action__Action_Result *
om_aiv_msg__action__Action_Result__create();

/// Destroy action/Action message.
/**
 * It calls
 * om_aiv_msg__action__Action_Result__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_om_aiv_msg
void
om_aiv_msg__action__Action_Result__destroy(om_aiv_msg__action__Action_Result * msg);

/// Check for action/Action message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_om_aiv_msg
bool
om_aiv_msg__action__Action_Result__are_equal(const om_aiv_msg__action__Action_Result * lhs, const om_aiv_msg__action__Action_Result * rhs);

/// Copy a action/Action message.
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
ROSIDL_GENERATOR_C_PUBLIC_om_aiv_msg
bool
om_aiv_msg__action__Action_Result__copy(
  const om_aiv_msg__action__Action_Result * input,
  om_aiv_msg__action__Action_Result * output);

/// Initialize array of action/Action messages.
/**
 * It allocates the memory for the number of elements and calls
 * om_aiv_msg__action__Action_Result__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_om_aiv_msg
bool
om_aiv_msg__action__Action_Result__Sequence__init(om_aiv_msg__action__Action_Result__Sequence * array, size_t size);

/// Finalize array of action/Action messages.
/**
 * It calls
 * om_aiv_msg__action__Action_Result__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_om_aiv_msg
void
om_aiv_msg__action__Action_Result__Sequence__fini(om_aiv_msg__action__Action_Result__Sequence * array);

/// Create array of action/Action messages.
/**
 * It allocates the memory for the array and calls
 * om_aiv_msg__action__Action_Result__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_om_aiv_msg
om_aiv_msg__action__Action_Result__Sequence *
om_aiv_msg__action__Action_Result__Sequence__create(size_t size);

/// Destroy array of action/Action messages.
/**
 * It calls
 * om_aiv_msg__action__Action_Result__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_om_aiv_msg
void
om_aiv_msg__action__Action_Result__Sequence__destroy(om_aiv_msg__action__Action_Result__Sequence * array);

/// Check for action/Action message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_om_aiv_msg
bool
om_aiv_msg__action__Action_Result__Sequence__are_equal(const om_aiv_msg__action__Action_Result__Sequence * lhs, const om_aiv_msg__action__Action_Result__Sequence * rhs);

/// Copy an array of action/Action messages.
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
ROSIDL_GENERATOR_C_PUBLIC_om_aiv_msg
bool
om_aiv_msg__action__Action_Result__Sequence__copy(
  const om_aiv_msg__action__Action_Result__Sequence * input,
  om_aiv_msg__action__Action_Result__Sequence * output);

/// Initialize action/Action message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * om_aiv_msg__action__Action_Feedback
 * )) before or use
 * om_aiv_msg__action__Action_Feedback__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_om_aiv_msg
bool
om_aiv_msg__action__Action_Feedback__init(om_aiv_msg__action__Action_Feedback * msg);

/// Finalize action/Action message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_om_aiv_msg
void
om_aiv_msg__action__Action_Feedback__fini(om_aiv_msg__action__Action_Feedback * msg);

/// Create action/Action message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * om_aiv_msg__action__Action_Feedback__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_om_aiv_msg
om_aiv_msg__action__Action_Feedback *
om_aiv_msg__action__Action_Feedback__create();

/// Destroy action/Action message.
/**
 * It calls
 * om_aiv_msg__action__Action_Feedback__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_om_aiv_msg
void
om_aiv_msg__action__Action_Feedback__destroy(om_aiv_msg__action__Action_Feedback * msg);

/// Check for action/Action message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_om_aiv_msg
bool
om_aiv_msg__action__Action_Feedback__are_equal(const om_aiv_msg__action__Action_Feedback * lhs, const om_aiv_msg__action__Action_Feedback * rhs);

/// Copy a action/Action message.
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
ROSIDL_GENERATOR_C_PUBLIC_om_aiv_msg
bool
om_aiv_msg__action__Action_Feedback__copy(
  const om_aiv_msg__action__Action_Feedback * input,
  om_aiv_msg__action__Action_Feedback * output);

/// Initialize array of action/Action messages.
/**
 * It allocates the memory for the number of elements and calls
 * om_aiv_msg__action__Action_Feedback__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_om_aiv_msg
bool
om_aiv_msg__action__Action_Feedback__Sequence__init(om_aiv_msg__action__Action_Feedback__Sequence * array, size_t size);

/// Finalize array of action/Action messages.
/**
 * It calls
 * om_aiv_msg__action__Action_Feedback__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_om_aiv_msg
void
om_aiv_msg__action__Action_Feedback__Sequence__fini(om_aiv_msg__action__Action_Feedback__Sequence * array);

/// Create array of action/Action messages.
/**
 * It allocates the memory for the array and calls
 * om_aiv_msg__action__Action_Feedback__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_om_aiv_msg
om_aiv_msg__action__Action_Feedback__Sequence *
om_aiv_msg__action__Action_Feedback__Sequence__create(size_t size);

/// Destroy array of action/Action messages.
/**
 * It calls
 * om_aiv_msg__action__Action_Feedback__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_om_aiv_msg
void
om_aiv_msg__action__Action_Feedback__Sequence__destroy(om_aiv_msg__action__Action_Feedback__Sequence * array);

/// Check for action/Action message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_om_aiv_msg
bool
om_aiv_msg__action__Action_Feedback__Sequence__are_equal(const om_aiv_msg__action__Action_Feedback__Sequence * lhs, const om_aiv_msg__action__Action_Feedback__Sequence * rhs);

/// Copy an array of action/Action messages.
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
ROSIDL_GENERATOR_C_PUBLIC_om_aiv_msg
bool
om_aiv_msg__action__Action_Feedback__Sequence__copy(
  const om_aiv_msg__action__Action_Feedback__Sequence * input,
  om_aiv_msg__action__Action_Feedback__Sequence * output);

/// Initialize action/Action message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * om_aiv_msg__action__Action_SendGoal_Request
 * )) before or use
 * om_aiv_msg__action__Action_SendGoal_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_om_aiv_msg
bool
om_aiv_msg__action__Action_SendGoal_Request__init(om_aiv_msg__action__Action_SendGoal_Request * msg);

/// Finalize action/Action message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_om_aiv_msg
void
om_aiv_msg__action__Action_SendGoal_Request__fini(om_aiv_msg__action__Action_SendGoal_Request * msg);

/// Create action/Action message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * om_aiv_msg__action__Action_SendGoal_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_om_aiv_msg
om_aiv_msg__action__Action_SendGoal_Request *
om_aiv_msg__action__Action_SendGoal_Request__create();

/// Destroy action/Action message.
/**
 * It calls
 * om_aiv_msg__action__Action_SendGoal_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_om_aiv_msg
void
om_aiv_msg__action__Action_SendGoal_Request__destroy(om_aiv_msg__action__Action_SendGoal_Request * msg);

/// Check for action/Action message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_om_aiv_msg
bool
om_aiv_msg__action__Action_SendGoal_Request__are_equal(const om_aiv_msg__action__Action_SendGoal_Request * lhs, const om_aiv_msg__action__Action_SendGoal_Request * rhs);

/// Copy a action/Action message.
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
ROSIDL_GENERATOR_C_PUBLIC_om_aiv_msg
bool
om_aiv_msg__action__Action_SendGoal_Request__copy(
  const om_aiv_msg__action__Action_SendGoal_Request * input,
  om_aiv_msg__action__Action_SendGoal_Request * output);

/// Initialize array of action/Action messages.
/**
 * It allocates the memory for the number of elements and calls
 * om_aiv_msg__action__Action_SendGoal_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_om_aiv_msg
bool
om_aiv_msg__action__Action_SendGoal_Request__Sequence__init(om_aiv_msg__action__Action_SendGoal_Request__Sequence * array, size_t size);

/// Finalize array of action/Action messages.
/**
 * It calls
 * om_aiv_msg__action__Action_SendGoal_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_om_aiv_msg
void
om_aiv_msg__action__Action_SendGoal_Request__Sequence__fini(om_aiv_msg__action__Action_SendGoal_Request__Sequence * array);

/// Create array of action/Action messages.
/**
 * It allocates the memory for the array and calls
 * om_aiv_msg__action__Action_SendGoal_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_om_aiv_msg
om_aiv_msg__action__Action_SendGoal_Request__Sequence *
om_aiv_msg__action__Action_SendGoal_Request__Sequence__create(size_t size);

/// Destroy array of action/Action messages.
/**
 * It calls
 * om_aiv_msg__action__Action_SendGoal_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_om_aiv_msg
void
om_aiv_msg__action__Action_SendGoal_Request__Sequence__destroy(om_aiv_msg__action__Action_SendGoal_Request__Sequence * array);

/// Check for action/Action message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_om_aiv_msg
bool
om_aiv_msg__action__Action_SendGoal_Request__Sequence__are_equal(const om_aiv_msg__action__Action_SendGoal_Request__Sequence * lhs, const om_aiv_msg__action__Action_SendGoal_Request__Sequence * rhs);

/// Copy an array of action/Action messages.
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
ROSIDL_GENERATOR_C_PUBLIC_om_aiv_msg
bool
om_aiv_msg__action__Action_SendGoal_Request__Sequence__copy(
  const om_aiv_msg__action__Action_SendGoal_Request__Sequence * input,
  om_aiv_msg__action__Action_SendGoal_Request__Sequence * output);

/// Initialize action/Action message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * om_aiv_msg__action__Action_SendGoal_Response
 * )) before or use
 * om_aiv_msg__action__Action_SendGoal_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_om_aiv_msg
bool
om_aiv_msg__action__Action_SendGoal_Response__init(om_aiv_msg__action__Action_SendGoal_Response * msg);

/// Finalize action/Action message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_om_aiv_msg
void
om_aiv_msg__action__Action_SendGoal_Response__fini(om_aiv_msg__action__Action_SendGoal_Response * msg);

/// Create action/Action message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * om_aiv_msg__action__Action_SendGoal_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_om_aiv_msg
om_aiv_msg__action__Action_SendGoal_Response *
om_aiv_msg__action__Action_SendGoal_Response__create();

/// Destroy action/Action message.
/**
 * It calls
 * om_aiv_msg__action__Action_SendGoal_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_om_aiv_msg
void
om_aiv_msg__action__Action_SendGoal_Response__destroy(om_aiv_msg__action__Action_SendGoal_Response * msg);

/// Check for action/Action message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_om_aiv_msg
bool
om_aiv_msg__action__Action_SendGoal_Response__are_equal(const om_aiv_msg__action__Action_SendGoal_Response * lhs, const om_aiv_msg__action__Action_SendGoal_Response * rhs);

/// Copy a action/Action message.
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
ROSIDL_GENERATOR_C_PUBLIC_om_aiv_msg
bool
om_aiv_msg__action__Action_SendGoal_Response__copy(
  const om_aiv_msg__action__Action_SendGoal_Response * input,
  om_aiv_msg__action__Action_SendGoal_Response * output);

/// Initialize array of action/Action messages.
/**
 * It allocates the memory for the number of elements and calls
 * om_aiv_msg__action__Action_SendGoal_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_om_aiv_msg
bool
om_aiv_msg__action__Action_SendGoal_Response__Sequence__init(om_aiv_msg__action__Action_SendGoal_Response__Sequence * array, size_t size);

/// Finalize array of action/Action messages.
/**
 * It calls
 * om_aiv_msg__action__Action_SendGoal_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_om_aiv_msg
void
om_aiv_msg__action__Action_SendGoal_Response__Sequence__fini(om_aiv_msg__action__Action_SendGoal_Response__Sequence * array);

/// Create array of action/Action messages.
/**
 * It allocates the memory for the array and calls
 * om_aiv_msg__action__Action_SendGoal_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_om_aiv_msg
om_aiv_msg__action__Action_SendGoal_Response__Sequence *
om_aiv_msg__action__Action_SendGoal_Response__Sequence__create(size_t size);

/// Destroy array of action/Action messages.
/**
 * It calls
 * om_aiv_msg__action__Action_SendGoal_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_om_aiv_msg
void
om_aiv_msg__action__Action_SendGoal_Response__Sequence__destroy(om_aiv_msg__action__Action_SendGoal_Response__Sequence * array);

/// Check for action/Action message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_om_aiv_msg
bool
om_aiv_msg__action__Action_SendGoal_Response__Sequence__are_equal(const om_aiv_msg__action__Action_SendGoal_Response__Sequence * lhs, const om_aiv_msg__action__Action_SendGoal_Response__Sequence * rhs);

/// Copy an array of action/Action messages.
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
ROSIDL_GENERATOR_C_PUBLIC_om_aiv_msg
bool
om_aiv_msg__action__Action_SendGoal_Response__Sequence__copy(
  const om_aiv_msg__action__Action_SendGoal_Response__Sequence * input,
  om_aiv_msg__action__Action_SendGoal_Response__Sequence * output);

/// Initialize action/Action message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * om_aiv_msg__action__Action_GetResult_Request
 * )) before or use
 * om_aiv_msg__action__Action_GetResult_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_om_aiv_msg
bool
om_aiv_msg__action__Action_GetResult_Request__init(om_aiv_msg__action__Action_GetResult_Request * msg);

/// Finalize action/Action message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_om_aiv_msg
void
om_aiv_msg__action__Action_GetResult_Request__fini(om_aiv_msg__action__Action_GetResult_Request * msg);

/// Create action/Action message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * om_aiv_msg__action__Action_GetResult_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_om_aiv_msg
om_aiv_msg__action__Action_GetResult_Request *
om_aiv_msg__action__Action_GetResult_Request__create();

/// Destroy action/Action message.
/**
 * It calls
 * om_aiv_msg__action__Action_GetResult_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_om_aiv_msg
void
om_aiv_msg__action__Action_GetResult_Request__destroy(om_aiv_msg__action__Action_GetResult_Request * msg);

/// Check for action/Action message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_om_aiv_msg
bool
om_aiv_msg__action__Action_GetResult_Request__are_equal(const om_aiv_msg__action__Action_GetResult_Request * lhs, const om_aiv_msg__action__Action_GetResult_Request * rhs);

/// Copy a action/Action message.
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
ROSIDL_GENERATOR_C_PUBLIC_om_aiv_msg
bool
om_aiv_msg__action__Action_GetResult_Request__copy(
  const om_aiv_msg__action__Action_GetResult_Request * input,
  om_aiv_msg__action__Action_GetResult_Request * output);

/// Initialize array of action/Action messages.
/**
 * It allocates the memory for the number of elements and calls
 * om_aiv_msg__action__Action_GetResult_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_om_aiv_msg
bool
om_aiv_msg__action__Action_GetResult_Request__Sequence__init(om_aiv_msg__action__Action_GetResult_Request__Sequence * array, size_t size);

/// Finalize array of action/Action messages.
/**
 * It calls
 * om_aiv_msg__action__Action_GetResult_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_om_aiv_msg
void
om_aiv_msg__action__Action_GetResult_Request__Sequence__fini(om_aiv_msg__action__Action_GetResult_Request__Sequence * array);

/// Create array of action/Action messages.
/**
 * It allocates the memory for the array and calls
 * om_aiv_msg__action__Action_GetResult_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_om_aiv_msg
om_aiv_msg__action__Action_GetResult_Request__Sequence *
om_aiv_msg__action__Action_GetResult_Request__Sequence__create(size_t size);

/// Destroy array of action/Action messages.
/**
 * It calls
 * om_aiv_msg__action__Action_GetResult_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_om_aiv_msg
void
om_aiv_msg__action__Action_GetResult_Request__Sequence__destroy(om_aiv_msg__action__Action_GetResult_Request__Sequence * array);

/// Check for action/Action message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_om_aiv_msg
bool
om_aiv_msg__action__Action_GetResult_Request__Sequence__are_equal(const om_aiv_msg__action__Action_GetResult_Request__Sequence * lhs, const om_aiv_msg__action__Action_GetResult_Request__Sequence * rhs);

/// Copy an array of action/Action messages.
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
ROSIDL_GENERATOR_C_PUBLIC_om_aiv_msg
bool
om_aiv_msg__action__Action_GetResult_Request__Sequence__copy(
  const om_aiv_msg__action__Action_GetResult_Request__Sequence * input,
  om_aiv_msg__action__Action_GetResult_Request__Sequence * output);

/// Initialize action/Action message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * om_aiv_msg__action__Action_GetResult_Response
 * )) before or use
 * om_aiv_msg__action__Action_GetResult_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_om_aiv_msg
bool
om_aiv_msg__action__Action_GetResult_Response__init(om_aiv_msg__action__Action_GetResult_Response * msg);

/// Finalize action/Action message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_om_aiv_msg
void
om_aiv_msg__action__Action_GetResult_Response__fini(om_aiv_msg__action__Action_GetResult_Response * msg);

/// Create action/Action message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * om_aiv_msg__action__Action_GetResult_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_om_aiv_msg
om_aiv_msg__action__Action_GetResult_Response *
om_aiv_msg__action__Action_GetResult_Response__create();

/// Destroy action/Action message.
/**
 * It calls
 * om_aiv_msg__action__Action_GetResult_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_om_aiv_msg
void
om_aiv_msg__action__Action_GetResult_Response__destroy(om_aiv_msg__action__Action_GetResult_Response * msg);

/// Check for action/Action message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_om_aiv_msg
bool
om_aiv_msg__action__Action_GetResult_Response__are_equal(const om_aiv_msg__action__Action_GetResult_Response * lhs, const om_aiv_msg__action__Action_GetResult_Response * rhs);

/// Copy a action/Action message.
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
ROSIDL_GENERATOR_C_PUBLIC_om_aiv_msg
bool
om_aiv_msg__action__Action_GetResult_Response__copy(
  const om_aiv_msg__action__Action_GetResult_Response * input,
  om_aiv_msg__action__Action_GetResult_Response * output);

/// Initialize array of action/Action messages.
/**
 * It allocates the memory for the number of elements and calls
 * om_aiv_msg__action__Action_GetResult_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_om_aiv_msg
bool
om_aiv_msg__action__Action_GetResult_Response__Sequence__init(om_aiv_msg__action__Action_GetResult_Response__Sequence * array, size_t size);

/// Finalize array of action/Action messages.
/**
 * It calls
 * om_aiv_msg__action__Action_GetResult_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_om_aiv_msg
void
om_aiv_msg__action__Action_GetResult_Response__Sequence__fini(om_aiv_msg__action__Action_GetResult_Response__Sequence * array);

/// Create array of action/Action messages.
/**
 * It allocates the memory for the array and calls
 * om_aiv_msg__action__Action_GetResult_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_om_aiv_msg
om_aiv_msg__action__Action_GetResult_Response__Sequence *
om_aiv_msg__action__Action_GetResult_Response__Sequence__create(size_t size);

/// Destroy array of action/Action messages.
/**
 * It calls
 * om_aiv_msg__action__Action_GetResult_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_om_aiv_msg
void
om_aiv_msg__action__Action_GetResult_Response__Sequence__destroy(om_aiv_msg__action__Action_GetResult_Response__Sequence * array);

/// Check for action/Action message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_om_aiv_msg
bool
om_aiv_msg__action__Action_GetResult_Response__Sequence__are_equal(const om_aiv_msg__action__Action_GetResult_Response__Sequence * lhs, const om_aiv_msg__action__Action_GetResult_Response__Sequence * rhs);

/// Copy an array of action/Action messages.
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
ROSIDL_GENERATOR_C_PUBLIC_om_aiv_msg
bool
om_aiv_msg__action__Action_GetResult_Response__Sequence__copy(
  const om_aiv_msg__action__Action_GetResult_Response__Sequence * input,
  om_aiv_msg__action__Action_GetResult_Response__Sequence * output);

/// Initialize action/Action message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * om_aiv_msg__action__Action_FeedbackMessage
 * )) before or use
 * om_aiv_msg__action__Action_FeedbackMessage__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_om_aiv_msg
bool
om_aiv_msg__action__Action_FeedbackMessage__init(om_aiv_msg__action__Action_FeedbackMessage * msg);

/// Finalize action/Action message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_om_aiv_msg
void
om_aiv_msg__action__Action_FeedbackMessage__fini(om_aiv_msg__action__Action_FeedbackMessage * msg);

/// Create action/Action message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * om_aiv_msg__action__Action_FeedbackMessage__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_om_aiv_msg
om_aiv_msg__action__Action_FeedbackMessage *
om_aiv_msg__action__Action_FeedbackMessage__create();

/// Destroy action/Action message.
/**
 * It calls
 * om_aiv_msg__action__Action_FeedbackMessage__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_om_aiv_msg
void
om_aiv_msg__action__Action_FeedbackMessage__destroy(om_aiv_msg__action__Action_FeedbackMessage * msg);

/// Check for action/Action message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_om_aiv_msg
bool
om_aiv_msg__action__Action_FeedbackMessage__are_equal(const om_aiv_msg__action__Action_FeedbackMessage * lhs, const om_aiv_msg__action__Action_FeedbackMessage * rhs);

/// Copy a action/Action message.
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
ROSIDL_GENERATOR_C_PUBLIC_om_aiv_msg
bool
om_aiv_msg__action__Action_FeedbackMessage__copy(
  const om_aiv_msg__action__Action_FeedbackMessage * input,
  om_aiv_msg__action__Action_FeedbackMessage * output);

/// Initialize array of action/Action messages.
/**
 * It allocates the memory for the number of elements and calls
 * om_aiv_msg__action__Action_FeedbackMessage__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_om_aiv_msg
bool
om_aiv_msg__action__Action_FeedbackMessage__Sequence__init(om_aiv_msg__action__Action_FeedbackMessage__Sequence * array, size_t size);

/// Finalize array of action/Action messages.
/**
 * It calls
 * om_aiv_msg__action__Action_FeedbackMessage__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_om_aiv_msg
void
om_aiv_msg__action__Action_FeedbackMessage__Sequence__fini(om_aiv_msg__action__Action_FeedbackMessage__Sequence * array);

/// Create array of action/Action messages.
/**
 * It allocates the memory for the array and calls
 * om_aiv_msg__action__Action_FeedbackMessage__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_om_aiv_msg
om_aiv_msg__action__Action_FeedbackMessage__Sequence *
om_aiv_msg__action__Action_FeedbackMessage__Sequence__create(size_t size);

/// Destroy array of action/Action messages.
/**
 * It calls
 * om_aiv_msg__action__Action_FeedbackMessage__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_om_aiv_msg
void
om_aiv_msg__action__Action_FeedbackMessage__Sequence__destroy(om_aiv_msg__action__Action_FeedbackMessage__Sequence * array);

/// Check for action/Action message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_om_aiv_msg
bool
om_aiv_msg__action__Action_FeedbackMessage__Sequence__are_equal(const om_aiv_msg__action__Action_FeedbackMessage__Sequence * lhs, const om_aiv_msg__action__Action_FeedbackMessage__Sequence * rhs);

/// Copy an array of action/Action messages.
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
ROSIDL_GENERATOR_C_PUBLIC_om_aiv_msg
bool
om_aiv_msg__action__Action_FeedbackMessage__Sequence__copy(
  const om_aiv_msg__action__Action_FeedbackMessage__Sequence * input,
  om_aiv_msg__action__Action_FeedbackMessage__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // OM_AIV_MSG__ACTION__DETAIL__ACTION__FUNCTIONS_H_
