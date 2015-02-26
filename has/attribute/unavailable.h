#ifndef has_attribute_unavailable
#  ifdef __has_attribute
#    define has_attribute_unavailable __has_attribute(__unavailable__)
#  elif defined __GNUC__
#    define has_attribute_unavailable 0 /* XXX: assuming */
#  else
#    error todo
#  endif
#endif