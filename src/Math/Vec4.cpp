#include "Vec4.h"
#include "Vec3.h"
#include "Vec2.h"
#include "Math.h"

Vec4::Vec4()
{
    this->x = 0;
    this->y = 0;
    this->z = 0;
}
Vec4::Vec4(float x, float y, float z, float w)
{
    this->x = x;
    this->y = y;
    this->z = z;
    this->w = w;
}

Vec3 Vec4::xyz() const
{
    return Vec3(x, y, z);
}
Vec2 Vec4::xy() const
{
    return Vec2(x, y);
}

float Vec4::length() const
{
    return sqrt(x * x + y * y);
}
Vec4 Vec4::normalized() const
{
    return *this / length();
}

Vec4 operator + (Vec4 a, Vec4 b)
{
    return Vec4(a.x + b.x, a.y + b.y, a.z + b.z, a.w + b.w);
}
Vec4 operator - (Vec4 a, Vec4 b)
{
    return Vec4(a.x - b.x, a.y - b.y, a.z - b.z, a.w - b.w);
}
Vec4 operator * (Vec4 a, Vec4 b)
{
    return Vec4(a.x * b.x, a.y * b.y, a.z * b.z, a.w * b.w);
}
Vec4 operator / (Vec4 a, Vec4 b)
{
    return Vec4(safeDiv(a.x, b.x), safeDiv(a.y, b.y), safeDiv(a.z, b.z), safeDiv(a.w, b.w));
}
Vec4 operator * (Vec4 a, float b)
{
    return Vec4(a.x * b, a.y * b, a.z * b, a.w * b);
}
Vec4 operator / (Vec4 a, float b)
{
    return safeDivExplicit(b, Vec4(), Vec4(a.x / b, a.y / b, a.z / b, a.w / b));
}