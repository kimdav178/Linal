//
// Created by david on 30.03.2020.
//

#ifndef LINAL_VECTOR2D_H
#define LINAL_VECTOR2D_H

#include <iostream>
#include <cmath>
#include <fstream>
using namespace std;

class Vector2D {
protected:
    double x;
    double y;
public:
    Vector2D(); //Конструктор по умолчанию (координаты равны нулю)
    Vector2D(double x, double y);   //Конструктор по двум координатам
    ~Vector2D();    //Деструктор

    double getX() const;    //Возвращает координату х

    double getY() const;    //Возвращает координату у

    void setX(double x);    //Устанавливает новое значение х

    void setY(double y);    //Устанавливает новое значение у

    double length ();    // Возваращает длину вектора

    double angle (Vector2D a);    // Возвращает угол между двумя векторами (в радианах!)

    bool operator== (const Vector2D& v2) const; //Оператор сравнения двух векторов

    bool operator!= (const Vector2D& v2) const; //Оператор неравенства

    void operator *= (double a);    //Присвоить значение, умноженное на число

    void operator += (Vector2D a);  //Присвоить значение, к которому прибавлен другой вектор

    Vector2D operator+ (const Vector2D& v2) const;  //Оператор сложения двух векторов

    Vector2D operator- (const Vector2D& v2) const;  //Оператор вычитания двух векторов

    Vector2D operator* (const double &a) const; //Оператор умножения вектора на число
};

Vector2D operator* (double a, const Vector2D v);    //Оператор умножения вектора на число

ostream& operator<<(ostream& os, const Vector2D& v);    //Вывод вектора в поток

istream& operator>>(istream &is, Vector2D& v); //Инициализация вектора из потока


#endif //LINAL_VECTOR2D_H
