//
// Created by david on 01.04.2020.
//

#include <iostream>
#include "Vector2D.h"
#include "Matrix.h"
#include "VectorN.h"

using namespace std;

int main() {
    Matrix a(2, 2);
    a.setA(0, 0, 4);
    a.setA(1, 1, 3);
    a.setA(0, 1, 2);
    a.setA(1, 0, 5);
    double x = a.det();
    cout << x;
    return 0;
}