#include "Allocator.h"

void* Allocator::allocateNative(uint size)
{
    byte* ptr = (byte*)memoryStart() + byteCounter;
    for (uint i = 0; i < size; i++) ptr[i] = 0;
    byteCounter += size;
    return ptr;
}
Allocator::Allocator()
{
    byteCounter = 0;
}
void Allocator::reset()
{
    byteCounter = 0;
}
void Allocator::cloneValue(byte* src, byte* dst, uint size)
{
    for (uint i = 0; i < size; i++) dst[i] = src[i]; 
}