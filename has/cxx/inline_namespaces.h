#ifndef has_cxx_inline_namespaces
#  ifdef __has_feature
#    define has_cxx_inline_namespaces __has_feature(cxx_inline_namespaces)
#  elif defined __GNUC__
#    include "has/_gnuc/minor.h"
#    define has_cxx_inline_namespaces _has_gnuc_minor(4, 4)
#  else
#    error todo
#  endif
#endif
