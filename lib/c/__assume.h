#pragma once

#if defined(__has_builtin)
#  define __has_builtin_assume __has_builtin(__builtin_assume)
#elif defined(__GNUC__)
#  define __has_builtin_assume 0
#else
#  error
#endif

#if __has_builtin_assume
#  define __assume(x) __builtin_assume(x)
#else
#  define __assume(x)
#endif
