#pragma once
#include "StaticAllocator.h"
#include "DynamicAllocator.h"

template<typename T> StaticPointer<T> staticNew(T &&value);
template<typename T> DynamicPointer<T> dynamicNew(T &&value);
void clearHeap();