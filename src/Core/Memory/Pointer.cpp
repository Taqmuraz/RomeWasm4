#include "Pointer.h"

template<typename T> T* Pointer<T>::operator -> ()
{
    return this->nativePtr;
}
template<typename T> Pointer<T>::Pointer(T* nativePtr)
{
    this->nativePtr = nativePtr;
}
template<typename T> T Pointer<T>::operator *() const
{
    return nativePtr;
}