#ifndef EDOM

#if defined(__linux__) || defined(__FreeBSD__)
#  define EDOM 33
#else
#  error
#endif

#endif