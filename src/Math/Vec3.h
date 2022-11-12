struct Vec3
{
    float x;
    float y;
    float z;
    Vec3();
    Vec3(float x, float y, float z);
    float length();
    Vec3 normalized();
};

Vec3 operator + (Vec3 a, Vec3 b);
Vec3 operator - (Vec3 a, Vec3 b);
Vec3 operator * (Vec3 a, Vec3 b);
Vec3 operator / (Vec3 a, Vec3 b);
Vec3 operator * (Vec3 a, float b);
Vec3 operator / (Vec3 a, float b);

float dot(Vec3 a, Vec3 b);