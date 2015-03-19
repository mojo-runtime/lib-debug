#pragma once

#include <EFAULT>
#include <EINVAL>

namespace linux::get_thread_area {

enum Error
{
#define _(name) _##name = name
    _(EFAULT),
    _(EINVAL),
#undef _
};

}
