#pragma once
#include "Collection.h"

template <typename T> class List : public Collection<T>
{
    public:
    virtual T& operator[](uint index) = 0;
};