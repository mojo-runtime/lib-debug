#ifndef DT_CHR

#if defined(__linux__) || defined(__FreeBSD__)
#  define DT_CHR 2
#else
#  error
#endif

#endif
