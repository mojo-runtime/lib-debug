#pragma once

#if defined(__has_builtin)
#  define __has_builtin_unreachable __has_builtin(__builtin_unreachable)
#elif defined(__GNUC__)
#  define __has_builtin_unreachable 1 // Version?
#else
#  error
#endif

#if __has_builtin_unreachable
#  define __unreachable() __builtin_unreachable()
#else
#  define __unreachable()
#endif
