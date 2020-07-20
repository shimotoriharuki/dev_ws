// generated from rosidl_typesupport_connext_c/resource/idl__dds_connext__type_support_c.cpp.em
// with input from turtlesim:srv/Spawn.idl
// generated code does not contain a copyright notice

#include <cassert>
#include <limits>

#ifdef Connext_GLIBCXX_USE_CXX11_ABI_ZERO
#define _GLIBCXX_USE_CXX11_ABI 0
#endif

#ifndef _WIN32
# pragma GCC diagnostic push
# if __GNUC__ >= 9
#  pragma GCC diagnostic ignored "-Wclass-memaccess"
# endif
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif

#include <ndds/connext_cpp/connext_cpp_requester_details.h>
#include <ndds/ndds_cpp.h>
#include <ndds/ndds_requestreply_cpp.h>

#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "turtlesim/srv/spawn__rosidl_typesupport_connext_c.h"
#include "rosidl_typesupport_connext_cpp/service_type_support.h"
#include "rosidl_typesupport_connext_cpp/message_type_support.h"
#include "rmw/rmw.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
#include "rosidl_typesupport_connext_c/identifier.h"
#include "turtlesim/msg/rosidl_typesupport_connext_c__visibility_control.h"
#include "turtlesim/srv/dds_connext/Spawn_Support.h"
#include "turtlesim/srv/spawn.h"
#include "turtlesim/srv/spawn__rosidl_typesupport_connext_cpp.hpp"

// already included above
// #include "turtlesim/srv/spawn__rosidl_typesupport_connext_c.h"
#include "rcutils/types/uint8_array.h"
// already included above
// #include "rosidl_typesupport_connext_c/identifier.h"
#include "rosidl_typesupport_connext_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_connext_cpp/message_type_support.h"
// already included above
// #include "turtlesim/msg/rosidl_typesupport_connext_c__visibility_control.h"
#include "turtlesim/srv/detail/spawn__struct.h"
#include "turtlesim/srv/detail/spawn__functions.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif

// already included above
// #include "turtlesim/srv/dds_connext/Spawn_Support.h"
#include "turtlesim/srv/dds_connext/Spawn_Plugin.h"

#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions
#if defined(__cplusplus)
extern "C"
{
#endif

// Include directives for member types
// Member 'name'
#include "rosidl_runtime_c/string.h"
// Member 'name'
#include "rosidl_runtime_c/string_functions.h"

// forward declare type support functions

static DDS_TypeCode *
_Spawn_Request__get_type_code()
{
  return turtlesim::srv::dds_::Spawn_Request_TypeSupport::get_typecode();
}

static bool
_Spawn_Request__convert_ros_to_dds(const void * untyped_ros_message, void * untyped_dds_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  if (!untyped_dds_message) {
    fprintf(stderr, "dds message handle is null\n");
    return false;
  }
  const turtlesim__srv__Spawn_Request * ros_message =
    static_cast<const turtlesim__srv__Spawn_Request *>(untyped_ros_message);
  turtlesim::srv::dds_::Spawn_Request_ * dds_message =
    static_cast<turtlesim::srv::dds_::Spawn_Request_ *>(untyped_dds_message);
  // Member name: x
  {
    dds_message->x_ = ros_message->x;
  }
  // Member name: y
  {
    dds_message->y_ = ros_message->y;
  }
  // Member name: theta
  {
    dds_message->theta_ = ros_message->theta;
  }
  // Member name: name
  {
    const rosidl_runtime_c__String * str = &ros_message->name;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    dds_message->name_ = DDS_String_dup(str->data);
  }
  return true;
}

static bool
_Spawn_Request__convert_dds_to_ros(const void * untyped_dds_message, void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  if (!untyped_dds_message) {
    fprintf(stderr, "dds message handle is null\n");
    return false;
  }
  const turtlesim::srv::dds_::Spawn_Request_ * dds_message =
    static_cast<const turtlesim::srv::dds_::Spawn_Request_ *>(untyped_dds_message);
  turtlesim__srv__Spawn_Request * ros_message =
    static_cast<turtlesim__srv__Spawn_Request *>(untyped_ros_message);
  // Member name: x
  {
    ros_message->x = dds_message->x_;
  }
  // Member name: y
  {
    ros_message->y = dds_message->y_;
  }
  // Member name: theta
  {
    ros_message->theta = dds_message->theta_;
  }
  // Member name: name
  {
    if (!ros_message->name.data) {
      rosidl_runtime_c__String__init(&ros_message->name);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->name,
      dds_message->name_);
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'name'\n");
      return false;
    }
  }
  return true;
}


static bool
_Spawn_Request__to_cdr_stream(
  const void * untyped_ros_message,
  rcutils_uint8_array_t * cdr_stream)
{
  if (!untyped_ros_message) {
    return false;
  }
  if (!cdr_stream) {
    return false;
  }
  const turtlesim__srv__Spawn_Request * ros_message =
    static_cast<const turtlesim__srv__Spawn_Request *>(untyped_ros_message);
  turtlesim::srv::dds_::Spawn_Request_ dds_message;
  if (!_Spawn_Request__convert_ros_to_dds(ros_message, &dds_message)) {
    return false;
  }

  // call the serialize function for the first time to get the expected length of the message
  unsigned int expected_length;
  if (turtlesim::srv::dds_::Spawn_Request_Plugin_serialize_to_cdr_buffer(
      NULL, &expected_length, &dds_message) != RTI_TRUE)
  {
    fprintf(stderr, "failed to call turtlesim::srv::dds_::Spawn_Request_Plugin_serialize_to_cdr_buffer()\n");
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
  if (turtlesim::srv::dds_::Spawn_Request_Plugin_serialize_to_cdr_buffer(
      reinterpret_cast<char *>(cdr_stream->buffer),
      &buffer_length_uint,
      &dds_message) != RTI_TRUE)
  {
    return false;
  }

  return true;
}

static bool
_Spawn_Request__to_message(
  const rcutils_uint8_array_t * cdr_stream,
  void * untyped_ros_message)
{
  if (!cdr_stream) {
    return false;
  }
  if (!untyped_ros_message) {
    return false;
  }

  turtlesim::srv::dds_::Spawn_Request_ * dds_message =
    turtlesim::srv::dds_::Spawn_Request_TypeSupport::create_data();
  if (cdr_stream->buffer_length > (std::numeric_limits<unsigned int>::max)()) {
    fprintf(stderr, "cdr_stream->buffer_length, unexpectedly larger than max unsigned int\n");
    return false;
  }
  if (turtlesim::srv::dds_::Spawn_Request_Plugin_deserialize_from_cdr_buffer(
      dds_message,
      reinterpret_cast<char *>(cdr_stream->buffer),
      static_cast<unsigned int>(cdr_stream->buffer_length)) != RTI_TRUE)
  {
    fprintf(stderr, "deserialize from cdr buffer failed\n");
    return false;
  }
  bool success = _Spawn_Request__convert_dds_to_ros(dds_message, untyped_ros_message);
  if (turtlesim::srv::dds_::Spawn_Request_TypeSupport::delete_data(dds_message) != DDS_RETCODE_OK) {
    return false;
  }
  return success;
}

static message_type_support_callbacks_t _Spawn_Request__callbacks = {
  "turtlesim::srv",  // message_namespace
  "Spawn_Request",  // message_name
  _Spawn_Request__get_type_code,  // get_type_code
  _Spawn_Request__convert_ros_to_dds,  // convert_ros_to_dds
  _Spawn_Request__convert_dds_to_ros,  // convert_dds_to_ros
  _Spawn_Request__to_cdr_stream,  // to_cdr_stream
  _Spawn_Request__to_message  // to_message
};

static rosidl_message_type_support_t _Spawn_Request__type_support = {
  rosidl_typesupport_connext_c__identifier,
  &_Spawn_Request__callbacks,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_connext_c,
  turtlesim, srv,
  Spawn_Request)()
{
  return &_Spawn_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include "turtlesim/srv/spawn__rosidl_typesupport_connext_c.h"
// already included above
// #include "rcutils/types/uint8_array.h"
// already included above
// #include "rosidl_typesupport_connext_c/identifier.h"
// already included above
// #include "rosidl_typesupport_connext_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_connext_cpp/message_type_support.h"
// already included above
// #include "turtlesim/msg/rosidl_typesupport_connext_c__visibility_control.h"
// already included above
// #include "turtlesim/srv/detail/spawn__struct.h"
// already included above
// #include "turtlesim/srv/detail/spawn__functions.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif

// already included above
// #include "turtlesim/srv/dds_connext/Spawn_Support.h"
// already included above
// #include "turtlesim/srv/dds_connext/Spawn_Plugin.h"

#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions
#if defined(__cplusplus)
extern "C"
{
#endif

// Include directives for member types
// Member 'name'
// already included above
// #include "rosidl_runtime_c/string.h"
// Member 'name'
// already included above
// #include "rosidl_runtime_c/string_functions.h"

// forward declare type support functions

static DDS_TypeCode *
_Spawn_Response__get_type_code()
{
  return turtlesim::srv::dds_::Spawn_Response_TypeSupport::get_typecode();
}

static bool
_Spawn_Response__convert_ros_to_dds(const void * untyped_ros_message, void * untyped_dds_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  if (!untyped_dds_message) {
    fprintf(stderr, "dds message handle is null\n");
    return false;
  }
  const turtlesim__srv__Spawn_Response * ros_message =
    static_cast<const turtlesim__srv__Spawn_Response *>(untyped_ros_message);
  turtlesim::srv::dds_::Spawn_Response_ * dds_message =
    static_cast<turtlesim::srv::dds_::Spawn_Response_ *>(untyped_dds_message);
  // Member name: name
  {
    const rosidl_runtime_c__String * str = &ros_message->name;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    dds_message->name_ = DDS_String_dup(str->data);
  }
  return true;
}

static bool
_Spawn_Response__convert_dds_to_ros(const void * untyped_dds_message, void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  if (!untyped_dds_message) {
    fprintf(stderr, "dds message handle is null\n");
    return false;
  }
  const turtlesim::srv::dds_::Spawn_Response_ * dds_message =
    static_cast<const turtlesim::srv::dds_::Spawn_Response_ *>(untyped_dds_message);
  turtlesim__srv__Spawn_Response * ros_message =
    static_cast<turtlesim__srv__Spawn_Response *>(untyped_ros_message);
  // Member name: name
  {
    if (!ros_message->name.data) {
      rosidl_runtime_c__String__init(&ros_message->name);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->name,
      dds_message->name_);
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'name'\n");
      return false;
    }
  }
  return true;
}


static bool
_Spawn_Response__to_cdr_stream(
  const void * untyped_ros_message,
  rcutils_uint8_array_t * cdr_stream)
{
  if (!untyped_ros_message) {
    return false;
  }
  if (!cdr_stream) {
    return false;
  }
  const turtlesim__srv__Spawn_Response * ros_message =
    static_cast<const turtlesim__srv__Spawn_Response *>(untyped_ros_message);
  turtlesim::srv::dds_::Spawn_Response_ dds_message;
  if (!_Spawn_Response__convert_ros_to_dds(ros_message, &dds_message)) {
    return false;
  }

  // call the serialize function for the first time to get the expected length of the message
  unsigned int expected_length;
  if (turtlesim::srv::dds_::Spawn_Response_Plugin_serialize_to_cdr_buffer(
      NULL, &expected_length, &dds_message) != RTI_TRUE)
  {
    fprintf(stderr, "failed to call turtlesim::srv::dds_::Spawn_Response_Plugin_serialize_to_cdr_buffer()\n");
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
  if (turtlesim::srv::dds_::Spawn_Response_Plugin_serialize_to_cdr_buffer(
      reinterpret_cast<char *>(cdr_stream->buffer),
      &buffer_length_uint,
      &dds_message) != RTI_TRUE)
  {
    return false;
  }

  return true;
}

static bool
_Spawn_Response__to_message(
  const rcutils_uint8_array_t * cdr_stream,
  void * untyped_ros_message)
{
  if (!cdr_stream) {
    return false;
  }
  if (!untyped_ros_message) {
    return false;
  }

  turtlesim::srv::dds_::Spawn_Response_ * dds_message =
    turtlesim::srv::dds_::Spawn_Response_TypeSupport::create_data();
  if (cdr_stream->buffer_length > (std::numeric_limits<unsigned int>::max)()) {
    fprintf(stderr, "cdr_stream->buffer_length, unexpectedly larger than max unsigned int\n");
    return false;
  }
  if (turtlesim::srv::dds_::Spawn_Response_Plugin_deserialize_from_cdr_buffer(
      dds_message,
      reinterpret_cast<char *>(cdr_stream->buffer),
      static_cast<unsigned int>(cdr_stream->buffer_length)) != RTI_TRUE)
  {
    fprintf(stderr, "deserialize from cdr buffer failed\n");
    return false;
  }
  bool success = _Spawn_Response__convert_dds_to_ros(dds_message, untyped_ros_message);
  if (turtlesim::srv::dds_::Spawn_Response_TypeSupport::delete_data(dds_message) != DDS_RETCODE_OK) {
    return false;
  }
  return success;
}

static message_type_support_callbacks_t _Spawn_Response__callbacks = {
  "turtlesim::srv",  // message_namespace
  "Spawn_Response",  // message_name
  _Spawn_Response__get_type_code,  // get_type_code
  _Spawn_Response__convert_ros_to_dds,  // convert_ros_to_dds
  _Spawn_Response__convert_dds_to_ros,  // convert_dds_to_ros
  _Spawn_Response__to_cdr_stream,  // to_cdr_stream
  _Spawn_Response__to_message  // to_message
};

static rosidl_message_type_support_t _Spawn_Response__type_support = {
  rosidl_typesupport_connext_c__identifier,
  &_Spawn_Response__callbacks,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_connext_c,
  turtlesim, srv,
  Spawn_Response)()
{
  return &_Spawn_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

class DDSDomainParticipant;
class DDSDataReader;
struct DDS_SampleIdentity_t;

#if defined(__cplusplus)
extern "C"
{
#endif

static void * create_requester__Spawn(
  void * untyped_participant,
  const char * request_topic_str,
  const char * response_topic_str,
  const void * untyped_datareader_qos,
  const void * untyped_datawriter_qos,
  void ** untyped_reader,
  void ** untyped_writer,
  void * (*allocator)(size_t))
{
  return turtlesim::srv::typesupport_connext_cpp::create_requester__Spawn(
    untyped_participant,
    request_topic_str,
    response_topic_str,
    untyped_datareader_qos,
    untyped_datawriter_qos,
    untyped_reader,
    untyped_writer,
    allocator);
}
static const char * destroy_requester__Spawn(
  void * untyped_requester,
  void (* deallocator)(void *))
{
  return turtlesim::srv::typesupport_connext_cpp::destroy_requester__Spawn(
    untyped_requester, deallocator);
}

static int64_t send_request__Spawn(
  void * untyped_requester,
  const void * untyped_ros_request)
{
  using RequesterType = connext::Requester<
    turtlesim::srv::dds_::Spawn_Request_,
    turtlesim::srv::dds_::Spawn_Response_
  >;
  connext::WriteSample<turtlesim::srv::dds_::Spawn_Request_> request;
  const rosidl_message_type_support_t * ts =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_connext_c,
    turtlesim, srv,
    Spawn_Request)();
  const message_type_support_callbacks_t * callbacks =
    static_cast<const message_type_support_callbacks_t *>(ts->data);
  bool converted = callbacks->convert_ros_to_dds(
    untyped_ros_request, static_cast<void *>(&request.data()));
  if (!converted) {
    fprintf(stderr, "Unable to convert request!\n");
    return -1;
  }

  RequesterType * requester = reinterpret_cast<RequesterType *>(untyped_requester);

  requester->send_request(request);
  int64_t sequence_number = ((int64_t)request.identity().sequence_number.high) << 32 |
    request.identity().sequence_number.low;
  return sequence_number;
}

static void * create_replier__Spawn(
  void * untyped_participant,
  const char * request_topic_str,
  const char * response_topic_str,
  const void * untyped_datareader_qos,
  const void * untyped_datawriter_qos,
  void ** untyped_reader,
  void ** untyped_writer,
  void * (*allocator)(size_t))
{
  return turtlesim::srv::typesupport_connext_cpp::create_replier__Spawn(
    untyped_participant,
    request_topic_str,
    response_topic_str,
    untyped_datareader_qos,
    untyped_datawriter_qos,
    untyped_reader,
    untyped_writer,
    allocator);
}

static const char * destroy_replier__Spawn(
  void * untyped_replier,
  void (* deallocator)(void *))
{
  return turtlesim::srv::typesupport_connext_cpp::destroy_replier__Spawn(
    untyped_replier, deallocator);
}

static bool take_request__Spawn(
  void * untyped_replier,
  rmw_service_info_t * request_header,
  void * untyped_ros_request)
{
  using ReplierType = connext::Replier<
    turtlesim::srv::dds_::Spawn_Request_,
    turtlesim::srv::dds_::Spawn_Response_
  >;
  if (!untyped_replier || !request_header || !untyped_ros_request) {
    return false;
  }

  ReplierType * replier = reinterpret_cast<ReplierType *>(untyped_replier);

  connext::Sample<turtlesim::srv::dds_::Spawn_Request_> request;
  bool taken = replier->take_request(request);
  if (!taken) {
    return false;
  }
  if (!request.info().valid_data) {
    return false;
  }

  const rosidl_message_type_support_t * ts =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_connext_c,
    turtlesim, srv,
    Spawn_Request)();
  const message_type_support_callbacks_t * callbacks =
    static_cast<const message_type_support_callbacks_t *>(ts->data);
  bool converted = callbacks->convert_dds_to_ros(
    static_cast<const void *>(&request.data()), untyped_ros_request);
  if (!converted) {
    return false;
  }

  size_t SAMPLE_IDENTITY_SIZE = 16;
  memcpy(&(request_header->request_id.writer_guid[0]), request.identity().writer_guid.value, SAMPLE_IDENTITY_SIZE);

  request_header->request_id.sequence_number = ((int64_t)request.identity().sequence_number.high) << 32 | request.identity().sequence_number.low;
  request_header->source_timestamp = 0;
  request_header->received_timestamp = 0;
  return true;
}

static bool take_response__Spawn(
  void * untyped_requester,
  rmw_service_info_t * request_header,
  void * untyped_ros_response)
{
  using RequesterType = connext::Requester<
    turtlesim::srv::dds_::Spawn_Request_,
    turtlesim::srv::dds_::Spawn_Response_
  >;
  if (!untyped_requester || !request_header || !untyped_ros_response) {
    return false;
  }

  RequesterType * requester = reinterpret_cast<RequesterType *>(untyped_requester);

  connext::Sample<turtlesim::srv::dds_::Spawn_Response_> response;
  bool received = requester->take_reply(response);
  if (!received) {
    return false;
  }
  if (!response.info().valid_data) {
    return false;
  }

  int64_t sequence_number =
    (((int64_t)response.related_identity().sequence_number.high) << 32) |
    response.related_identity().sequence_number.low;
  request_header->request_id.sequence_number = sequence_number;
  request_header->source_timestamp = 0;
  request_header->received_timestamp = 0;

  const rosidl_message_type_support_t * ts =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_connext_c,
    turtlesim, srv,
    Spawn_Response)();
  const message_type_support_callbacks_t * callbacks =
    static_cast<const message_type_support_callbacks_t *>(ts->data);
  bool converted = callbacks->convert_dds_to_ros(
    static_cast<const void *>(&response.data()), untyped_ros_response);
  return converted;
}

bool send_response__Spawn(
  void * untyped_replier,
  const rmw_request_id_t * request_header,
  const void * untyped_ros_response)
{
  using ReplierType = connext::Replier<
    turtlesim::srv::dds_::Spawn_Request_,
    turtlesim::srv::dds_::Spawn_Response_
  >;
  if (!untyped_replier || !request_header || !untyped_ros_response) {
    return false;
  }

  connext::WriteSample<turtlesim::srv::dds_::Spawn_Response_> response;
  const rosidl_message_type_support_t * ts =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_connext_c,
    turtlesim, srv,
    Spawn_Response)();
  const message_type_support_callbacks_t * callbacks =
    static_cast<const message_type_support_callbacks_t *>(ts->data);
  bool converted = callbacks->convert_ros_to_dds(
    untyped_ros_response, static_cast<void *>(&response.data()));
  if (!converted) {
    return false;
  }

  DDS_SampleIdentity_t request_identity;

  size_t SAMPLE_IDENTITY_SIZE = 16;
  memcpy(request_identity.writer_guid.value, &request_header->writer_guid[0], SAMPLE_IDENTITY_SIZE);

  request_identity.sequence_number.high = (int32_t)((request_header->sequence_number & 0xFFFFFFFF00000000) >> 32);
  request_identity.sequence_number.low = (uint32_t)(request_header->sequence_number & 0xFFFFFFFF);

  ReplierType * replier = reinterpret_cast<ReplierType *>(untyped_replier);

  replier->send_reply(response, request_identity);
  return true;
}

static void *
get_request_datawriter__Spawn(void * untyped_requester)
{
  return turtlesim::srv::typesupport_connext_cpp::get_request_datawriter__Spawn(
    untyped_requester);
}

static void *
get_reply_datareader__Spawn(void * untyped_requester)
{
  return turtlesim::srv::typesupport_connext_cpp::get_reply_datareader__Spawn(
    untyped_requester);
}

static void *
get_request_datareader__Spawn(void * untyped_replier)
{
  return turtlesim::srv::typesupport_connext_cpp::get_request_datareader__Spawn(
    untyped_replier);
}

static void *
get_reply_datawriter__Spawn(void * untyped_replier)
{
  return turtlesim::srv::typesupport_connext_cpp::get_reply_datawriter__Spawn(
    untyped_replier);
}

static service_type_support_callbacks_t _Spawn__callbacks = {
  "turtlesim::srv",  // service_namespace
  "Spawn",
  &create_requester__Spawn,
  &destroy_requester__Spawn,
  &create_replier__Spawn,
  &destroy_replier__Spawn,
  &send_request__Spawn,
  &take_request__Spawn,
  &send_response__Spawn,
  &take_response__Spawn,
  &get_request_datawriter__Spawn,
  &get_reply_datareader__Spawn,
  &get_request_datareader__Spawn,
  &get_reply_datawriter__Spawn
};

static rosidl_service_type_support_t _Spawn__type_support = {
  rosidl_typesupport_connext_c__identifier,
  &_Spawn__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
  rosidl_typesupport_connext_c,
  turtlesim, srv,
  Spawn)()
{
  return &_Spawn__type_support;
}

#if defined(__cplusplus)
}
#endif
