#ifndef _c__uint_least32_t_h
#define _c__uint_least32_t_h

#ifdef __cplusplus
inline namespace c {
#endif

typedef
#ifdef __UINT_LEAST32_TYPE__
__UINT_LEAST32_TYPE__
#else
#  error
#endif
uint_least32_t;

#ifdef __cplusplus
} // inline namespace c
#endif

#endif
