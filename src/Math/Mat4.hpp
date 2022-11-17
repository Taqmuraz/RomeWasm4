#pragma once
#include "Vec3.hpp"
#include "Vec4.hpp"

struct Mat4
{
    Vec4 col0;
    Vec4 col1;
    Vec4 col2;
    Vec4 col3;
    Mat4(Vec4 col0, Vec4 col1, Vec4 col2, Vec4 col3);

    Vec3 multiplyPoint(Vec3 point) const;
    Vec3 multiplyVector(Vec3 vector) const;
    Vec3 multiplyDirection(Vec3 direction) const;

    Mat4 transposed() const;
    Mat4 inversed() const;
    Mat4 inversedTransform() const;
    Mat4 extractRotation() const;
    Vec4 line(int index) const;

    static Mat4 createIdentity();
    static Mat4 createRotation(Vec3 euler);
    static Mat4 createTranslation(Vec3 pos);
    static Mat4 createFrustum(float fov, float aspect, float near, float far);
    static Mat4 createViewport(float width, float height);
};

Mat4 operator * (const Mat4& a, const Mat4& b);
Vec4 operator * (const Mat4& m, Vec4 v);