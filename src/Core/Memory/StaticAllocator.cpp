#include "StaticAllocator.h"

template <typename T> StaticPointer<T> StaticAllocator::allocate(T &&value)
{
    T* ptr = (T*)allocateNative(sizeof(T));
    *ptr = value;
    return StaticPointer<T>(ptr);
}
void* StaticAllocator::memoryStart()
{
    return (void*)(0x19a0 + 29488);
}
uint StaticAllocator::memorySize()
{
    return 29488;
}