#ifndef SIGILL

#if defined(__linux__) || defined(__FreeBSD__)
#  define SIGILL 4
#else
#  error
#endif

#endif
