#ifndef linux_chdir_hxx_
#define linux_chdir_hxx_

#include "c/EACCES.h"
#include "c/EFAULT.h"
#include "c/EIO.h"
#include "c/ELOOP.h"
#include "c/ENAMETOOLONG.h"
#include "c/ENOENT.h"
#include "c/ENOMEM.h"
#include "c/ENOTDIR.h"
#include "c/SYS_chdir.h"
#include "c/_c_syscall1.h"

#include "linux/Result.hxx"

namespace linux {

static inline
auto
chdir(const char* path) noexcept
{
    // TODO(?): "The more general errors for chdir() are listed below:

    enum Error
    {
        // Search permission is denied for one of the components of `path`.
        EACCES = EACCES,

        // `path` points outside your accessible address space.
        EFAULT = EFAULT,

        // An I/O error occurred.
        EIO = EIO,

        // Too many symbolic links were encountered in resolving `path`.
        ELOOP = ELOOP,

        // `path` is too long.
        ENAMETOOLONG = ENAMETOOLONG,

        // The file does not exist.
        ENOENT = ENOENT,

        // Insufficient kernel memory was available.
        ENOMEM = ENOMEM,

        // A component of `path` is not a directory.
        ENOTDIR = ENOTDIR,
    };

    return Result<void, Error>(_c_syscall1(SYS_chdir, path));
}

} // namespace linux

#endif
