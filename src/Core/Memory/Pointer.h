#pragma once

template <typename T> class Pointer
{
    T* nativePtr;
    protected:
    Pointer(T* nativePtr);
    public:
    T* operator -> ();
    T operator *() const;
};