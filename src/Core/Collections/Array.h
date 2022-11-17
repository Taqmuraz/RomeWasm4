#include <initializer_list>
#include "../Foundation.h"
#include "Collection.h"

template<typename T> class Array : public Collection<T>
{
    std::initializer_list<T> initializer;
    public:
    Array(std::initializer_list<T> initializer);
    T& operator[](uint index);
    uint length() const;
};