#ifndef __Vector3D_H_
#define __Vector3D_H_


#include "Matrix3D.h"

class Matrix3D;

class Vector3D {
public:
    Vector3D(float x = 0, float y = 0, float z = 0, float w = 1);

    static float distanceBetween(Vector3D const &vector1, Vector3D const &vector2);

    static float dotProduct(Vector3D const &vector1, Vector3D const &vector2);

    static float angleBetween(Vector3D const &vector1, Vector3D const &vector2);

    static Vector3D crossProduct(Vector3D const &vector1, Vector3D const &vector2);

    float x() const;
    void x(float value);

    float y() const;
    void y(float value);

    float z() const;
    void z(float value);

    float w() const;
    void w(float value);

    float length() const;
    void length(float value);

    void multiplyByScalar(float scalar);

    void normalize();

    void add(Vector3D const &vector);

    void subtract(Vector3D const &vector);

    bool isEqualTo(Vector3D const &vector) const;

    void multiplyByMatrix(Matrix3D const &matrix);

    Vector3D clone() const;

    float operator*(Vector3D& v) const;

    Vector3D operator+(Vector3D& v) const;

    Vector3D operator-(Vector3D& v) const;

    Vector3D operator/(Vector3D& v) const;

    Vector3D operator*(float scalar) const;

    Vector3D operator*(Matrix3D& m) const;

    bool operator==(Vector3D& v) const;

private:
    float _x;
    float _y;
    float _z;
    float _w;
    mutable float _length;
    mutable bool _lengthNeedsUpdate = true;

    static float _squareRootOfSquareSums(float a, float b, float c);

    void _updateLength() const;

    void _setLengthValue(float value) const;

    bool _isZero();
};


#endif //__Vector3D_H_
