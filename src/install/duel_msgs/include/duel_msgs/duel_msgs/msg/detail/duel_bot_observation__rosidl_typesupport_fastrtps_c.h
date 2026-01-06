// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from duel_msgs:msg/DuelBotObservation.idl
// generated code does not contain a copyright notice
#ifndef DUEL_MSGS__MSG__DETAIL__DUEL_BOT_OBSERVATION__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define DUEL_MSGS__MSG__DETAIL__DUEL_BOT_OBSERVATION__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "duel_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "duel_msgs/msg/detail/duel_bot_observation__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_duel_msgs
bool cdr_serialize_duel_msgs__msg__DuelBotObservation(
  const duel_msgs__msg__DuelBotObservation * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_duel_msgs
bool cdr_deserialize_duel_msgs__msg__DuelBotObservation(
  eprosima::fastcdr::Cdr &,
  duel_msgs__msg__DuelBotObservation * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_duel_msgs
size_t get_serialized_size_duel_msgs__msg__DuelBotObservation(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_duel_msgs
size_t max_serialized_size_duel_msgs__msg__DuelBotObservation(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_duel_msgs
bool cdr_serialize_key_duel_msgs__msg__DuelBotObservation(
  const duel_msgs__msg__DuelBotObservation * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_duel_msgs
size_t get_serialized_size_key_duel_msgs__msg__DuelBotObservation(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_duel_msgs
size_t max_serialized_size_key_duel_msgs__msg__DuelBotObservation(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_duel_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, duel_msgs, msg, DuelBotObservation)();

#ifdef __cplusplus
}
#endif

#endif  // DUEL_MSGS__MSG__DETAIL__DUEL_BOT_OBSERVATION__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
