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
    double d;       // Детерминант
    double a[][100]; //Двумерный массив элементов

public:
    Matrix(unsigned int m, unsigned int n); //Конструктор через размеры матрицы

    ~Matrix();  //Деструктор

    unsigned int getM();    // Возвращает число строк

    unsigned int getN();    // Возвращает число столбцов

    double getA(unsigned int i, unsigned int j);    // Возвращает элемент i-й строки j-го столбца

    void setA(unsigned int i, unsigned int j, double x);    // Меняет значение элемента i-й строки j-го столбца

    double det();   // Возвращает детерминант матрицы

    bool operator==(Matrix b);  // Оператор сравнения для матриц

    bool operator!=(Matrix b);  // Оператор неравенства для матриц

    void operator=(Matrix b); // Оператор присвоения для матриц

    Matrix operator+(Matrix b); // Оператор сложения

    Matrix operator-(Matrix b); // Оператор вычитания

    Matrix operator*(Matrix b); // Оператор умножения на матрицу

    Matrix operator*(double b); // Оператор умножения матрицы на число

    Matrix operator/(double b); // Оператор деления матрицы на число
};

Matrix operator*(double b, Matrix a);   // Оператор умножения числа на матрицу

ostream &operator<<(ostream &os, Matrix &a);    // Оператор вывода матрицы в поток

istream &operator>>(istream &is, Matrix &a);    // Оператор ввода матрицы из потока

#endif //LINAL_MATRIX_H