#ifndef has_cxx_strong_enums
#  ifdef __has_feature
#    define has_cxx_strong_enums __has_feature(cxx_strong_enums)
#  elif defined __GNUC__
#    include "has/_gnuc/minor.h"
#    define has_cxx_strong_enums _has_gnuc_minor(4, 4)
#  else
#    error todo
#  endif
#endif