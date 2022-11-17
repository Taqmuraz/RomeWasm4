#pragma once
#include "Vec2.hpp"

struct Vec3
{
    float x;
    float y;
    float z;
    Vec3();
    Vec3(float x, float y, float z);
    float length() const;
    Vec3 normalized() const;
    Vec2 xy() const;
};

Vec3 operator + (Vec3 a, Vec3 b);
Vec3 operator - (Vec3 a, Vec3 b);
Vec3 operator * (Vec3 a, Vec3 b);
Vec3 operator / (Vec3 a, Vec3 b);
Vec3 operator * (Vec3 a, float b);
Vec3 operator / (Vec3 a, float b);

float dot(Vec3 a, Vec3 b);