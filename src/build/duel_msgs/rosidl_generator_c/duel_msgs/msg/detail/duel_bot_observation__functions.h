// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from duel_msgs:msg/DuelBotObservation.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "duel_msgs/msg/duel_bot_observation.h"


#ifndef DUEL_MSGS__MSG__DETAIL__DUEL_BOT_OBSERVATION__FUNCTIONS_H_
#define DUEL_MSGS__MSG__DETAIL__DUEL_BOT_OBSERVATION__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_runtime_c/type_description/type_description__struct.h"
#include "rosidl_runtime_c/type_description/type_source__struct.h"
#include "rosidl_runtime_c/type_hash.h"
#include "rosidl_runtime_c/visibility_control.h"
#include "duel_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "duel_msgs/msg/detail/duel_bot_observation__struct.h"

/// Initialize msg/DuelBotObservation message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * duel_msgs__msg__DuelBotObservation
 * )) before or use
 * duel_msgs__msg__DuelBotObservation__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_duel_msgs
bool
duel_msgs__msg__DuelBotObservation__init(duel_msgs__msg__DuelBotObservation * msg);

/// Finalize msg/DuelBotObservation message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_duel_msgs
void
duel_msgs__msg__DuelBotObservation__fini(duel_msgs__msg__DuelBotObservation * msg);

/// Create msg/DuelBotObservation message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * duel_msgs__msg__DuelBotObservation__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_duel_msgs
duel_msgs__msg__DuelBotObservation *
duel_msgs__msg__DuelBotObservation__create(void);

/// Destroy msg/DuelBotObservation message.
/**
 * It calls
 * duel_msgs__msg__DuelBotObservation__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_duel_msgs
void
duel_msgs__msg__DuelBotObservation__destroy(duel_msgs__msg__DuelBotObservation * msg);

/// Check for msg/DuelBotObservation message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_duel_msgs
bool
duel_msgs__msg__DuelBotObservation__are_equal(const duel_msgs__msg__DuelBotObservation * lhs, const duel_msgs__msg__DuelBotObservation * rhs);

/// Copy a msg/DuelBotObservation message.
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
ROSIDL_GENERATOR_C_PUBLIC_duel_msgs
bool
duel_msgs__msg__DuelBotObservation__copy(
  const duel_msgs__msg__DuelBotObservation * input,
  duel_msgs__msg__DuelBotObservation * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_duel_msgs
const rosidl_type_hash_t *
duel_msgs__msg__DuelBotObservation__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_duel_msgs
const rosidl_runtime_c__type_description__TypeDescription *
duel_msgs__msg__DuelBotObservation__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_duel_msgs
const rosidl_runtime_c__type_description__TypeSource *
duel_msgs__msg__DuelBotObservation__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_duel_msgs
const rosidl_runtime_c__type_description__TypeSource__Sequence *
duel_msgs__msg__DuelBotObservation__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of msg/DuelBotObservation messages.
/**
 * It allocates the memory for the number of elements and calls
 * duel_msgs__msg__DuelBotObservation__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_duel_msgs
bool
duel_msgs__msg__DuelBotObservation__Sequence__init(duel_msgs__msg__DuelBotObservation__Sequence * array, size_t size);

/// Finalize array of msg/DuelBotObservation messages.
/**
 * It calls
 * duel_msgs__msg__DuelBotObservation__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_duel_msgs
void
duel_msgs__msg__DuelBotObservation__Sequence__fini(duel_msgs__msg__DuelBotObservation__Sequence * array);

/// Create array of msg/DuelBotObservation messages.
/**
 * It allocates the memory for the array and calls
 * duel_msgs__msg__DuelBotObservation__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_duel_msgs
duel_msgs__msg__DuelBotObservation__Sequence *
duel_msgs__msg__DuelBotObservation__Sequence__create(size_t size);

/// Destroy array of msg/DuelBotObservation messages.
/**
 * It calls
 * duel_msgs__msg__DuelBotObservation__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_duel_msgs
void
duel_msgs__msg__DuelBotObservation__Sequence__destroy(duel_msgs__msg__DuelBotObservation__Sequence * array);

/// Check for msg/DuelBotObservation message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_duel_msgs
bool
duel_msgs__msg__DuelBotObservation__Sequence__are_equal(const duel_msgs__msg__DuelBotObservation__Sequence * lhs, const duel_msgs__msg__DuelBotObservation__Sequence * rhs);

/// Copy an array of msg/DuelBotObservation messages.
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
ROSIDL_GENERATOR_C_PUBLIC_duel_msgs
bool
duel_msgs__msg__DuelBotObservation__Sequence__copy(
  const duel_msgs__msg__DuelBotObservation__Sequence * input,
  duel_msgs__msg__DuelBotObservation__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // DUEL_MSGS__MSG__DETAIL__DUEL_BOT_OBSERVATION__FUNCTIONS_H_
