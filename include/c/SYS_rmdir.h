#pragma once

#if defined(__linux__)
#  if defined(__x86_64__)
#    define SYS_rmdir 84
#  elif defined(__arm__)
#    define SYS_rmdir 40
#  else
#    error
#  endif
#elif defined(__FreeBSD__)
#  define SYS_rmdir 137
#else
#  error
#endif