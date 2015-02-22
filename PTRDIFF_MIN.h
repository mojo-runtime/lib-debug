#ifndef c_PTRDIFF_MIN_h_
#define c_PTRDIFF_MIN_h_

#include "builtin/__PTRDIFF_WIDTH__.h"
#include "c/ptrdiff_t.h"
#include "c/_c_namespace.h"

_c_namespace

static
const ptrdiff_t
PTRDIFF_MIN =
#if __PTRDIFF_WIDTH__ == 64
 -9223372036854775807L - 1 // -2^(64-1), with compiler happiness
#else
#  error
#endif
 ;

_c_namespace_end

#endif
