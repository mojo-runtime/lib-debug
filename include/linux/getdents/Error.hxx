#pragma once

#include <EBADF>
#include <EFAULT>
#include <EINVAL>
#include <ENOENT>
#include <ENOTDIR>

namespace linux::getdents {

enum Error
{
#define _(name) _##name = name
    _(EBADF),
    _(EFAULT),
    _(EINVAL),
    _(ENOENT),
    _(ENOTDIR),
#undef _
};

}
