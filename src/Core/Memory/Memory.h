#pragma once
#include "StaticAllocator.h"
#include "DynamicAllocator.h"

StaticAllocator staticHeap = StaticAllocator();
DynamicAllocator dynamicHeap = DynamicAllocator();

template<typename T> StaticPointer<T> staticNew(T value)
{
    return staticHeap.allocate<T>(value);
}
template<typename T> DynamicPointer<T> dynamicNew(T value)
{
    return dynamicHeap.allocate<T>(value);
}
void clearHeap()
{
    dynamicHeap.clear();
}