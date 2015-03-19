#pragma once

#include <EFAULT>
#include <EINTR>
#include <EINVAL>

namespace linux::clock_nanosleep {

enum Error
{
#define _(name) _##name = name
    _(EFAULT),
    _(EINTR),
    _(EINVAL),
#undef _
};

}
