#pragma once

#include "linux/__Number.hxx"

namespace linux::stat {

static
const __Number
number =
#if defined(__x86_64__)
 4
#else
#  error
#endif
 ;

}