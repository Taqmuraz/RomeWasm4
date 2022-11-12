#include "Vec3.h"
#include "Vec4.h"

struct Mat4
{
    Vec4 col0;
    Vec4 col1;
    Vec4 col2;
    Vec4 col3;
    Mat4(Vec4 col0, Vec4 col1, Vec4 col2, Vec4 col3);

    Vec3 multiplyPoint(Vec3 point);
    Vec3 multiplyVector(Vec3 vector);
    Vec3 multiplyDirection(Vec3 direction);

    Mat4 transposed();
    Mat4 inversed();
    Mat4 inversedTransform();

    static Mat4 createRotation(Vec3 euler);
    static Mat4 createTranslation(Vec3 pos);
    static Mat4 createFrustum(float fov, float aspect, float near, float far);
    static Mat4 createViewport(float width, float height);
};
const Mat4 Identity = Mat4(Vec4(1, 0, 0, 0), Vec4(0, 1, 0, 0), Vec4(0, 0, 1, 0), Vec4(0, 0, 0, 1));

Mat4 operator * (const Mat4& a, const Mat4& b);
Vec4 operator * (const Mat4& m, Vec4 v);