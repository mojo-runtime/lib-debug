#pragma once

#include <EBADF>
#include <EFAULT>
#include <EINVAL>
#include <ENOTTY>

namespace linux::ioctl {

enum Error
{
#define _(name) _##name = name
    _(EBADF),
    _(EFAULT),
    _(EINVAL),
    _(ENOTTY),
#undef _
};

}
