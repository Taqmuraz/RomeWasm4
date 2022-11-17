#include "DynamicAllocator.h"

template <typename T> DynamicPointer<T> DynamicAllocator::allocate(T value)
{
    T* ptr = (T*)allocateNative(sizeof(T));
    *ptr = value;
    return ptr;
}
void* DynamicAllocator::memoryStart()
{
    return (void*)0x19a0;
}
uint DynamicAllocator::memorySize()
{
    return 29488;
}
void DynamicAllocator::clear()
{
    reset();
}