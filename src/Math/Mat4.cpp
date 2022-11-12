#include "Mat4.h"
#include "Vec4.h"

const Mat4 Identity = Mat4(Vec4(1, 0, 0, 0), Vec4(0, 1, 0, 0), Vec4(0, 0, 1, 0), Vec4(0, 0, 0, 1));

Mat4::Mat4(Vec4 col0, Vec4 col1, Vec4 col2, Vec4 col3)
{
    this->col0 = col0;
    this->col1 = col1;
    this->col2 = col2;
    this->col3 = col3;
}
Vec3 Mat4::multiplyPoint(Vec3 point) const
{
    return (*this * Vec4(point.x, point.y, point.z, 1)).xyz();
}
Vec3 Mat4::multiplyVector(Vec3 vector) const
{
    return (*this * Vec4(vector.x, vector.y, vector.z, 0)).xyz();
}
Vec3 Mat4::multiplyDirection(Vec3 direction) const
{
    return (this->extractRotation() * Vec4(direction.x, direction.y, direction.z, 0)).xyz();
}
Mat4 Mat4::extractRotation() const
{
    return Mat4(col0.normalized(), col1.normalized(), col2.normalized(), Identity.col3);
}
Mat4 Mat4::transposed() const
{
    return Mat4(line(0), line(1), line(2), line(3));
}
Vec4 Mat4::line(int index) const
{
    switch(index)
    {
        case 0: return Vec4(col0.x, col1.x, col2.x, col3.x);
        case 1: return Vec4(col0.y, col1.y, col2.y, col3.y);
        case 2: return Vec4(col0.z, col1.z, col2.z, col3.z);
        case 3: return Vec4(col0.w, col1.w, col2.w, col3.w);
        default: return Vec4();
    }
}
Mat4 Mat4::createIdentity()
{
    return Identity;
}
Mat4 Mat4::createRotation(Vec3)
{
    return Identity;
}
Mat4 Mat4::createFrustum(float, float, float, float)
{
    return Identity;
}
Mat4 Mat4::createViewport(float, float)
{
    return Identity;
}
Mat4 Mat4::createTranslation(Vec3 position)
{
    return Mat4(Identity.col0, Identity.col1, Identity.col2, Vec4(position.x, position.y, position.z, 1));
}