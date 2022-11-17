#pragma once
#include "Allocator.h"
#include "StaticPointer.h"

class StaticAllocator : public Allocator
{
    public:
    template <typename T> StaticPointer<T> allocate(T &&value);
    protected:
    void* memoryStart() override;
    uint memorySize() override;
};