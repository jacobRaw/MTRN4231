#ifndef USER_INPUT__VISIBILITY_CONTROL_H_
#define USER_INPUT__VISIBILITY_CONTROL_H_

#ifdef __cplusplus
extern "C"
{
#endif

// This logic was borrowed (then namespaced) from the examples on the gcc wiki:
//     https://gcc.gnu.org/wiki/Visibility

#if defined _WIN32 || defined __CYGWIN__
  #ifdef __GNUC__
    #define USER_INPUT_EXPORT __attribute__ ((dllexport))
    #define USER_INPUT_IMPORT __attribute__ ((dllimport))
  #else
    #define USER_INPUT_EXPORT __declspec(dllexport)
    #define USER_INPUT_IMPORT __declspec(dllimport)
  #endif
  #ifdef USER_INPUT_BUILDING_DLL
    #define USER_INPUT_PUBLIC USER_INPUT_EXPORT
  #else
    #define USER_INPUT_PUBLIC USER_INPUT_IMPORT
  #endif
  #define USER_INPUT_PUBLIC_TYPE USER_INPUT_PUBLIC
  #define USER_INPUT_LOCAL
#else
  #define USER_INPUT_EXPORT __attribute__ ((visibility("default")))
  #define USER_INPUT_IMPORT
  #if __GNUC__ >= 4
    #define USER_INPUT_PUBLIC __attribute__ ((visibility("default")))
    #define USER_INPUT_LOCAL  __attribute__ ((visibility("hidden")))
  #else
    #define USER_INPUT_PUBLIC
    #define USER_INPUT_LOCAL
  #endif
  #define USER_INPUT_PUBLIC_TYPE
#endif

#ifdef __cplusplus
}
#endif

#endif  // USER_INPUT__VISIBILITY_CONTROL_H_