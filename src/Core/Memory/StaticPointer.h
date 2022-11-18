#pragma once
#include "Pointer.h"

template<typename T> class StaticPointer : public Pointer<T>
{
    public:
    StaticPointer(T* ptr) : Pointer<T>(ptr) { }
};