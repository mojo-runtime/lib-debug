#pragma once

#include "EFAULT.h"
#include "EINVAL.h"
#include "SYS_clock_getres.h"
#include "clockid_t.h"
#include "struct-timespec.h"
#include "__syscall2.h"

#include "Result.hxx"

namespace linux {

static inline
auto
clock_getres(clockid_t clk_id, const struct timespec* tp) noexcept
{
    enum Error
    {
        // `tp` points outside the accessible address space.
        EFAULT_ = EFAULT,

        // The `clk_id` specified is not supported on this system.
        EINVAL_ = EINVAL,
    };

    return Result<void, Error>(__syscall2(SYS_clock_getres, clk_id, tp));
}

}
