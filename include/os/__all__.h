#if defined(__cplusplus)

#if defined(__linux__) && defined(__x86_64__)
#  include "chdir.hxx"
#  include "chmod.hxx"
#  include "chown.hxx"
#  include "clock_getres.hxx"
#  include "clock_gettime.hxx"
#  include "clock_nanosleep.hxx"
#  include "clock_settime.hxx"
#  include "clone.hxx"
#  include "close.hxx"
#  include "dup3.hxx"
#  include "epoll_create1.hxx"
#  include "epoll_ctl.hxx"
#  include "epoll_wait.hxx"
#  include "execve.hxx"
#endif
#include "exit.hxx"
#if defined(__linux__) && defined(__x86_64__)
#  include "exit_group.hxx"
#  include "fchdir.hxx"
#  include "fcntl.hxx"
#  include "fork.hxx"
#  include "fstat.hxx"
#  include "fstatat.hxx"
#  include "get_thread_area.hxx"
#  include "getcwd.hxx"
#  include "getdents.hxx"
#endif
#if defined(__linux__) || defined(__FreeBSD__)
#  include "getegid.hxx"
#  include "geteuid.hxx"
#  include "getgid.hxx"
#  include "getpgid.hxx"
#  include "getpid.hxx"
#  include "getppid.hxx"
#endif
#if defined(__linux__)
#  include "gettid.hxx"
#endif
#if defined(__linux__) || defined(__FreeBSD__)
#  include "getuid.hxx"
#endif
#if defined(__linux__) && defined(__x86_64__)
#  include "inotify_add_watch.hxx"
#  include "inotify_init1.hxx"
#  include "inotify_rm_watch.hxx"
#  include "ioctl.hxx"
#  include "kill.hxx"
#  include "mkdir.hxx"
#  include "mmap.hxx"
#  include "mremap.hxx"
#  include "munmap.hxx"
#  include "open.hxx"
#  include "pipe2.hxx"
#  include "read.hxx"
#  include "readlink.hxx"
#  include "rmdir.hxx"
#  include "set_thread_area.hxx"
#  include "stat.hxx"
#  include "symlink.hxx"
#  include "tgkill.hxx"
#  include "uname.hxx"
#  include "unlink.hxx"
#  include "waitid.hxx"
#  include "write.hxx"
#endif

#endif // __cplusplus
