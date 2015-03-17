#pragma once

#include "compat/__has_builtin.h"
#include "compat/__nothrow.h"
#include "size_t.h"

__nothrow
static inline
int
memcmp(const void* s1, const void* s2, size_t n)
{
#if __has_builtin(__builtin_memcmp)
    return __builtin_memcmp(s1, s2, n);
#else
#  error
#endif
}
