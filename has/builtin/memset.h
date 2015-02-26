#ifndef has_builtin_memset
#  ifdef __has_builtin
#    define has_builtin_memset __has_builtin(__builtin_memset)
#  elif defined __GNUC__
#    include "has/_gnuc/minor.h"
#    define has_builtin_memset _has_gnuc_minor(2, 91)
#  else
#    error todo
#  endif
#endif