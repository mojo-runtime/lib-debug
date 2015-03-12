#ifndef _elf_InitialStack_hxx_
#define _elf_InitialStack_hxx_

#include "machine/Byte.hxx"
#include "machine/Word.hxx"

namespace elf {

struct InitialStack
{
    // The "structure" on top of the stack after process initialization.

    machine::Word
    argc() const
    {
        return this->__argument_count;
    }

    machine::Byte**
    argv()
    {
        return this->__argument_pointers;
    }

    machine::Byte**
    envp()
    {
        return this->argv() + this->argc() + 1;
    }

  private:
    // See: http://www.x86-64.org/documentation/abi.pdf
    //      http://asm.sourceforge.net/articles/startup.html

    // Argument count

    machine::Word
    __argument_count;

    // Argument pointers

    machine::Byte*
    __argument_pointers[1]; // At least 1 - NULL terminated

    // Environment pointers …
    // 0
    // Auxiliary vector entries …
    // Null auxiliary vector entry
    // Unspecified
    // Information block …
    // Unspecified
};

}

#endif
