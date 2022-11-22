#pragma once
#include "StaticAllocator.h"
#include "DynamicAllocator.h"

StaticAllocator staticHeap = StaticAllocator();
DynamicAllocator dynamicHeap = DynamicAllocator();

template<typename T> Pointer<T> staticNew(T value)
{
    return staticHeap.allocate<T>(value);
}
template<typename T> Pointer<T> dynamicNew(T value)
{
    return dynamicHeap.allocate<T>(value);
}
void clearHeap()
{
    dynamicHeap.clear();
}