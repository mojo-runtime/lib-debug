#pragma once

#if defined(__linux__)
#  if defined(__x86_64__)
#    define SYS_clock_gettime 228
#  elif defined(__arm__)
#    define SYS_clock_gettime 263
#  else
#    error
#  endif
#elif defined(__FreeBSD__)
#  define SYS_clock_gettime 232
#else
#  error
#endif