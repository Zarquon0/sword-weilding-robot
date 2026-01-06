// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from duel_msgs:msg/DuelBotObservation.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "duel_msgs/msg/duel_bot_observation.h"


#ifndef DUEL_MSGS__MSG__DETAIL__DUEL_BOT_OBSERVATION__STRUCT_H_
#define DUEL_MSGS__MSG__DETAIL__DUEL_BOT_OBSERVATION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'relative_target_position'
// Member 'shoulder_vel'
// Member 'wrist_vel'
#include "geometry_msgs/msg/detail/vector3__struct.h"
// Member 'sword_rotation'
// Member 'shoulder_rotation'
// Member 'wrist_rotation'
#include "geometry_msgs/msg/detail/quaternion__struct.h"

/// Struct defined in msg/DuelBotObservation in the package duel_msgs.
/**
  * Sword Information
 */
typedef struct duel_msgs__msg__DuelBotObservation
{
  geometry_msgs__msg__Vector3 relative_target_position;
  geometry_msgs__msg__Quaternion sword_rotation;
  /// Joint Rotations
  geometry_msgs__msg__Quaternion shoulder_rotation;
  float elbow_rotation;
  geometry_msgs__msg__Quaternion wrist_rotation;
  /// Joint Velocities
  geometry_msgs__msg__Vector3 shoulder_vel;
  float elbow_vel;
  geometry_msgs__msg__Vector3 wrist_vel;
} duel_msgs__msg__DuelBotObservation;

// Struct for a sequence of duel_msgs__msg__DuelBotObservation.
typedef struct duel_msgs__msg__DuelBotObservation__Sequence
{
  duel_msgs__msg__DuelBotObservation * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} duel_msgs__msg__DuelBotObservation__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DUEL_MSGS__MSG__DETAIL__DUEL_BOT_OBSERVATION__STRUCT_H_
