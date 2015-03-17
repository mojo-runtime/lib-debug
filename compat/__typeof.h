#pragma once

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-id-macro"

#if !defined(__typeof) && defined(__cplusplus)
#  include "__has_feature.h"
#  if __has_feature(cxx_decltype)
#    define __typeof(x) decltype(x)
#  endif
#endif

#if !defined(__typeof) && defined(__GNUC__)
#  define __typeof(x) __typeof__(x)
#endif

#if !defined(__typeof)
#  error
#endif

#pragma clang diagnostic pop
