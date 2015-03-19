#pragma once

#include <EACCES>
#include <EFAULT>
#include <EINVAL>
#include <EIO>
#include <ELOOP>
#include <ENAMETOOLONG>
#include <ENOENT>
#include <ENOMEM>
#include <ENOTDIR>

namespace linux::readlink {

enum Error
{
#define _(name) _##name = name
    _(EACCES),
    _(EFAULT),
    _(EINVAL),
    _(EIO),
    _(ELOOP),
    _(ENAMETOOLONG),
    _(ENOENT),
    _(ENOMEM),
    _(ENOTDIR),
#undef _
};

}
