#pragma once

#include <E2BIG>
#include <EACCES>
#include <EFAULT>
#include <EINVAL>
#include <EIO>
#include <EISDIR>
#include <ELIBBAD>
#include <ELOOP>
#include <EMFILE>
#include <ENAMETOOLONG>
#include <ENFILE>
#include <ENOENT>
#include <ENOEXEC>
#include <ENOMEM>
#include <ENOTDIR>
#include <EPERM>
#include <ETXTBSY>

namespace linux::execve {

enum Error
{
#define _(name) _##name = name
    _(E2BIG),
    _(EACCES),
    _(EFAULT),
    _(EINVAL),
    _(EIO),
    _(EISDIR),
    _(ELIBBAD),
    _(ELOOP),
    _(EMFILE),
    _(ENAMETOOLONG),
    _(ENFILE),
    _(ENOENT),
    _(ENOEXEC),
    _(ENOMEM),
    _(ENOTDIR),
    _(EPERM),
    _(ETXTBSY),
#undef _
};

}
