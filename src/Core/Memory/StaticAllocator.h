#pragma once
#include "Allocator.h"
#include "StaticPointer.h"

class StaticAllocator : public Allocator
{
    public:
    template <typename T> StaticPointer<T> allocate(T value)
    {
        T* ptr = (T*)allocateNative(sizeof(T));
        cloneValue((byte*)&value, (byte*)ptr, sizeof(T));
        return StaticPointer<T>(ptr);
    }
    protected:
    void* memoryStart() override
    {
        return (void*)0x19a0;
    }
    uint memorySize() override
    {
        return 29488;
    }
};