#pragma once

#if defined(__linux__)
#  if defined(__x86_64__)
#    define SYS_fchdir 81
#  elif defined(__arm__)
#    define SYS_fchdir 133
#  else
#    error
#  endif
#elif defined(__FreeBSD__)
#  define SYS_fchdir 13
#else
#  error
#endif