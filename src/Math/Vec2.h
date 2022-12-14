#pragma once

struct Vec2
{
    float x;
    float y;
    Vec2();
    Vec2(float x, float y);
    float length() const;
    Vec2 normalized() const;
};

Vec2 operator + (Vec2 a, Vec2 b);
Vec2 operator - (Vec2 a, Vec2 b);
Vec2 operator * (Vec2 a, Vec2 b);
Vec2 operator / (Vec2 a, Vec2 b);
Vec2 operator * (Vec2 a, float b);
Vec2 operator / (Vec2 a, float b);

float dot(Vec2 a, Vec2 b);