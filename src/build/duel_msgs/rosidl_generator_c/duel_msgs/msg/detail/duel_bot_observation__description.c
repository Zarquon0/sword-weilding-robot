// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from duel_msgs:msg/DuelBotObservation.idl
// generated code does not contain a copyright notice

#include "duel_msgs/msg/detail/duel_bot_observation__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_duel_msgs
const rosidl_type_hash_t *
duel_msgs__msg__DuelBotObservation__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xa5, 0x5f, 0x86, 0xca, 0xde, 0x0f, 0xfb, 0x04,
      0xf9, 0x27, 0x95, 0x46, 0x66, 0x40, 0xec, 0x21,
      0x39, 0x67, 0x8e, 0xce, 0x24, 0x85, 0x98, 0x12,
      0xa5, 0x8f, 0xf9, 0xa9, 0x08, 0x1a, 0xfb, 0x87,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "geometry_msgs/msg/detail/vector3__functions.h"
#include "geometry_msgs/msg/detail/quaternion__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t geometry_msgs__msg__Quaternion__EXPECTED_HASH = {1, {
    0x8a, 0x76, 0x5f, 0x66, 0x77, 0x8c, 0x8f, 0xf7,
    0xc8, 0xab, 0x94, 0xaf, 0xcc, 0x59, 0x0a, 0x2e,
    0xd5, 0x32, 0x5a, 0x1d, 0x9a, 0x07, 0x6f, 0xff,
    0xf3, 0x8f, 0xbc, 0xe3, 0x6f, 0x45, 0x86, 0x84,
  }};
static const rosidl_type_hash_t geometry_msgs__msg__Vector3__EXPECTED_HASH = {1, {
    0xcc, 0x12, 0xfe, 0x83, 0xe4, 0xc0, 0x27, 0x19,
    0xf1, 0xce, 0x80, 0x70, 0xbf, 0xd1, 0x4a, 0xec,
    0xd4, 0x0f, 0x75, 0xa9, 0x66, 0x96, 0xa6, 0x7a,
    0x2a, 0x1f, 0x37, 0xf7, 0xdb, 0xb0, 0x76, 0x5d,
  }};
#endif

static char duel_msgs__msg__DuelBotObservation__TYPE_NAME[] = "duel_msgs/msg/DuelBotObservation";
static char geometry_msgs__msg__Quaternion__TYPE_NAME[] = "geometry_msgs/msg/Quaternion";
static char geometry_msgs__msg__Vector3__TYPE_NAME[] = "geometry_msgs/msg/Vector3";

// Define type names, field names, and default values
static char duel_msgs__msg__DuelBotObservation__FIELD_NAME__relative_target_position[] = "relative_target_position";
static char duel_msgs__msg__DuelBotObservation__FIELD_NAME__sword_rotation[] = "sword_rotation";
static char duel_msgs__msg__DuelBotObservation__FIELD_NAME__shoulder_rotation[] = "shoulder_rotation";
static char duel_msgs__msg__DuelBotObservation__FIELD_NAME__elbow_rotation[] = "elbow_rotation";
static char duel_msgs__msg__DuelBotObservation__FIELD_NAME__wrist_rotation[] = "wrist_rotation";
static char duel_msgs__msg__DuelBotObservation__FIELD_NAME__shoulder_vel[] = "shoulder_vel";
static char duel_msgs__msg__DuelBotObservation__FIELD_NAME__elbow_vel[] = "elbow_vel";
static char duel_msgs__msg__DuelBotObservation__FIELD_NAME__wrist_vel[] = "wrist_vel";

static rosidl_runtime_c__type_description__Field duel_msgs__msg__DuelBotObservation__FIELDS[] = {
  {
    {duel_msgs__msg__DuelBotObservation__FIELD_NAME__relative_target_position, 24, 24},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {geometry_msgs__msg__Vector3__TYPE_NAME, 25, 25},
    },
    {NULL, 0, 0},
  },
  {
    {duel_msgs__msg__DuelBotObservation__FIELD_NAME__sword_rotation, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {geometry_msgs__msg__Quaternion__TYPE_NAME, 28, 28},
    },
    {NULL, 0, 0},
  },
  {
    {duel_msgs__msg__DuelBotObservation__FIELD_NAME__shoulder_rotation, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {geometry_msgs__msg__Quaternion__TYPE_NAME, 28, 28},
    },
    {NULL, 0, 0},
  },
  {
    {duel_msgs__msg__DuelBotObservation__FIELD_NAME__elbow_rotation, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {duel_msgs__msg__DuelBotObservation__FIELD_NAME__wrist_rotation, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {geometry_msgs__msg__Quaternion__TYPE_NAME, 28, 28},
    },
    {NULL, 0, 0},
  },
  {
    {duel_msgs__msg__DuelBotObservation__FIELD_NAME__shoulder_vel, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {geometry_msgs__msg__Vector3__TYPE_NAME, 25, 25},
    },
    {NULL, 0, 0},
  },
  {
    {duel_msgs__msg__DuelBotObservation__FIELD_NAME__elbow_vel, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {duel_msgs__msg__DuelBotObservation__FIELD_NAME__wrist_vel, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {geometry_msgs__msg__Vector3__TYPE_NAME, 25, 25},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription duel_msgs__msg__DuelBotObservation__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {geometry_msgs__msg__Quaternion__TYPE_NAME, 28, 28},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Vector3__TYPE_NAME, 25, 25},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
duel_msgs__msg__DuelBotObservation__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {duel_msgs__msg__DuelBotObservation__TYPE_NAME, 32, 32},
      {duel_msgs__msg__DuelBotObservation__FIELDS, 8, 8},
    },
    {duel_msgs__msg__DuelBotObservation__REFERENCED_TYPE_DESCRIPTIONS, 2, 2},
  };
  if (!constructed) {
    assert(0 == memcmp(&geometry_msgs__msg__Quaternion__EXPECTED_HASH, geometry_msgs__msg__Quaternion__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = geometry_msgs__msg__Quaternion__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Vector3__EXPECTED_HASH, geometry_msgs__msg__Vector3__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = geometry_msgs__msg__Vector3__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Sword Information\n"
  "geometry_msgs/Vector3 relative_target_position\n"
  "geometry_msgs/Quaternion sword_rotation\n"
  "# Joint Rotations\n"
  "geometry_msgs/Quaternion shoulder_rotation\n"
  "float32 elbow_rotation\n"
  "geometry_msgs/Quaternion wrist_rotation\n"
  "# Joint Velocities\n"
  "geometry_msgs/Vector3 shoulder_vel\n"
  "float32 elbow_vel\n"
  "geometry_msgs/Vector3 wrist_vel";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
duel_msgs__msg__DuelBotObservation__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {duel_msgs__msg__DuelBotObservation__TYPE_NAME, 32, 32},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 334, 334},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
duel_msgs__msg__DuelBotObservation__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[3];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 3, 3};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *duel_msgs__msg__DuelBotObservation__get_individual_type_description_source(NULL),
    sources[1] = *geometry_msgs__msg__Quaternion__get_individual_type_description_source(NULL);
    sources[2] = *geometry_msgs__msg__Vector3__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
