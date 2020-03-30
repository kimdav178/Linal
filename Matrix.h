//
// Created by david on 30.03.2020.
//

#ifndef LINAL_MATRIX_H
#define LINAL_MATRIX_H

#include <iostream>

using namespace std;

class Matrix {
protected:
    unsigned int m; //Число строк
    unsigned int n; //Число столбцов
    double a[][100]; //Двумерный массив элементов

public:
    Matrix(unsigned int m, unsigned int n);

    ~Matrix();

    unsigned int getM();

    unsigned int getN();

    double getA(unsigned int i, unsigned int j);

    void setA(unsigned int i, unsigned int j, double x);

    double det();

    bool operator==(Matrix b);

    bool operator!=(Matrix b);

    Matrix operator=(Matrix b);

    Matrix operator+(Matrix b);

    Matrix operator-(Matrix b);

    Matrix operator*(Matrix b);

    Matrix operator*(double b);
};

Matrix operator*(double b, Matrix a);

ostream &operator<<(ostream &os, Matrix &a);

istream &operator>>(istream &is, Matrix &a);

#endif //LINAL_MATRIX_H