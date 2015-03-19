#pragma once

#include <EAGAIN>
#include <EFAULT>
#include <EINVAL>
#include <ENOMEM>

namespace linux::mremap {

enum Error
{
#define _(name) _##name = name
    _(EAGAIN),
    _(EFAULT),
    _(EINVAL),
    _(ENOMEM),
#undef _
};

}
