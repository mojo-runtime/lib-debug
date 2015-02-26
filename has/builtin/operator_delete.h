#ifndef has_builtin_operator_delete
#  ifdef __has_builtin
#    define has_builtin_operator_delete __has_builtin(__builtin_operator_delete)
#  elif defined __GNUC__
#    define has_builtin_operator_delete 0 /* assuming */
#  else
#    error todo
#  endif
#endif
