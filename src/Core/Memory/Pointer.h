#pragma once

template <typename T> class Pointer
{
    T* nativePtr;
    protected:
    Pointer(T* nativePtr)
    {
        this->nativePtr = nativePtr;
    }
    public:
    T* operator -> ()
    {
        return nativePtr;
    }
    T operator *() const
    {
        return *nativePtr;
    }
};