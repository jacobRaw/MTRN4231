// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from input_interfaces:action/UserInput.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "input_interfaces/action/detail/user_input__struct.h"
#include "input_interfaces/action/detail/user_input__type_support.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace input_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _UserInput_Goal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _UserInput_Goal_type_support_ids_t;

static const _UserInput_Goal_type_support_ids_t _UserInput_Goal_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _UserInput_Goal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _UserInput_Goal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _UserInput_Goal_type_support_symbol_names_t _UserInput_Goal_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, input_interfaces, action, UserInput_Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, input_interfaces, action, UserInput_Goal)),
  }
};

typedef struct _UserInput_Goal_type_support_data_t
{
  void * data[2];
} _UserInput_Goal_type_support_data_t;

static _UserInput_Goal_type_support_data_t _UserInput_Goal_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _UserInput_Goal_message_typesupport_map = {
  2,
  "input_interfaces",
  &_UserInput_Goal_message_typesupport_ids.typesupport_identifier[0],
  &_UserInput_Goal_message_typesupport_symbol_names.symbol_name[0],
  &_UserInput_Goal_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t UserInput_Goal_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_UserInput_Goal_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace input_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, input_interfaces, action, UserInput_Goal)() {
  return &::input_interfaces::action::rosidl_typesupport_c::UserInput_Goal_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "input_interfaces/action/detail/user_input__struct.h"
// already included above
// #include "input_interfaces/action/detail/user_input__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace input_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _UserInput_Result_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _UserInput_Result_type_support_ids_t;

static const _UserInput_Result_type_support_ids_t _UserInput_Result_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _UserInput_Result_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _UserInput_Result_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _UserInput_Result_type_support_symbol_names_t _UserInput_Result_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, input_interfaces, action, UserInput_Result)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, input_interfaces, action, UserInput_Result)),
  }
};

typedef struct _UserInput_Result_type_support_data_t
{
  void * data[2];
} _UserInput_Result_type_support_data_t;

static _UserInput_Result_type_support_data_t _UserInput_Result_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _UserInput_Result_message_typesupport_map = {
  2,
  "input_interfaces",
  &_UserInput_Result_message_typesupport_ids.typesupport_identifier[0],
  &_UserInput_Result_message_typesupport_symbol_names.symbol_name[0],
  &_UserInput_Result_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t UserInput_Result_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_UserInput_Result_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace input_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, input_interfaces, action, UserInput_Result)() {
  return &::input_interfaces::action::rosidl_typesupport_c::UserInput_Result_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "input_interfaces/action/detail/user_input__struct.h"
// already included above
// #include "input_interfaces/action/detail/user_input__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace input_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _UserInput_Feedback_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _UserInput_Feedback_type_support_ids_t;

static const _UserInput_Feedback_type_support_ids_t _UserInput_Feedback_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _UserInput_Feedback_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _UserInput_Feedback_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _UserInput_Feedback_type_support_symbol_names_t _UserInput_Feedback_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, input_interfaces, action, UserInput_Feedback)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, input_interfaces, action, UserInput_Feedback)),
  }
};

typedef struct _UserInput_Feedback_type_support_data_t
{
  void * data[2];
} _UserInput_Feedback_type_support_data_t;

static _UserInput_Feedback_type_support_data_t _UserInput_Feedback_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _UserInput_Feedback_message_typesupport_map = {
  2,
  "input_interfaces",
  &_UserInput_Feedback_message_typesupport_ids.typesupport_identifier[0],
  &_UserInput_Feedback_message_typesupport_symbol_names.symbol_name[0],
  &_UserInput_Feedback_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t UserInput_Feedback_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_UserInput_Feedback_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace input_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, input_interfaces, action, UserInput_Feedback)() {
  return &::input_interfaces::action::rosidl_typesupport_c::UserInput_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "input_interfaces/action/detail/user_input__struct.h"
// already included above
// #include "input_interfaces/action/detail/user_input__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace input_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _UserInput_SendGoal_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _UserInput_SendGoal_Request_type_support_ids_t;

static const _UserInput_SendGoal_Request_type_support_ids_t _UserInput_SendGoal_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _UserInput_SendGoal_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _UserInput_SendGoal_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _UserInput_SendGoal_Request_type_support_symbol_names_t _UserInput_SendGoal_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, input_interfaces, action, UserInput_SendGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, input_interfaces, action, UserInput_SendGoal_Request)),
  }
};

typedef struct _UserInput_SendGoal_Request_type_support_data_t
{
  void * data[2];
} _UserInput_SendGoal_Request_type_support_data_t;

static _UserInput_SendGoal_Request_type_support_data_t _UserInput_SendGoal_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _UserInput_SendGoal_Request_message_typesupport_map = {
  2,
  "input_interfaces",
  &_UserInput_SendGoal_Request_message_typesupport_ids.typesupport_identifier[0],
  &_UserInput_SendGoal_Request_message_typesupport_symbol_names.symbol_name[0],
  &_UserInput_SendGoal_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t UserInput_SendGoal_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_UserInput_SendGoal_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace input_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, input_interfaces, action, UserInput_SendGoal_Request)() {
  return &::input_interfaces::action::rosidl_typesupport_c::UserInput_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "input_interfaces/action/detail/user_input__struct.h"
// already included above
// #include "input_interfaces/action/detail/user_input__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace input_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _UserInput_SendGoal_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _UserInput_SendGoal_Response_type_support_ids_t;

static const _UserInput_SendGoal_Response_type_support_ids_t _UserInput_SendGoal_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _UserInput_SendGoal_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _UserInput_SendGoal_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _UserInput_SendGoal_Response_type_support_symbol_names_t _UserInput_SendGoal_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, input_interfaces, action, UserInput_SendGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, input_interfaces, action, UserInput_SendGoal_Response)),
  }
};

typedef struct _UserInput_SendGoal_Response_type_support_data_t
{
  void * data[2];
} _UserInput_SendGoal_Response_type_support_data_t;

static _UserInput_SendGoal_Response_type_support_data_t _UserInput_SendGoal_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _UserInput_SendGoal_Response_message_typesupport_map = {
  2,
  "input_interfaces",
  &_UserInput_SendGoal_Response_message_typesupport_ids.typesupport_identifier[0],
  &_UserInput_SendGoal_Response_message_typesupport_symbol_names.symbol_name[0],
  &_UserInput_SendGoal_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t UserInput_SendGoal_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_UserInput_SendGoal_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace input_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, input_interfaces, action, UserInput_SendGoal_Response)() {
  return &::input_interfaces::action::rosidl_typesupport_c::UserInput_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "input_interfaces/action/detail/user_input__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace input_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _UserInput_SendGoal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _UserInput_SendGoal_type_support_ids_t;

static const _UserInput_SendGoal_type_support_ids_t _UserInput_SendGoal_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _UserInput_SendGoal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _UserInput_SendGoal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _UserInput_SendGoal_type_support_symbol_names_t _UserInput_SendGoal_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, input_interfaces, action, UserInput_SendGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, input_interfaces, action, UserInput_SendGoal)),
  }
};

typedef struct _UserInput_SendGoal_type_support_data_t
{
  void * data[2];
} _UserInput_SendGoal_type_support_data_t;

static _UserInput_SendGoal_type_support_data_t _UserInput_SendGoal_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _UserInput_SendGoal_service_typesupport_map = {
  2,
  "input_interfaces",
  &_UserInput_SendGoal_service_typesupport_ids.typesupport_identifier[0],
  &_UserInput_SendGoal_service_typesupport_symbol_names.symbol_name[0],
  &_UserInput_SendGoal_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t UserInput_SendGoal_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_UserInput_SendGoal_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace input_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, input_interfaces, action, UserInput_SendGoal)() {
  return &::input_interfaces::action::rosidl_typesupport_c::UserInput_SendGoal_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "input_interfaces/action/detail/user_input__struct.h"
// already included above
// #include "input_interfaces/action/detail/user_input__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace input_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _UserInput_GetResult_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _UserInput_GetResult_Request_type_support_ids_t;

static const _UserInput_GetResult_Request_type_support_ids_t _UserInput_GetResult_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _UserInput_GetResult_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _UserInput_GetResult_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _UserInput_GetResult_Request_type_support_symbol_names_t _UserInput_GetResult_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, input_interfaces, action, UserInput_GetResult_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, input_interfaces, action, UserInput_GetResult_Request)),
  }
};

typedef struct _UserInput_GetResult_Request_type_support_data_t
{
  void * data[2];
} _UserInput_GetResult_Request_type_support_data_t;

static _UserInput_GetResult_Request_type_support_data_t _UserInput_GetResult_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _UserInput_GetResult_Request_message_typesupport_map = {
  2,
  "input_interfaces",
  &_UserInput_GetResult_Request_message_typesupport_ids.typesupport_identifier[0],
  &_UserInput_GetResult_Request_message_typesupport_symbol_names.symbol_name[0],
  &_UserInput_GetResult_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t UserInput_GetResult_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_UserInput_GetResult_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace input_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, input_interfaces, action, UserInput_GetResult_Request)() {
  return &::input_interfaces::action::rosidl_typesupport_c::UserInput_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "input_interfaces/action/detail/user_input__struct.h"
// already included above
// #include "input_interfaces/action/detail/user_input__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace input_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _UserInput_GetResult_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _UserInput_GetResult_Response_type_support_ids_t;

static const _UserInput_GetResult_Response_type_support_ids_t _UserInput_GetResult_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _UserInput_GetResult_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _UserInput_GetResult_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _UserInput_GetResult_Response_type_support_symbol_names_t _UserInput_GetResult_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, input_interfaces, action, UserInput_GetResult_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, input_interfaces, action, UserInput_GetResult_Response)),
  }
};

typedef struct _UserInput_GetResult_Response_type_support_data_t
{
  void * data[2];
} _UserInput_GetResult_Response_type_support_data_t;

static _UserInput_GetResult_Response_type_support_data_t _UserInput_GetResult_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _UserInput_GetResult_Response_message_typesupport_map = {
  2,
  "input_interfaces",
  &_UserInput_GetResult_Response_message_typesupport_ids.typesupport_identifier[0],
  &_UserInput_GetResult_Response_message_typesupport_symbol_names.symbol_name[0],
  &_UserInput_GetResult_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t UserInput_GetResult_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_UserInput_GetResult_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace input_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, input_interfaces, action, UserInput_GetResult_Response)() {
  return &::input_interfaces::action::rosidl_typesupport_c::UserInput_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "input_interfaces/action/detail/user_input__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace input_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _UserInput_GetResult_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _UserInput_GetResult_type_support_ids_t;

static const _UserInput_GetResult_type_support_ids_t _UserInput_GetResult_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _UserInput_GetResult_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _UserInput_GetResult_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _UserInput_GetResult_type_support_symbol_names_t _UserInput_GetResult_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, input_interfaces, action, UserInput_GetResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, input_interfaces, action, UserInput_GetResult)),
  }
};

typedef struct _UserInput_GetResult_type_support_data_t
{
  void * data[2];
} _UserInput_GetResult_type_support_data_t;

static _UserInput_GetResult_type_support_data_t _UserInput_GetResult_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _UserInput_GetResult_service_typesupport_map = {
  2,
  "input_interfaces",
  &_UserInput_GetResult_service_typesupport_ids.typesupport_identifier[0],
  &_UserInput_GetResult_service_typesupport_symbol_names.symbol_name[0],
  &_UserInput_GetResult_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t UserInput_GetResult_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_UserInput_GetResult_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace input_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, input_interfaces, action, UserInput_GetResult)() {
  return &::input_interfaces::action::rosidl_typesupport_c::UserInput_GetResult_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "input_interfaces/action/detail/user_input__struct.h"
// already included above
// #include "input_interfaces/action/detail/user_input__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace input_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _UserInput_FeedbackMessage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _UserInput_FeedbackMessage_type_support_ids_t;

static const _UserInput_FeedbackMessage_type_support_ids_t _UserInput_FeedbackMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _UserInput_FeedbackMessage_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _UserInput_FeedbackMessage_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _UserInput_FeedbackMessage_type_support_symbol_names_t _UserInput_FeedbackMessage_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, input_interfaces, action, UserInput_FeedbackMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, input_interfaces, action, UserInput_FeedbackMessage)),
  }
};

typedef struct _UserInput_FeedbackMessage_type_support_data_t
{
  void * data[2];
} _UserInput_FeedbackMessage_type_support_data_t;

static _UserInput_FeedbackMessage_type_support_data_t _UserInput_FeedbackMessage_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _UserInput_FeedbackMessage_message_typesupport_map = {
  2,
  "input_interfaces",
  &_UserInput_FeedbackMessage_message_typesupport_ids.typesupport_identifier[0],
  &_UserInput_FeedbackMessage_message_typesupport_symbol_names.symbol_name[0],
  &_UserInput_FeedbackMessage_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t UserInput_FeedbackMessage_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_UserInput_FeedbackMessage_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace input_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, input_interfaces, action, UserInput_FeedbackMessage)() {
  return &::input_interfaces::action::rosidl_typesupport_c::UserInput_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "action_msgs/msg/goal_status_array.h"
#include "action_msgs/srv/cancel_goal.h"
#include "input_interfaces/action/user_input.h"
// already included above
// #include "input_interfaces/action/detail/user_input__type_support.h"

static rosidl_action_type_support_t _input_interfaces__action__UserInput__typesupport_c;

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_action_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__ACTION_SYMBOL_NAME(
  rosidl_typesupport_c, input_interfaces, action, UserInput)()
{
  // Thread-safe by always writing the same values to the static struct
  _input_interfaces__action__UserInput__typesupport_c.goal_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, input_interfaces, action, UserInput_SendGoal)();
  _input_interfaces__action__UserInput__typesupport_c.result_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, input_interfaces, action, UserInput_GetResult)();
  _input_interfaces__action__UserInput__typesupport_c.cancel_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, action_msgs, srv, CancelGoal)();
  _input_interfaces__action__UserInput__typesupport_c.feedback_message_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c, input_interfaces, action, UserInput_FeedbackMessage)();
  _input_interfaces__action__UserInput__typesupport_c.status_message_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c, action_msgs, msg, GoalStatusArray)();

  return &_input_interfaces__action__UserInput__typesupport_c;
}

#ifdef __cplusplus
}
#endif
