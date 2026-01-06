// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from duel_msgs:msg/DuelBotObservation.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "duel_msgs/msg/detail/duel_bot_observation__rosidl_typesupport_introspection_c.h"
#include "duel_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "duel_msgs/msg/detail/duel_bot_observation__functions.h"
#include "duel_msgs/msg/detail/duel_bot_observation__struct.h"


// Include directives for member types
// Member `relative_target_position`
// Member `shoulder_vel`
// Member `wrist_vel`
#include "geometry_msgs/msg/vector3.h"
// Member `relative_target_position`
// Member `shoulder_vel`
// Member `wrist_vel`
#include "geometry_msgs/msg/detail/vector3__rosidl_typesupport_introspection_c.h"
// Member `sword_rotation`
// Member `shoulder_rotation`
// Member `wrist_rotation`
#include "geometry_msgs/msg/quaternion.h"
// Member `sword_rotation`
// Member `shoulder_rotation`
// Member `wrist_rotation`
#include "geometry_msgs/msg/detail/quaternion__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void duel_msgs__msg__DuelBotObservation__rosidl_typesupport_introspection_c__DuelBotObservation_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  duel_msgs__msg__DuelBotObservation__init(message_memory);
}

void duel_msgs__msg__DuelBotObservation__rosidl_typesupport_introspection_c__DuelBotObservation_fini_function(void * message_memory)
{
  duel_msgs__msg__DuelBotObservation__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember duel_msgs__msg__DuelBotObservation__rosidl_typesupport_introspection_c__DuelBotObservation_message_member_array[8] = {
  {
    "relative_target_position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(duel_msgs__msg__DuelBotObservation, relative_target_position),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "sword_rotation",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(duel_msgs__msg__DuelBotObservation, sword_rotation),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "shoulder_rotation",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(duel_msgs__msg__DuelBotObservation, shoulder_rotation),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "elbow_rotation",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(duel_msgs__msg__DuelBotObservation, elbow_rotation),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "wrist_rotation",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(duel_msgs__msg__DuelBotObservation, wrist_rotation),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "shoulder_vel",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(duel_msgs__msg__DuelBotObservation, shoulder_vel),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "elbow_vel",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(duel_msgs__msg__DuelBotObservation, elbow_vel),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "wrist_vel",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(duel_msgs__msg__DuelBotObservation, wrist_vel),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers duel_msgs__msg__DuelBotObservation__rosidl_typesupport_introspection_c__DuelBotObservation_message_members = {
  "duel_msgs__msg",  // message namespace
  "DuelBotObservation",  // message name
  8,  // number of fields
  sizeof(duel_msgs__msg__DuelBotObservation),
  false,  // has_any_key_member_
  duel_msgs__msg__DuelBotObservation__rosidl_typesupport_introspection_c__DuelBotObservation_message_member_array,  // message members
  duel_msgs__msg__DuelBotObservation__rosidl_typesupport_introspection_c__DuelBotObservation_init_function,  // function to initialize message memory (memory has to be allocated)
  duel_msgs__msg__DuelBotObservation__rosidl_typesupport_introspection_c__DuelBotObservation_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t duel_msgs__msg__DuelBotObservation__rosidl_typesupport_introspection_c__DuelBotObservation_message_type_support_handle = {
  0,
  &duel_msgs__msg__DuelBotObservation__rosidl_typesupport_introspection_c__DuelBotObservation_message_members,
  get_message_typesupport_handle_function,
  &duel_msgs__msg__DuelBotObservation__get_type_hash,
  &duel_msgs__msg__DuelBotObservation__get_type_description,
  &duel_msgs__msg__DuelBotObservation__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_duel_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, duel_msgs, msg, DuelBotObservation)() {
  duel_msgs__msg__DuelBotObservation__rosidl_typesupport_introspection_c__DuelBotObservation_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Vector3)();
  duel_msgs__msg__DuelBotObservation__rosidl_typesupport_introspection_c__DuelBotObservation_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Quaternion)();
  duel_msgs__msg__DuelBotObservation__rosidl_typesupport_introspection_c__DuelBotObservation_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Quaternion)();
  duel_msgs__msg__DuelBotObservation__rosidl_typesupport_introspection_c__DuelBotObservation_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Quaternion)();
  duel_msgs__msg__DuelBotObservation__rosidl_typesupport_introspection_c__DuelBotObservation_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Vector3)();
  duel_msgs__msg__DuelBotObservation__rosidl_typesupport_introspection_c__DuelBotObservation_message_member_array[7].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Vector3)();
  if (!duel_msgs__msg__DuelBotObservation__rosidl_typesupport_introspection_c__DuelBotObservation_message_type_support_handle.typesupport_identifier) {
    duel_msgs__msg__DuelBotObservation__rosidl_typesupport_introspection_c__DuelBotObservation_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &duel_msgs__msg__DuelBotObservation__rosidl_typesupport_introspection_c__DuelBotObservation_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
