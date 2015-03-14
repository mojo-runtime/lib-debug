#ifndef __syscall5

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-id-macro"

#if defined(__linux__) && defined(__x86_64__)
#  include "__Word.h"
#  define __syscall5(n, a1, a2, a3, a4, a5)                             \
  _Pragma("clang diagnostic push")                                      \
  _Pragma("clang diagnostic ignored \"-Wgnu-statement-expression\"")    \
    ({                                                                  \
        __Word                                                          \
        result;                                                         \
                                                                        \
        register decltype(a1) r1 asm ("rdi") = a1;                      \
        register decltype(a2) r2 asm ("rsi") = a2;                      \
        register decltype(a3) r3 asm ("rdx") = a3;                      \
        register decltype(a4) r4 asm ("r10") = a4;                      \
        register decltype(a5) r5 asm ("r8")  = a5;                      \
                                                                        \
        asm volatile (                                                  \
            "syscall"                                                   \
            : "=a" (result)                                             \
            : "0" (n), "r" (r1), "r" (r2), "r" (r3), "r" (r4), "r" (r5) \
            : "rcx", "r11"                                              \
        );                                                              \
                                                                        \
        result;                                                         \
    })                                                                  \
  _Pragma("clang diagnostic pop")
#else
#  error
#endif

#pragma clang diagnostic pop

#endif
