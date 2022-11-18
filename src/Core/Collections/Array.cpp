#include "Array.h"

template <typename T, uint Size> T& Array<T, Size>::operator[](uint index)
{
     return buffer[index];
}
template <typename T, uint Size> uint Array<T, Size>::length() const
{
    return Size;
}
template <typename T, uint Size> Array<T, Size>::Array(std::initializer_list<T> initializer)
{
        const T* begin = initializer.begin();
        for (uint i = 0; i < Size; i++) buffer[i] = begin[i];
}