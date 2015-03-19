#pragma once

#include <EBADF>
#include <EEXIST>
#include <EINVAL>
#include <ENOENT>
#include <ENOMEM>
#include <ENOSPC>
#include <EPERM>

namespace linux::epoll_ctl {

enum Error
{
#define _(name) _##name = name
    _(EBADF),
    _(EEXIST),
    _(EINVAL),
    _(ENOENT),
    _(ENOMEM),
    _(ENOSPC),
    _(EPERM),
#undef _
};

}
