#ifndef _c__char16_t_h
#define _c__char16_t_h

#ifdef __cplusplus
// Assuming C++11
#else
typedef
#  ifdef __CHAR16_TYPE__
__CHAR16_TYPE__
#  else
#    error
#  endif
char16_t;
#endif

#endif
