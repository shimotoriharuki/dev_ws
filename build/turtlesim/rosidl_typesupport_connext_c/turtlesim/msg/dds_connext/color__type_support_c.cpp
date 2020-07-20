// generated from rosidl_typesupport_connext_c/resource/idl__dds_connext__type_support_c.cpp.em
// with input from turtlesim:msg/Color.idl
// generated code does not contain a copyright notice

#include <cassert>
#include <limits>

#include "turtlesim/msg/color__rosidl_typesupport_connext_c.h"
#include "rcutils/types/uint8_array.h"
#include "rosidl_typesupport_connext_c/identifier.h"
#include "rosidl_typesupport_connext_c/wstring_conversion.hpp"
#include "rosidl_typesupport_connext_cpp/message_type_support.h"
#include "turtlesim/msg/rosidl_typesupport_connext_c__visibility_control.h"
#include "turtlesim/msg/detail/color__struct.h"
#include "turtlesim/msg/detail/color__functions.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif

#include "turtlesim/msg/dds_connext/Color_Support.h"
#include "turtlesim/msg/dds_connext/Color_Plugin.h"

#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions
#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions

static DDS_TypeCode *
_Color__get_type_code()
{
  return turtlesim::msg::dds_::Color_TypeSupport::get_typecode();
}

static bool
_Color__convert_ros_to_dds(const void * untyped_ros_message, void * untyped_dds_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  if (!untyped_dds_message) {
    fprintf(stderr, "dds message handle is null\n");
    return false;
  }
  const turtlesim__msg__Color * ros_message =
    static_cast<const turtlesim__msg__Color *>(untyped_ros_message);
  turtlesim::msg::dds_::Color_ * dds_message =
    static_cast<turtlesim::msg::dds_::Color_ *>(untyped_dds_message);
  // Member name: r
  {
    dds_message->r_ = ros_message->r;
  }
  // Member name: g
  {
    dds_message->g_ = ros_message->g;
  }
  // Member name: b
  {
    dds_message->b_ = ros_message->b;
  }
  return true;
}

static bool
_Color__convert_dds_to_ros(const void * untyped_dds_message, void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  if (!untyped_dds_message) {
    fprintf(stderr, "dds message handle is null\n");
    return false;
  }
  const turtlesim::msg::dds_::Color_ * dds_message =
    static_cast<const turtlesim::msg::dds_::Color_ *>(untyped_dds_message);
  turtlesim__msg__Color * ros_message =
    static_cast<turtlesim__msg__Color *>(untyped_ros_message);
  // Member name: r
  {
    ros_message->r = dds_message->r_;
  }
  // Member name: g
  {
    ros_message->g = dds_message->g_;
  }
  // Member name: b
  {
    ros_message->b = dds_message->b_;
  }
  return true;
}


static bool
_Color__to_cdr_stream(
  const void * untyped_ros_message,
  rcutils_uint8_array_t * cdr_stream)
{
  if (!untyped_ros_message) {
    return false;
  }
  if (!cdr_stream) {
    return false;
  }
  const turtlesim__msg__Color * ros_message =
    static_cast<const turtlesim__msg__Color *>(untyped_ros_message);
  turtlesim::msg::dds_::Color_ dds_message;
  if (!_Color__convert_ros_to_dds(ros_message, &dds_message)) {
    return false;
  }

  // call the serialize function for the first time to get the expected length of the message
  unsigned int expected_length;
  if (turtlesim::msg::dds_::Color_Plugin_serialize_to_cdr_buffer(
      NULL, &expected_length, &dds_message) != RTI_TRUE)
  {
    fprintf(stderr, "failed to call turtlesim::msg::dds_::Color_Plugin_serialize_to_cdr_buffer()\n");
    return false;
  }
  cdr_stream->buffer_length = expected_length;
  if (cdr_stream->buffer_length > (std::numeric_limits<unsigned int>::max)()) {
    fprintf(stderr, "cdr_stream->buffer_length, unexpectedly larger than max unsigned int\n");
    return false;
  }
  if (cdr_stream->buffer_capacity < cdr_stream->buffer_length) {
    cdr_stream->allocator.deallocate(cdr_stream->buffer, cdr_stream->allocator.state);
    cdr_stream->buffer = static_cast<uint8_t *>(cdr_stream->allocator.allocate(cdr_stream->buffer_length, cdr_stream->allocator.state));
  }
  // call the function again and fill the buffer this time
  unsigned int buffer_length_uint = static_cast<unsigned int>(cdr_stream->buffer_length);
  if (turtlesim::msg::dds_::Color_Plugin_serialize_to_cdr_buffer(
      reinterpret_cast<char *>(cdr_stream->buffer),
      &buffer_length_uint,
      &dds_message) != RTI_TRUE)
  {
    return false;
  }

  return true;
}

static bool
_Color__to_message(
  const rcutils_uint8_array_t * cdr_stream,
  void * untyped_ros_message)
{
  if (!cdr_stream) {
    return false;
  }
  if (!untyped_ros_message) {
    return false;
  }

  turtlesim::msg::dds_::Color_ * dds_message =
    turtlesim::msg::dds_::Color_TypeSupport::create_data();
  if (cdr_stream->buffer_length > (std::numeric_limits<unsigned int>::max)()) {
    fprintf(stderr, "cdr_stream->buffer_length, unexpectedly larger than max unsigned int\n");
    return false;
  }
  if (turtlesim::msg::dds_::Color_Plugin_deserialize_from_cdr_buffer(
      dds_message,
      reinterpret_cast<char *>(cdr_stream->buffer),
      static_cast<unsigned int>(cdr_stream->buffer_length)) != RTI_TRUE)
  {
    fprintf(stderr, "deserialize from cdr buffer failed\n");
    return false;
  }
  bool success = _Color__convert_dds_to_ros(dds_message, untyped_ros_message);
  if (turtlesim::msg::dds_::Color_TypeSupport::delete_data(dds_message) != DDS_RETCODE_OK) {
    return false;
  }
  return success;
}

static message_type_support_callbacks_t _Color__callbacks = {
  "turtlesim::msg",  // message_namespace
  "Color",  // message_name
  _Color__get_type_code,  // get_type_code
  _Color__convert_ros_to_dds,  // convert_ros_to_dds
  _Color__convert_dds_to_ros,  // convert_dds_to_ros
  _Color__to_cdr_stream,  // to_cdr_stream
  _Color__to_message  // to_message
};

static rosidl_message_type_support_t _Color__type_support = {
  rosidl_typesupport_connext_c__identifier,
  &_Color__callbacks,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_connext_c,
  turtlesim, msg,
  Color)()
{
  return &_Color__type_support;
}

#if defined(__cplusplus)
}
#endif
