#pragma once

#include <EFAULT>
#include <EINVAL>
#include <EMFILE>
#include <ENFILE>

namespace linux::pipe2 {

enum Error
{
#define _(name) _##name = name
    _(EFAULT),
    _(EINVAL),
    _(EMFILE),
    _(ENFILE),
#undef _
};

}
