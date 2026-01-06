// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from duel_msgs:msg/DuelBotObservation.idl
// generated code does not contain a copyright notice
#include "duel_msgs/msg/detail/duel_bot_observation__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `relative_target_position`
// Member `shoulder_vel`
// Member `wrist_vel`
#include "geometry_msgs/msg/detail/vector3__functions.h"
// Member `sword_rotation`
// Member `shoulder_rotation`
// Member `wrist_rotation`
#include "geometry_msgs/msg/detail/quaternion__functions.h"

bool
duel_msgs__msg__DuelBotObservation__init(duel_msgs__msg__DuelBotObservation * msg)
{
  if (!msg) {
    return false;
  }
  // relative_target_position
  if (!geometry_msgs__msg__Vector3__init(&msg->relative_target_position)) {
    duel_msgs__msg__DuelBotObservation__fini(msg);
    return false;
  }
  // sword_rotation
  if (!geometry_msgs__msg__Quaternion__init(&msg->sword_rotation)) {
    duel_msgs__msg__DuelBotObservation__fini(msg);
    return false;
  }
  // shoulder_rotation
  if (!geometry_msgs__msg__Quaternion__init(&msg->shoulder_rotation)) {
    duel_msgs__msg__DuelBotObservation__fini(msg);
    return false;
  }
  // elbow_rotation
  // wrist_rotation
  if (!geometry_msgs__msg__Quaternion__init(&msg->wrist_rotation)) {
    duel_msgs__msg__DuelBotObservation__fini(msg);
    return false;
  }
  // shoulder_vel
  if (!geometry_msgs__msg__Vector3__init(&msg->shoulder_vel)) {
    duel_msgs__msg__DuelBotObservation__fini(msg);
    return false;
  }
  // elbow_vel
  // wrist_vel
  if (!geometry_msgs__msg__Vector3__init(&msg->wrist_vel)) {
    duel_msgs__msg__DuelBotObservation__fini(msg);
    return false;
  }
  return true;
}

void
duel_msgs__msg__DuelBotObservation__fini(duel_msgs__msg__DuelBotObservation * msg)
{
  if (!msg) {
    return;
  }
  // relative_target_position
  geometry_msgs__msg__Vector3__fini(&msg->relative_target_position);
  // sword_rotation
  geometry_msgs__msg__Quaternion__fini(&msg->sword_rotation);
  // shoulder_rotation
  geometry_msgs__msg__Quaternion__fini(&msg->shoulder_rotation);
  // elbow_rotation
  // wrist_rotation
  geometry_msgs__msg__Quaternion__fini(&msg->wrist_rotation);
  // shoulder_vel
  geometry_msgs__msg__Vector3__fini(&msg->shoulder_vel);
  // elbow_vel
  // wrist_vel
  geometry_msgs__msg__Vector3__fini(&msg->wrist_vel);
}

bool
duel_msgs__msg__DuelBotObservation__are_equal(const duel_msgs__msg__DuelBotObservation * lhs, const duel_msgs__msg__DuelBotObservation * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // relative_target_position
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->relative_target_position), &(rhs->relative_target_position)))
  {
    return false;
  }
  // sword_rotation
  if (!geometry_msgs__msg__Quaternion__are_equal(
      &(lhs->sword_rotation), &(rhs->sword_rotation)))
  {
    return false;
  }
  // shoulder_rotation
  if (!geometry_msgs__msg__Quaternion__are_equal(
      &(lhs->shoulder_rotation), &(rhs->shoulder_rotation)))
  {
    return false;
  }
  // elbow_rotation
  if (lhs->elbow_rotation != rhs->elbow_rotation) {
    return false;
  }
  // wrist_rotation
  if (!geometry_msgs__msg__Quaternion__are_equal(
      &(lhs->wrist_rotation), &(rhs->wrist_rotation)))
  {
    return false;
  }
  // shoulder_vel
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->shoulder_vel), &(rhs->shoulder_vel)))
  {
    return false;
  }
  // elbow_vel
  if (lhs->elbow_vel != rhs->elbow_vel) {
    return false;
  }
  // wrist_vel
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->wrist_vel), &(rhs->wrist_vel)))
  {
    return false;
  }
  return true;
}

bool
duel_msgs__msg__DuelBotObservation__copy(
  const duel_msgs__msg__DuelBotObservation * input,
  duel_msgs__msg__DuelBotObservation * output)
{
  if (!input || !output) {
    return false;
  }
  // relative_target_position
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->relative_target_position), &(output->relative_target_position)))
  {
    return false;
  }
  // sword_rotation
  if (!geometry_msgs__msg__Quaternion__copy(
      &(input->sword_rotation), &(output->sword_rotation)))
  {
    return false;
  }
  // shoulder_rotation
  if (!geometry_msgs__msg__Quaternion__copy(
      &(input->shoulder_rotation), &(output->shoulder_rotation)))
  {
    return false;
  }
  // elbow_rotation
  output->elbow_rotation = input->elbow_rotation;
  // wrist_rotation
  if (!geometry_msgs__msg__Quaternion__copy(
      &(input->wrist_rotation), &(output->wrist_rotation)))
  {
    return false;
  }
  // shoulder_vel
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->shoulder_vel), &(output->shoulder_vel)))
  {
    return false;
  }
  // elbow_vel
  output->elbow_vel = input->elbow_vel;
  // wrist_vel
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->wrist_vel), &(output->wrist_vel)))
  {
    return false;
  }
  return true;
}

duel_msgs__msg__DuelBotObservation *
duel_msgs__msg__DuelBotObservation__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  duel_msgs__msg__DuelBotObservation * msg = (duel_msgs__msg__DuelBotObservation *)allocator.allocate(sizeof(duel_msgs__msg__DuelBotObservation), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(duel_msgs__msg__DuelBotObservation));
  bool success = duel_msgs__msg__DuelBotObservation__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
duel_msgs__msg__DuelBotObservation__destroy(duel_msgs__msg__DuelBotObservation * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    duel_msgs__msg__DuelBotObservation__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
duel_msgs__msg__DuelBotObservation__Sequence__init(duel_msgs__msg__DuelBotObservation__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  duel_msgs__msg__DuelBotObservation * data = NULL;

  if (size) {
    data = (duel_msgs__msg__DuelBotObservation *)allocator.zero_allocate(size, sizeof(duel_msgs__msg__DuelBotObservation), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = duel_msgs__msg__DuelBotObservation__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        duel_msgs__msg__DuelBotObservation__fini(&data[i - 1]);
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
duel_msgs__msg__DuelBotObservation__Sequence__fini(duel_msgs__msg__DuelBotObservation__Sequence * array)
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
      duel_msgs__msg__DuelBotObservation__fini(&array->data[i]);
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

duel_msgs__msg__DuelBotObservation__Sequence *
duel_msgs__msg__DuelBotObservation__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  duel_msgs__msg__DuelBotObservation__Sequence * array = (duel_msgs__msg__DuelBotObservation__Sequence *)allocator.allocate(sizeof(duel_msgs__msg__DuelBotObservation__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = duel_msgs__msg__DuelBotObservation__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
duel_msgs__msg__DuelBotObservation__Sequence__destroy(duel_msgs__msg__DuelBotObservation__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    duel_msgs__msg__DuelBotObservation__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
duel_msgs__msg__DuelBotObservation__Sequence__are_equal(const duel_msgs__msg__DuelBotObservation__Sequence * lhs, const duel_msgs__msg__DuelBotObservation__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!duel_msgs__msg__DuelBotObservation__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
duel_msgs__msg__DuelBotObservation__Sequence__copy(
  const duel_msgs__msg__DuelBotObservation__Sequence * input,
  duel_msgs__msg__DuelBotObservation__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(duel_msgs__msg__DuelBotObservation);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    duel_msgs__msg__DuelBotObservation * data =
      (duel_msgs__msg__DuelBotObservation *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!duel_msgs__msg__DuelBotObservation__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          duel_msgs__msg__DuelBotObservation__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!duel_msgs__msg__DuelBotObservation__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
