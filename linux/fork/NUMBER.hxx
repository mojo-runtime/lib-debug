#pragma once

#include "linux/__Number.hxx"

namespace linux::fork {

static
const __Number
NUMBER =
#if defined(__x86_64__)
 57
#else
#  error
#endif
 ;

}