//
// Created by david on 21.03.2020.
//

#ifndef LINAL_VECTORN_H
#define LINAL_VECTORN_H


class VectorN {
protected:
    unsigned int dim;   // Размерность вектора
    double* x;  // Указатель на массив коордиат
public:
    VectorN(unsigned int n);    // Конструктор n-мерного вектора
    ~VectorN();
    unsigned int getSize() const;   // Возвращает размерность вектора
    double getValue(unsigned int i) const;  // Возвращает i-ю координату вектора
    void setValue(unsigned int i, double value);    // Устанавливает i-ю координату вектора
    bool operator== (const VectorN& v) const;
    bool operator!= (const VectorN& v) const;
    VectorN operator+ (const VectorN& v);
    VectorN operator* (const int& a);   // Скалярное произведение векторов
    double length ();   // Возвращает длину вектора
    double angle (VectorN a);   // Возвращает угол между двумя векторами (в радианах!) Не является оператором!!!
};

VectorN operator* (double a,VectorN& v);    // Умножение числа на вектор


#endif //LINAL_VECTORN_H
