#pragma once

#include "compat/__has_builtin.h"
#include "compat/__nothrow.h"

__nothrow
static inline
int
strcmp(const char* s1, const char* s2)
{
#if __has_builtin(__builtin_strcmp)
    return __builtin_strcmp(s1, s2);
#else
#  error
#endif
}
