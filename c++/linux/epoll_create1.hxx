#pragma once

#include "EINVAL.h"
#include "EMFILE.h"
#include "ENFILE.h"
#include "ENOMEM.h"
#include "SYS_epoll_create1.h"
#include "__syscall1.h"

#include "Result.hxx"

namespace linux {

static inline
auto
epoll_create1(int flags) noexcept
{
    enum Error
    {
        // Invalid value specified in `flags`.
        EINVAL_ = EINVAL,

        // The per-user limit on the number of epoll instances imposed by
        // /proc/sys/fs/epoll/max_user_instances was encountered.
        EMFILE_ = EMFILE,

        // The system limit on the total number of open files has been reached.
        ENFILE_ = ENFILE,

        // There was insufficient memory to create the kernel object.
        ENOMEM_ = ENOMEM,
    };

    return Result<int, Error>(__syscall1(SYS_epoll_create1, flags));
}

static inline
auto
epoll_create1() noexcept
{
    enum Error
    {
        // EINVAL
        EMFILE_ = EMFILE,
        ENFILE_ = ENFILE,
        ENOMEM_ = ENOMEM,
    };

    return epoll_create1(0)._with_error<Error>();
}

}
