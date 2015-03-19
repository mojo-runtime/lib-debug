#pragma once

#include <EINVAL>
#include <EMFILE>
#include <ENFILE>
#include <ENOMEM>

namespace linux::epoll_create1 {

enum Error
{
#define _(name) _##name = name
    _(EINVAL),
    _(EMFILE),
    _(ENFILE),
    _(ENOMEM),
#undef _
};

}
