#ifndef has_cxx_defaulted_functions
#  ifdef __has_feature
#    define has_cxx_defaulted_functions __has_feature(cxx_defaulted_functions)
#  elif defined __GNUC__
#    include "has/_gnuc/minor.h"
#    define has_cxx_defaulted_functions _has_gnuc_minor(4, 4)
#  else
#    error todo
#  endif
#endif