#include "Complex.h"
#include <iostream>

using namespace std;

Complex::Complex(float real, float imaginar)
{
    this->real = real;
    this->imaginar = imaginar;
    cout << "Apel al constructorului" << endl;
}

float Complex::getReal() const
{
    return this->real;
}

float Complex::getImaginar() const
{
    return this->imaginar;
}

void Complex::setImaginar(float imaginar)
{
    this->imaginar = imaginar;
}

void Complex::setReal(float real)
{
    this->real = real;
}

Complex Complex::operator+(Complex c)
{
    Complex rezultat;
    rezultat.setReal(this->real + c.getReal());
    rezultat.setImaginar(this->imaginar + c.getImaginar());
    return rezultat;
}

istream& operator>>(istream& in, Complex& c)
{
    cout << "\tIntroduceti partea reala";
    in >> c.real;
    cout << "\tIntroduceti partea imaginara";
    in >> c.imaginar;
    return in;
}

Complex Complex::operator+(int i)
{
    Complex rezultat;
    rezultat.setReal(this->real + i);
    rezultat.setImaginar(this->imaginar);
    return rezultat;
}


Complex::~Complex()
{
    cout << "Apel al destructorului";
}
