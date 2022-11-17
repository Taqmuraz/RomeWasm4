#include "Array.h"

template <typename T> T& Array<T>::operator[](uint index)
{
    return initializer[index];
}
template <typename T> uint Array<T>::length() const
{
    return initializer.size();
}
template <typename T> Array<T>::Array(std::initializer_list<T> initializer)
{
    this->initializer = initializer;
}