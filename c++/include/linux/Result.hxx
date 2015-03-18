#pragma once

#include "compat/__Word.h"

namespace linux {

struct Result
{
    explicit
    Result(__Word word)
        : __word(word)
    {
    }

    //----------------------------------------------------------------------------------------------

    bool
    is_error() const noexcept
    {
        return this->__word > 0xFFFFFFFFFFFFF000UL;
    }

    bool
    is_ok() const noexcept
    {
        return !this->is_error();
    }

    //----------------------------------------------------------------------------------------------

    template <typename Error>
    Error
    error() const noexcept
    {
        return static_cast<Error>(-this->__word);
    }

    template <typename Ok>
    Ok
    ok() const noexcept
    {
        return static_cast<Ok>(this->__word);
    }

    //----------------------------------------------------------------------------------------------

  private:
    __Word
    __word;
};

}