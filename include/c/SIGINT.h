#ifndef SIGINT

#if defined(__linux__) || defined(__FreeBSD__)
#  define SIGINT 2
#else
#  error
#endif

#endif
