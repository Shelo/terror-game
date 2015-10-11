#include "vector2.h"
#include <math.h>

Vector2::Vector2() :
    x(0), y(0)
{}

Vector2::Vector2(float x, float y) :
    x(x), y(y)
{}

Vector2::Vector2(const Vector2 &o) :
    x(o.x), y(o.y)
{}

float Vector2::length() const
{
    return sqrt(x * x + y * y);
}

Vector2 Vector2::normalize()
{
    float length = this->length();
    x /= length;
    y /= length;
    return *this;
}

Vector2 Vector2::normalized() const
{
    Vector2 v(*this);
    v.normalize();
    return v;
}

void Vector2::set(float x, float y)
{
    this->x = x;
    this->y = y;
}

Vector2 operator+(const Vector2 &a, const Vector2 &b)
{
    return Vector2(a.x + b.x, a.y + b.y);
}

Vector2 operator-(const Vector2 &a, const Vector2 &b)
{
    return Vector2(a.x - b.x, a.y - b.y);
}

Vector2 operator*(const Vector2 &a, const Vector2 &b)
{
    return Vector2(a.x * b.x, a.y * b.y);
}

Vector2 operator/(const Vector2 &a, const Vector2 &b)
{
    return Vector2(a.x / b.x, a.y / b.y);
}

Vector2 operator*(const Vector2 &a, float b)
{
    return Vector2(a.x * b, a.y * b);
}

Vector2 operator/(const Vector2 &a, float b)
{
    return Vector2(a.x / b, a.y / b);
}

Vector2& Vector2::operator+=(const Vector2 &o)
{
    x += o.x;
    y += o.y;
    return *this;
}

Vector2& Vector2::operator-=(const Vector2 &o)
{
    x -= o.x;
    y -= o.y;
    return *this;
}

Vector2& Vector2::operator*=(const Vector2 &o)
{
    x *= o.x;
    y *= o.y;
    return *this;
}

Vector2& Vector2::operator/=(const Vector2 &o)
{
    x /= o.x;
    y /= o.y;
    return *this;
}

Vector2& Vector2::operator*=(float o)
{
    x *= o;
    y *= o;
    return *this;
}

Vector2& Vector2::operator/=(float o)
{
    x /= o;
    y /= o;
    return *this;
}
