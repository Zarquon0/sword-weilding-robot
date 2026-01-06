// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from duel_msgs:msg/DuelBotObservation.idl
// generated code does not contain a copyright notice
#include "duel_msgs/msg/detail/duel_bot_observation__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "duel_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "duel_msgs/msg/detail/duel_bot_observation__struct.h"
#include "duel_msgs/msg/detail/duel_bot_observation__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "geometry_msgs/msg/detail/quaternion__functions.h"  // shoulder_rotation, sword_rotation, wrist_rotation
#include "geometry_msgs/msg/detail/vector3__functions.h"  // relative_target_position, shoulder_vel, wrist_vel

// forward declare type support functions

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_duel_msgs
bool cdr_serialize_geometry_msgs__msg__Quaternion(
  const geometry_msgs__msg__Quaternion * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_duel_msgs
bool cdr_deserialize_geometry_msgs__msg__Quaternion(
  eprosima::fastcdr::Cdr & cdr,
  geometry_msgs__msg__Quaternion * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_duel_msgs
size_t get_serialized_size_geometry_msgs__msg__Quaternion(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_duel_msgs
size_t max_serialized_size_geometry_msgs__msg__Quaternion(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_duel_msgs
bool cdr_serialize_key_geometry_msgs__msg__Quaternion(
  const geometry_msgs__msg__Quaternion * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_duel_msgs
size_t get_serialized_size_key_geometry_msgs__msg__Quaternion(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_duel_msgs
size_t max_serialized_size_key_geometry_msgs__msg__Quaternion(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_duel_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Quaternion)();

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_duel_msgs
bool cdr_serialize_geometry_msgs__msg__Vector3(
  const geometry_msgs__msg__Vector3 * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_duel_msgs
bool cdr_deserialize_geometry_msgs__msg__Vector3(
  eprosima::fastcdr::Cdr & cdr,
  geometry_msgs__msg__Vector3 * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_duel_msgs
size_t get_serialized_size_geometry_msgs__msg__Vector3(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_duel_msgs
size_t max_serialized_size_geometry_msgs__msg__Vector3(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_duel_msgs
bool cdr_serialize_key_geometry_msgs__msg__Vector3(
  const geometry_msgs__msg__Vector3 * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_duel_msgs
size_t get_serialized_size_key_geometry_msgs__msg__Vector3(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_duel_msgs
size_t max_serialized_size_key_geometry_msgs__msg__Vector3(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_duel_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Vector3)();


using _DuelBotObservation__ros_msg_type = duel_msgs__msg__DuelBotObservation;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_duel_msgs
bool cdr_serialize_duel_msgs__msg__DuelBotObservation(
  const duel_msgs__msg__DuelBotObservation * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: relative_target_position
  {
    cdr_serialize_geometry_msgs__msg__Vector3(
      &ros_message->relative_target_position, cdr);
  }

  // Field name: sword_rotation
  {
    cdr_serialize_geometry_msgs__msg__Quaternion(
      &ros_message->sword_rotation, cdr);
  }

  // Field name: shoulder_rotation
  {
    cdr_serialize_geometry_msgs__msg__Quaternion(
      &ros_message->shoulder_rotation, cdr);
  }

  // Field name: elbow_rotation
  {
    cdr << ros_message->elbow_rotation;
  }

  // Field name: wrist_rotation
  {
    cdr_serialize_geometry_msgs__msg__Quaternion(
      &ros_message->wrist_rotation, cdr);
  }

  // Field name: shoulder_vel
  {
    cdr_serialize_geometry_msgs__msg__Vector3(
      &ros_message->shoulder_vel, cdr);
  }

  // Field name: elbow_vel
  {
    cdr << ros_message->elbow_vel;
  }

  // Field name: wrist_vel
  {
    cdr_serialize_geometry_msgs__msg__Vector3(
      &ros_message->wrist_vel, cdr);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_duel_msgs
bool cdr_deserialize_duel_msgs__msg__DuelBotObservation(
  eprosima::fastcdr::Cdr & cdr,
  duel_msgs__msg__DuelBotObservation * ros_message)
{
  // Field name: relative_target_position
  {
    cdr_deserialize_geometry_msgs__msg__Vector3(cdr, &ros_message->relative_target_position);
  }

  // Field name: sword_rotation
  {
    cdr_deserialize_geometry_msgs__msg__Quaternion(cdr, &ros_message->sword_rotation);
  }

  // Field name: shoulder_rotation
  {
    cdr_deserialize_geometry_msgs__msg__Quaternion(cdr, &ros_message->shoulder_rotation);
  }

  // Field name: elbow_rotation
  {
    cdr >> ros_message->elbow_rotation;
  }

  // Field name: wrist_rotation
  {
    cdr_deserialize_geometry_msgs__msg__Quaternion(cdr, &ros_message->wrist_rotation);
  }

  // Field name: shoulder_vel
  {
    cdr_deserialize_geometry_msgs__msg__Vector3(cdr, &ros_message->shoulder_vel);
  }

  // Field name: elbow_vel
  {
    cdr >> ros_message->elbow_vel;
  }

  // Field name: wrist_vel
  {
    cdr_deserialize_geometry_msgs__msg__Vector3(cdr, &ros_message->wrist_vel);
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_duel_msgs
size_t get_serialized_size_duel_msgs__msg__DuelBotObservation(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _DuelBotObservation__ros_msg_type * ros_message = static_cast<const _DuelBotObservation__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: relative_target_position
  current_alignment += get_serialized_size_geometry_msgs__msg__Vector3(
    &(ros_message->relative_target_position), current_alignment);

  // Field name: sword_rotation
  current_alignment += get_serialized_size_geometry_msgs__msg__Quaternion(
    &(ros_message->sword_rotation), current_alignment);

  // Field name: shoulder_rotation
  current_alignment += get_serialized_size_geometry_msgs__msg__Quaternion(
    &(ros_message->shoulder_rotation), current_alignment);

  // Field name: elbow_rotation
  {
    size_t item_size = sizeof(ros_message->elbow_rotation);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: wrist_rotation
  current_alignment += get_serialized_size_geometry_msgs__msg__Quaternion(
    &(ros_message->wrist_rotation), current_alignment);

  // Field name: shoulder_vel
  current_alignment += get_serialized_size_geometry_msgs__msg__Vector3(
    &(ros_message->shoulder_vel), current_alignment);

  // Field name: elbow_vel
  {
    size_t item_size = sizeof(ros_message->elbow_vel);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: wrist_vel
  current_alignment += get_serialized_size_geometry_msgs__msg__Vector3(
    &(ros_message->wrist_vel), current_alignment);

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_duel_msgs
size_t max_serialized_size_duel_msgs__msg__DuelBotObservation(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Field name: relative_target_position
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_geometry_msgs__msg__Vector3(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: sword_rotation
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_geometry_msgs__msg__Quaternion(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: shoulder_rotation
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_geometry_msgs__msg__Quaternion(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: elbow_rotation
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: wrist_rotation
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_geometry_msgs__msg__Quaternion(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: shoulder_vel
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_geometry_msgs__msg__Vector3(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: elbow_vel
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: wrist_vel
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_geometry_msgs__msg__Vector3(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = duel_msgs__msg__DuelBotObservation;
    is_plain =
      (
      offsetof(DataType, wrist_vel) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_duel_msgs
bool cdr_serialize_key_duel_msgs__msg__DuelBotObservation(
  const duel_msgs__msg__DuelBotObservation * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: relative_target_position
  {
    cdr_serialize_key_geometry_msgs__msg__Vector3(
      &ros_message->relative_target_position, cdr);
  }

  // Field name: sword_rotation
  {
    cdr_serialize_key_geometry_msgs__msg__Quaternion(
      &ros_message->sword_rotation, cdr);
  }

  // Field name: shoulder_rotation
  {
    cdr_serialize_key_geometry_msgs__msg__Quaternion(
      &ros_message->shoulder_rotation, cdr);
  }

  // Field name: elbow_rotation
  {
    cdr << ros_message->elbow_rotation;
  }

  // Field name: wrist_rotation
  {
    cdr_serialize_key_geometry_msgs__msg__Quaternion(
      &ros_message->wrist_rotation, cdr);
  }

  // Field name: shoulder_vel
  {
    cdr_serialize_key_geometry_msgs__msg__Vector3(
      &ros_message->shoulder_vel, cdr);
  }

  // Field name: elbow_vel
  {
    cdr << ros_message->elbow_vel;
  }

  // Field name: wrist_vel
  {
    cdr_serialize_key_geometry_msgs__msg__Vector3(
      &ros_message->wrist_vel, cdr);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_duel_msgs
size_t get_serialized_size_key_duel_msgs__msg__DuelBotObservation(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _DuelBotObservation__ros_msg_type * ros_message = static_cast<const _DuelBotObservation__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: relative_target_position
  current_alignment += get_serialized_size_key_geometry_msgs__msg__Vector3(
    &(ros_message->relative_target_position), current_alignment);

  // Field name: sword_rotation
  current_alignment += get_serialized_size_key_geometry_msgs__msg__Quaternion(
    &(ros_message->sword_rotation), current_alignment);

  // Field name: shoulder_rotation
  current_alignment += get_serialized_size_key_geometry_msgs__msg__Quaternion(
    &(ros_message->shoulder_rotation), current_alignment);

  // Field name: elbow_rotation
  {
    size_t item_size = sizeof(ros_message->elbow_rotation);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: wrist_rotation
  current_alignment += get_serialized_size_key_geometry_msgs__msg__Quaternion(
    &(ros_message->wrist_rotation), current_alignment);

  // Field name: shoulder_vel
  current_alignment += get_serialized_size_key_geometry_msgs__msg__Vector3(
    &(ros_message->shoulder_vel), current_alignment);

  // Field name: elbow_vel
  {
    size_t item_size = sizeof(ros_message->elbow_vel);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: wrist_vel
  current_alignment += get_serialized_size_key_geometry_msgs__msg__Vector3(
    &(ros_message->wrist_vel), current_alignment);

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_duel_msgs
size_t max_serialized_size_key_duel_msgs__msg__DuelBotObservation(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;
  // Field name: relative_target_position
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_geometry_msgs__msg__Vector3(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: sword_rotation
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_geometry_msgs__msg__Quaternion(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: shoulder_rotation
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_geometry_msgs__msg__Quaternion(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: elbow_rotation
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: wrist_rotation
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_geometry_msgs__msg__Quaternion(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: shoulder_vel
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_geometry_msgs__msg__Vector3(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: elbow_vel
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: wrist_vel
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_geometry_msgs__msg__Vector3(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = duel_msgs__msg__DuelBotObservation;
    is_plain =
      (
      offsetof(DataType, wrist_vel) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _DuelBotObservation__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const duel_msgs__msg__DuelBotObservation * ros_message = static_cast<const duel_msgs__msg__DuelBotObservation *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_duel_msgs__msg__DuelBotObservation(ros_message, cdr);
}

static bool _DuelBotObservation__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  duel_msgs__msg__DuelBotObservation * ros_message = static_cast<duel_msgs__msg__DuelBotObservation *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_duel_msgs__msg__DuelBotObservation(cdr, ros_message);
}

static uint32_t _DuelBotObservation__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_duel_msgs__msg__DuelBotObservation(
      untyped_ros_message, 0));
}

static size_t _DuelBotObservation__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_duel_msgs__msg__DuelBotObservation(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_DuelBotObservation = {
  "duel_msgs::msg",
  "DuelBotObservation",
  _DuelBotObservation__cdr_serialize,
  _DuelBotObservation__cdr_deserialize,
  _DuelBotObservation__get_serialized_size,
  _DuelBotObservation__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _DuelBotObservation__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_DuelBotObservation,
  get_message_typesupport_handle_function,
  &duel_msgs__msg__DuelBotObservation__get_type_hash,
  &duel_msgs__msg__DuelBotObservation__get_type_description,
  &duel_msgs__msg__DuelBotObservation__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, duel_msgs, msg, DuelBotObservation)() {
  return &_DuelBotObservation__type_support;
}

#if defined(__cplusplus)
}
#endif
