#ifndef x_has_attribute_unused
#  ifdef __has_attribute
#    define x_has_attribute_unused __has_attribute(__unused__)
#  elif defined (__GNUC__)
#    define x_has_attribute_unused 1 /* assuming */
#  else
#    error todo
#  endif
#endif
