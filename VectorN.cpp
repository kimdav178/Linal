//
// Created by david on 21.03.2020.
//

#include "VectorN.h"
#include <cmath>

VectorN::VectorN(unsigned int n)
{
    dim=n;
    double* a = new double[n];
    x=a;
}

VectorN::~VectorN()
{
    delete []x;
    dim=0;
}

unsigned int VectorN::getSize() const
{
    return dim;
}

double VectorN::getValue(unsigned int i) const
{
    return x[i];
}

void VectorN::setValue(unsigned int i, double value)
{
    x[i]=value;
}

bool VectorN::operator== (const VectorN& v) const
{
    bool b = true;
    for (unsigned int i = 0; i < getSize(); i++)
    {
        if (getValue(i) != v.getValue(i)) b=false;
    }
    return b;
}

bool VectorN::operator!= (const VectorN& v) const
{
    return !(*this == v);
}

VectorN VectorN::operator+ (const VectorN& v)
{
    VectorN f(getSize());
    for (unsigned int i=0; i<getSize(); i++)
    {
        f.setValue(i, getValue(i)+v.getValue(i));
    }
    return f;
}

VectorN VectorN::operator* (const int& a)
{
    VectorN f(getSize());
    for (unsigned int i=0; i<getSize(); i++)
    {
        f.setValue(i,a*getValue(i));
    }
    return f;
}

double VectorN::length ()
{
    double f=0;
    for (unsigned int i=0; i<dim; i++)
    {
        f += x[i]*x[i];
    }
    return sqrt(f);
}

double VectorN::angle (VectorN a)
{
double f=0;
unsigned int i=0;
for (i=0; i<dim; i++)
{
f += x[i]*a.x[i];
}
f = f/(length() * a.length());
return acos(f);
}

VectorN operator* (double a,VectorN& v)
{
    return v*a;
}