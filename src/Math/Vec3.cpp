#include "Vec3.h"
#include "Math.h"

Vec3::Vec3()
{
    this->x = 0;
    this->y = 0;
    this->z = 0;
}
Vec3::Vec3(float x, float y, float z)
{
    this->x = x;
    this->y = y;
    this->z = z;
}

float Vec3::length() const
{
    return sqrt(x * x + y * y);
}
Vec3 Vec3::normalized() const
{
    return *this / length();
}

Vec2 Vec3::xy() const
{
    return Vec2(x, y);
}

Vec3 operator + (Vec3 a, Vec3 b)
{
    return Vec3(a.x + b.x, a.y + b.y, a.z + b.z);
}
Vec3 operator - (Vec3 a, Vec3 b)
{
    return Vec3(a.x - b.x, a.y - b.y, a.z - b.z);
}
Vec3 operator * (Vec3 a, Vec3 b)
{
    return Vec3(a.x * b.x, a.y * b.y, a.z * b.z);
}
Vec3 operator / (Vec3 a, Vec3 b)
{
    return Vec3(safeDiv(a.x, b.x), safeDiv(a.y, b.y), safeDiv(a.z, b.z));
}
Vec3 operator * (Vec3 a, float b)
{
    return Vec3(a.x * b, a.y * b, a.z * b);
}
Vec3 operator / (Vec3 a, float b)
{
    return safeDivExplicit(b, Vec3(), Vec3(a.x / b, a.y / b, a.z / b));
}

float dot(Vec3 a, Vec3 b)
{
    return a.x * b.x + a.y * b.y + a.z * b.z;
}