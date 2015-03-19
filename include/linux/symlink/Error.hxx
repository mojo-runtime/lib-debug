#pragma once

#include <EACCES>
#include <EDQUOT>
#include <EEXIST>
#include <EFAULT>
#include <EIO>
#include <ELOOP>
#include <ENAMETOOLONG>
#include <ENOENT>
#include <ENOMEM>
#include <ENOSPC>
#include <ENOTDIR>
#include <EPERM>
#include <EROFS>

namespace linux::symlink {

enum Error
{
#define _(name) _##name = name
    _(EACCES),
    _(EDQUOT),
    _(EEXIST),
    _(EFAULT),
    _(EIO),
    _(ELOOP),
    _(ENAMETOOLONG),
    _(ENOENT),
    _(ENOMEM),
    _(ENOSPC),
    _(ENOTDIR),
    _(EPERM),
    _(EROFS),
#undef _
};

}
