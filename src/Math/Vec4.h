struct Vec4
{
    float x;
    float y;
    float z;
    float w;
    Vec4();
    Vec4(float x, float y, float z, float w);

    float length();
    Vec4 normalized();
};

Vec4 operator + (Vec4 a, Vec4 b);
Vec4 operator - (Vec4 a, Vec4 b);
Vec4 operator * (Vec4 a, Vec4 b);
Vec4 operator / (Vec4 a, Vec4 b);
Vec4 operator * (Vec4 a, float b);
Vec4 operator / (Vec4 a, float b);

float dot(Vec4 a, Vec4 b);