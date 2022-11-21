#pragma once
#include "Allocator.h"
#include "DynamicPointer.h"

class DynamicAllocator : public Allocator
{
    public:
    template <typename T> DynamicPointer<T> allocate(T value)
    {
        T* ptr = (T*)allocateNative(sizeof(T));
        cloneValue((byte*)&value, (byte*)ptr, sizeof(T));
        return ptr;
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