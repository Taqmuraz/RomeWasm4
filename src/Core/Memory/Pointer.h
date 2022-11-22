#pragma once

template <typename T> class Pointer
{
    T* nativePtr;
    public:
    Pointer(T* nativePtr)
    {
        this->nativePtr = nativePtr;
    }
    template<typename InT> Pointer(Pointer<InT> pointer)
    {
        *this = pointer.template cast<T>();
    }
    template<typename OutT> Pointer<OutT> cast()
    {
        return Pointer<OutT>((OutT*)nativePtr);
    } 
    T* operator -> ()
    {
        return nativePtr;
    }
    T operator *() const
    {
        return *nativePtr;
    }
};