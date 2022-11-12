#include "Vec4.h"

struct Mat4
{
    Vec4 col0;
    Vec4 col1;
    Vec4 col2;
    Vec4 col3;
    Mat4(Vec4 col0, Vec4 col1, Vec4 col2, Vec4 col3);

    Mat4 inversed();
    Mat4 inversedTransform();
};
const Mat4 Identity = Mat4(Vec4(1, 0, 0, 0), Vec4(0, 1, 0, 0), Vec4(0, 0, 1, 0), Vec4(0, 0, 0, 1));

Mat4 operator * (Mat4 a, Mat4 b);
Vec4 operator * (Mat4 m, Vec4 v);