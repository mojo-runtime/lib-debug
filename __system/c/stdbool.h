#pragma once

#if !defined(__cplusplus)
#  include "compat/__Bool.h"
#  define bool __Bool
#  define false 0
#  define true 1
#endif

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-id-macro"
#define __bool_true_false_are_defined 1
#pragma clang diagnostic pop