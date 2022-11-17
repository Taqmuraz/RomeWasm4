#pragma once
#include "../Foundation.h"

class Allocator
{
    uint byteCounter;
    protected:
    virtual void* memoryStart() = 0;
    virtual uint memorySize() = 0;
    void* allocateNative(uint size);
    void reset();
    public:
    Allocator();
};