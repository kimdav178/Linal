//
// Created by david on 30.03.2020.
//

#include "Matrix.h"

using namespace std;

Matrix::Matrix(unsigned int m, unsigned int n) {
    this->m = m;
    this->n = n;
    for (unsigned int i = 0; i < m; i++)
        for (unsigned int j = 0; j < n; j++)
            a[i][j] = 0;
}

Matrix::~Matrix() {
    delete[]a;
    m = 0;
    n = 0;
}

unsigned int Matrix::getM() {
    return m;
}

unsigned int Matrix::getN() {
    return n;
}

double Matrix::getA(unsigned int i, unsigned int j) {
    return a[i][j];
}

void Matrix::setA(unsigned int i, unsigned int j, double x) {
    a[i][j] = x;
}

double Matrix::det() {
    for (unsigned int k = 0; k < n; k++) {
        Matrix b(m - 1, n - 1);
        for (unsigned int i = 0; i < m - 1; i++) {
            for (unsigned int j = 0; j < n - 1; j++) {
                if ((i != 0) && (j < k)) {
                    b.setA(i - 1, j, this->getA(i, j));
                }
                if ((i != 0) && (j > k)) {
                    b.setA(i - 1, j - 1, this->getA(i, j));
                }
            }
        }
        if (m == 1) return this->getA(0, 0);
        this->d = this->d + ((-1) ^ (k)) * b.det();
    }
    return this->d;
}

bool Matrix::operator==(Matrix b) {
    if ((m != b.getM()) || (n != b.getN()))
        return false;
    for (unsigned int i = 0; i < m; i++)
        for (unsigned int j = 0; j < n; j++) {
            if (a[i][j] != b.getA(i, j)) return false;
        }
    return true;
}

bool Matrix::operator!=(Matrix b) {
    return !((*this) == b);
}

Matrix Matrix::operator+(Matrix b) {
    Matrix c(m, n);
    for (unsigned int i = 0; i < m; i++)
        for (unsigned int j = 0; j < n; j++)
            c.setA(i, j, this->a[i][j] + b.getA(i, j));
    return c;
}

Matrix Matrix::operator-(Matrix b) {
    Matrix c(m, n);
    for (unsigned int i = 0; i < m; i++)
        for (unsigned int j = 0; j < n; j++)
            c.setA(i, j, this->a[i][j] - b.getA(i, j));
    return c;
}

void Matrix::operator=(Matrix b) {
    for (unsigned int i = 0; i < m; i++)
        for (unsigned int j = 0; j < n; j++)
            a[i][j] = b.getA(i, j);
}

Matrix Matrix::operator*(double b) {
    Matrix c(m, n);
    for (unsigned int i = 0; i < m; i++)
        for (unsigned int j = 0; j < n; j++)
            c.setA(i, j, c.getA(i, j) * b);
    return c;
}

Matrix Matrix::operator/(double b) {
    Matrix c(m, n);
    for (unsigned int i = 0; i < m; i++)
        for (unsigned int j = 0; j < n; j++)
            c.setA(i, j, c.getA(i, j) / b);
    return c;
}

Matrix Matrix::operator*(Matrix b) {
    Matrix c(m, b.getN());
    for (unsigned int i = 0; i < m; i++)
        for (unsigned int j = 0; j < n; j++)
            for (unsigned int k = 0; k < n; k++)
                c.setA(i, j, c.getA(i, j) + a[i][k] * b.getA(k, j));
    return c;
}

Matrix operator*(double b, Matrix a) {
    Matrix c(a.getM(), a.getN());
    for (unsigned int i = 0; i < a.getM(); i++)
        for (unsigned int j = 0; j < a.getN(); j++)
            c.setA(i, j, a.getA(i, j) * b);
    return c;
}

ostream &operator<<(ostream &os, Matrix &a) {
    os << a.getM() << " " << a.getN() << endl;
    for (unsigned int i = 0; i < a.getM(); i++) {
        for (unsigned int j = 0; j < a.getN(); j++) {
            os << a.getA(i, j) << " ";
        }
        os << endl;
    }
    return os;
}

istream &operator>>(istream &is, Matrix &a) {
    double c;
    for (unsigned int i = 0; i < a.getM(); i++) {
        for (unsigned int j = 0; j < a.getN(); j++) {
            is >> c;
            a.setA(i, j, c);
        }
    }
    return is;
}