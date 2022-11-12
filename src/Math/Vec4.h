#pragma once
#include "Vec3.h"
#include "Vec2.h"

struct Vec4
{
    float x;
    float y;
    float z;
    float w;
    Vec4();
    Vec4(float x, float y, float z, float w);

    float length() const;
    Vec4 normalized() const;
    Vec2 xy() const;
    Vec3 xyz() const;
};

Vec4 operator + (Vec4 a, Vec4 b);
Vec4 operator - (Vec4 a, Vec4 b);
Vec4 operator * (Vec4 a, Vec4 b);
Vec4 operator / (Vec4 a, Vec4 b);
Vec4 operator * (Vec4 a, float b);
Vec4 operator / (Vec4 a, float b);

float dot(Vec4 a, Vec4 b);