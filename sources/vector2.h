#ifndef VECTOR2_H
#define VECTOR2_H


class Vector2
{
public:
    float x;
    float y;

    Vector2(float x, float y);
    Vector2();
    Vector2(const Vector2& o);

    void set(float x, float y);

    Vector2 normalize();

    Vector2 normalized() const;
    float length() const;

    friend Vector2 operator+(const Vector2 &a, const Vector2 &b);
    friend Vector2 operator-(const Vector2 &a, const Vector2 &b);
    friend Vector2 operator*(const Vector2 &a, const Vector2 &b);
    friend Vector2 operator/(const Vector2 &a, const Vector2 &b);

    friend Vector2 operator*(const Vector2 &a, float b);
    friend Vector2 operator/(const Vector2 &a, float b);

    Vector2& operator+=(const Vector2 &o);
    Vector2& operator-=(const Vector2 &o);
    Vector2& operator*=(const Vector2 &o);
    Vector2& operator/=(const Vector2 &o);

    Vector2& operator*=(float o);
    Vector2& operator/=(float o);
};

#endif // VECTOR2_H
