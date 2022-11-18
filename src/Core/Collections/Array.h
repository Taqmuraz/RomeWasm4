#pragma once
#include <initializer_list>
#include "../Foundation.h"
#include "Collection.h"

template<typename T, uint Size> class Array : public Collection<T>
{
    T buffer[Size];
    public:
    Array(std::initializer_list<T> initializer)
    {
        const T* begin = initializer.begin();
        for (uint i = 0; i < Size; i++) buffer[i] = begin[i];
    }
    T& operator[](uint index)
    {
        return buffer[index];
    }
    uint length() const
    {
        return Size;
    }
};