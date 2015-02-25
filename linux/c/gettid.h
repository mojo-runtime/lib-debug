#ifndef linux_gettid_h_
#define linux_gettid_h_

#include "compat/_c_noexcept.h"
#include "compat/_c_static_cast.h"

#include "SYS_gettid.h"
#include "pid_t.h"
#include "_linux_syscall0.h"

static
pid_t
gettid() _c_noexcept
{
    return _c_static_cast(pid_t, _linux_syscall0(SYS_gettid));
}

#endif
