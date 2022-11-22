#pragma once
#include "Allocator.h"
#include "Pointer.h"

class DynamicAllocator : public Allocator
{
    public:
    template <typename T> Pointer<T> allocate(T value)
    {
        T* ptr = (T*)allocateNative(sizeof(T));
        cloneValue((byte*)&value, (byte*)ptr, sizeof(T));
        return Pointer<T>(ptr);
    }
    void clear()
    {
        reset();
    }
    protected:
    void* memoryStart() override
    {
        return (void*)(0x19a0 + 29488);
    }
    uint memorySize() override
    {
        return 29488;
    }
};