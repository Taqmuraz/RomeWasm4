#include "Vec2.h"

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
    return Vec2(b.x == 0 ? 0 : (a.x / b.x), b.y == 0 ? 0 : (a.y / b.y));
}
Vec2 operator * (Vec2 a, float b)
{
    return Vec2(a.x * b, a.y * b);
}
Vec2 operator / (Vec2 a, float b)
{
    return b == 0 ? Vec2() : Vec2(a.x / b, a.y / b);
}
float dot(Vec2 a, Vec2 b)
{
    return a.x * b.x + a.y * b.y;
}