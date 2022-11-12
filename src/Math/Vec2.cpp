#include "Vec2.h"
#include "Math.h"

Vec2::Vec2()
{
    this->x = 0;
    this->y = 0;
}
Vec2::Vec2(float x, float y)
{
    this->x = x;
    this->y = y;
}

float Vec2::length()
{
    return sqrt(x * x + y * y);
}
Vec2 Vec2::normalized()
{
    return *this / length();
}

Vec2 operator + (Vec2 a, Vec2 b)
{
    return Vec2(a.x + b.x, a.y + b.y);
}
Vec2 operator - (Vec2 a, Vec2 b)
{
    return Vec2(a.x - b.x, a.y - b.y);
}
Vec2 operator * (Vec2 a, Vec2 b)
{
    return Vec2(a.x * b.x, a.y * b.y);
}
Vec2 operator / (Vec2 a, Vec2 b)
{
    return Vec2(safeDiv(a.x, b.x), safeDiv(a.y, b.y));
}
Vec2 operator * (Vec2 a, float b)
{
    return Vec2(a.x * b, a.y * b);
}
Vec2 operator / (Vec2 a, float b)
{
    return safeDivExplicit(b, Vec2(), Vec2(a.x / b, a.y / b));
}
float dot(Vec2 a, Vec2 b)
{
    return a.x * b.x + a.y * b.y;
}