#ifndef has_builtin_offsetof
// Workaround: clang (3.6.0) returns false here
// ifdef __has_builtin
//    define has_builtin_offsetof __has_builtin(__builtin_offsetof)
#  if defined __GNUC__
#    define has_builtin_offsetof 1 /* assuming */
#  else
#    error todo
#  endif
#endif
