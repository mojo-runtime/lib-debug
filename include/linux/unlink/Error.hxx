#pragma once

#include <EACCES>
#include <EBUSY>
#include <EFAULT>
#include <EIO>
#include <EISDIR>
#include <ELOOP>
#include <ENAMETOOLONG>
#include <ENOENT>
#include <ENOMEM>
#include <ENOTDIR>
#include <EPERM>
#include <EROFS>

namespace linux::unlink {

enum Error
{
#define _(name) _##name = name
    _(EACCES),
    _(EBUSY),
    _(EFAULT),
    _(EIO),
    _(EISDIR),
    _(ELOOP),
    _(ENAMETOOLONG),
    _(ENOENT),
    _(ENOMEM),
    _(ENOTDIR),
    _(EPERM),
    _(EROFS),
#undef _
};

}
