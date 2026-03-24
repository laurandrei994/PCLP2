#include "Complex.h"
#include <iostream>

Complex::Complex(double real, double imaginar)
{
	this->real = real;
	this->imaginar = imaginar;
}

double Complex::getReal() const
{
	return this->real;
}

double Complex::getImaginar() const
{
	return this->imaginar;
}

void Complex::setReal(double real)
{
	this->real = real;
}

void Complex::setImaginar(double imaginar)
{
	this->imaginar = imaginar;
}

Complex::~Complex()
{
}

Complex Complex::operator+(Complex c)
{
	Complex rezultat;
	rezultat.setReal(this->real + c.getReal());
	rezultat.setImaginar(this->imaginar + c.getImaginar());
	return rezultat;
}

std::istream& operator>>(std::istream& in, Complex& c)
{
	std::cout << "Introduceti partea reala: ";
	in >> c.real;
	std::cout << "Introduceti partea imaginara: ";
	in >> c.imaginar;
	return in;
}
