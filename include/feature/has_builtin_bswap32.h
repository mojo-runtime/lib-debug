#ifndef has_builtin_bswap32

#if defined(__has_builtin)
#  define has_builtin_bswap32 __has_builtin(__builtin_bswap32)
#elif defined(__GNUC__)
#  include "_has_gnuc_minor.h"
#  define has_builtin_bswap32 _has_gnuc_minor(4, 3)
#else
#  error
#endif

#endif
