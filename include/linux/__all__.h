#include "CLOCK_REALTIME.h"

#include "DT_BLK.h"
#include "DT_CHR.h"
#include "DT_DIR.h"
#include "DT_FIFO.h"
#include "DT_LNK.h"
#include "DT_REG.h"
#include "DT_SOCK.h"
#include "DT_UNKNOWN.h"
#include "E2BIG.h"
#include "EACCES.h"
#include "EAGAIN.h"
#include "EBADF.h"
#include "EBUSY.h"
#include "ECHILD.h"
#include "EDEADLK.h"
#include "EDESTADDRREQ.h"
#include "EDOM.h"
#include "EDQUOT.h"
#include "EEXIST.h"
#include "EFAULT.h"
#include "EFBIG.h"
#include "EINTR.h"
#include "EINVAL.h"
#include "EIO.h"
#include "EISDIR.h"
#include "ELIBBAD.h"
#include "ELOOP.h"
#include "EMFILE.h"
#include "EMLINK.h"
#include "ENAMETOOLONG.h"
#include "ENFILE.h"
#include "ENODEV.h"
#include "ENOENT.h"
#include "ENOEXEC.h"
#include "ENOLCK.h"
#include "ENOMEM.h"
#include "ENOSPC.h"
#include "ENOSYS.h"
#include "ENOTBLK.h"
#include "ENOTDIR.h"
#include "ENOTEMPTY.h"
#include "ENOTTY.h"
#include "ENXIO.h"
#include "EOPNOTSUPP.h"
#include "EOVERFLOW.h"
#include "EPERM.h"
#include "EPIPE.h"
#include "EPOLLERR.h"
#include "EPOLLET.h"
#include "EPOLLHUP.h"
#include "EPOLLIN.h"
#include "EPOLLONESHOT.h"
#include "EPOLLOUT.h"
#include "EPOLLPRI.h"
#include "EPOLLWAKEUP.h"
#include "EPOLL_CLOEXEC.h"
#include "EPOLL_CTL_ADD.h"
#include "EPOLL_CTL_DEL.h"
#include "EPOLL_CTL_MOD.h"
#include "ERANGE.h"
#include "EROFS.h"
#include "ESPIPE.h"
#include "ESRCH.h"
#include "ETXTBSY.h"
#include "EWOULDBLOCK.h"
#include "EXDEV.h"

#include "F_DUPFD.h"
#include "F_GETFD.h"
#include "F_GETFL.h"
#include "F_GETLK.h"
#include "F_SETFD.h"
#include "F_SETFL.h"
#include "F_SETLK.h"
#include "F_SETLKW.h"

#include "MAP_ANONYMOUS.h"
#include "MAP_DENYWRITE.h"
#include "MAP_PRIVATE.h"
#include "MAP_SHARED.h"

#include "NAME_MAX.h"

#include "NCCS.h"

#include "O_CLOEXEC.h"
#include "O_CREAT.h"
#include "O_DIRECTORY.h"
#include "O_RDONLY.h"
#include "O_RDWR.h"
#include "O_WRONLY.h"

#include "PATH_MAX.h"

#include "POLLERR.h"
#include "POLLHUP.h"
#include "POLLIN.h"
#include "POLLOUT.h"
#include "POLLPRI.h"

#include "PROT_EXEC.h"
#include "PROT_NONE.h"
#include "PROT_READ.h"
#include "PROT_WRITE.h"

#include "P_ALL.h"
#include "P_PGID.h"
#include "P_PID.h"

#include "SIGABRT.h"
#include "SIGALRM.h"
#include "SIGCHLD.h"
#include "SIGFPE.h"
#include "SIGHUP.h"
#include "SIGILL.h"
#include "SIGINT.h"
#include "SIGKILL.h"
#include "SIGPIPE.h"
#include "SIGQUIT.h"
#include "SIGSEGV.h"
#include "SIGTERM.h"
#include "SIGTRAP.h"

#include "SYS_chdir.h"
#include "SYS_chmod.h"
#include "SYS_chown.h"
#include "SYS_clock_getres.h"
#include "SYS_clock_gettime.h"
#include "SYS_clock_nanosleep.h"
#include "SYS_clock_settime.h"
#include "SYS_clone.h"
#include "SYS_close.h"
#include "SYS_dup3.h"
#include "SYS_epoll_create1.h"
#include "SYS_epoll_ctl.h"
#include "SYS_epoll_wait.h"
#include "SYS_execve.h"
#include "SYS_exit.h"
#include "SYS_exit_group.h"
#include "SYS_fchdir.h"
#include "SYS_fcntl.h"
#include "SYS_fork.h"
#include "SYS_fstat.h"
#include "SYS_fstatat.h"
#include "SYS_get_thread_area.h"
#include "SYS_getcwd.h"
#include "SYS_getdents.h"
#include "SYS_getegid.h"
#include "SYS_geteuid.h"
#include "SYS_getgid.h"
#include "SYS_getpid.h"
#include "SYS_getppid.h"
#include "SYS_gettid.h"
#include "SYS_getuid.h"
#include "SYS_inotify_add_watch.h"
#include "SYS_inotify_init1.h"
#include "SYS_inotify_rm_watch.h"
#include "SYS_ioctl.h"
#include "SYS_kill.h"
#include "SYS_mkdir.h"
#include "SYS_mmap.h"
#include "SYS_mremap.h"
#include "SYS_munmap.h"
#include "SYS_open.h"
#include "SYS_pause.h"
#include "SYS_pipe2.h"
#include "SYS_read.h"
#include "SYS_readlink.h"
#include "SYS_rmdir.h"
#include "SYS_set_thread_area.h"
#include "SYS_stat.h"
#include "SYS_symlink.h"
#include "SYS_tgkill.h"
#include "SYS_uname.h"
#include "SYS_unlink.h"
#include "SYS_vfork.h"
#include "SYS_waitid.h"
#include "SYS_write.h"

#include "TCGETS.h"
#include "TCSETS.h"
#include "TCSETSF.h"
#include "TCSETSW.h"

#include "WCONTINUED.h"
#include "WEXITED.h"
#include "WNOHANG.h"
#include "WNOWAIT.h"
#include "WSTOPPED.h"

#include "blkcnt_t.h"
#include "blksize_t.h"
#include "cc_t.h"
#include "clock_t.h"
#include "clockid_t.h"
#include "dev_t.h"
#include "epoll_data_t.h"
#include "gettid.h"
#include "gid_t.h"
#include "id_t.h"
#include "idtype_t.h"
#include "ino_t.h"
#include "mode_t.h"
#include "off_t.h"
#include "pid_t.h"
#include "siginfo_t.h"
#include "sigval_t.h"
#include "speed_t.h"
#include "suseconds_t.h"
#include "tcflag_t.h"
#include "time_t.h"
#include "uid_t.h"

#include "struct-epoll_event.h"
#include "struct-linux_dirent.h"
#include "struct-pt_regs.h"
#include "struct-rusage.h"
#include "struct-stat.h"
#include "struct-termios.h"
#include "struct-timespec.h"
#include "struct-timeval.h"
#include "struct-user_desc.h"
#include "struct-utsname.h"

#include "_syscall_0.h"
#include "_syscall_1.h"
#include "_syscall_2.h"
#include "_syscall_3.h"
#include "_syscall_4.h"
#include "_syscall_5.h"
#include "_syscall_6.h"
