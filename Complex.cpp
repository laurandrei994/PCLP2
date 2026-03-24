#include "Complex.h"

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

Complex Complex::operator*(Complex c)
{

	Complex rezultat;
	rezultat.setReal(this->real * c.getReal() + this->real * c.getImaginar());
	rezultat.setImaginar(this->imaginar * c.getImaginar() + this->real * c.getImaginar());
	return rezultat;
}


