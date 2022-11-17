#pragma once
#include "Allocator.h"
#include "DynamicPointer.h"

class DynamicAllocator : public Allocator
{
    public:
    void clear();
    template <typename T> DynamicPointer<T> allocate(T value);
    protected:
    void* memoryStart() override;
    uint memorySize() override;
};