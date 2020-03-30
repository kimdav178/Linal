//
// Created by david on 21.03.2020.
//

#ifndef LINAL_VECTORN_H
#define LINAL_VECTORN_H

#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

class VectorN {
protected:
    unsigned int dim;   // Размерность вектора
    double* x;  // Указатель на массив коордиат
public:
    VectorN(unsigned int n);    // Конструктор n-мерного вектора
    ~VectorN(); //Деструктор
    unsigned int getSize() const;   // Возвращает размерность вектора
    double getValue(unsigned int i) const;  // Возвращает i-ю координату вектора
    void setValue(unsigned int i, double value);    // Устанавливает i-ю координату вектора
    bool operator== (const VectorN& v) const;   // Оператор сравнения
    bool operator!= (const VectorN& v) const;   // Оператор неравенства
    VectorN operator+ (const VectorN& v);   // Оператор сложения
    VectorN operator* (const double & a);   // Умножение вектора на число
    double length ();   // Возвращает длину вектора
    double angle (VectorN a);   // Возвращает угол между двумя векторами (в радианах!) Не является оператором!!!
};

VectorN operator* (double a,VectorN& v);    // Умножение числа на вектор

ostream& operator<<(ostream& os, const Vector2D& v);    //Вывод вектора в поток

istream& operator>>(istream &is, Vector2D& v);  //Инициалиация вектора из потока


#endif //LINAL_VECTORN_H
