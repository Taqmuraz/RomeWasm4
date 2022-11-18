#include <initializer_list>
#include "../Foundation.h"
#include "Collection.h"

template<typename T, uint Size> class Array : public Collection<T>
{
    T buffer[Size];
    public:
    Array(std::initializer_list<T> initializer);
    T& operator[](uint index);
    uint length() const;
};