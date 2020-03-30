//
// Created by david on 30.03.2020.
//

#ifndef LINAL_VECTOR2D_H
#define LINAL_VECTOR2D_H

#include <cmath>
#include <fstream>
using namespace std;

class Vector2D {
protected:
    double x;
    double y;
public:
    Vector2D();
    Vector2D(double x, double y);
    ~Vector2D();

    double getX() const;

    double getY() const;

    void setX(double x);

    void setY(double y);

    double length ();    // Возваращает длину вектора

    double angle (Vector2D a);    // Возвращает угол между двумя векторами (в радианах!)

    bool operator== (const Vector2D& v2) const;

    bool operator!= (const Vector2D& v2) const;

    void operator *= (double a);

    void operator += (Vector2D a);

    Vector2D operator+ (const Vector2D& v2) const;

    Vector2D operator- (const Vector2D& v2) const;

    Vector2D operator* (const double &a) const;
};

Vector2D operator* (double a, const Vector2D v);

ostream& operator<<(ostream& os, const Vector2D& v);

istream& operator>>(istream &is, Vector2D& v);


#endif //LINAL_VECTOR2D_H
