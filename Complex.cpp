#include "Complex.h"

Complex::Complex(double real, double imaginar)
{
	this->real = real;
	this->imaginar = real;
}

Complex::~Complex()
{
	
}

double Complex::GetReal() const
{
	return this->real;
}

double Complex::GetImaginar() const
{
	return this->imaginar;
}

void Complex::SetReal(double real)
{
	this->real = real;
}

void Complex::SetImaginar(double imaginar)
{
	this->imaginar = imaginar;
}

Complex Complex::operator+(Complex c)
{
	Complex rezultat;
	rezultat.SetReal(this->real + c.GetReal());
	rezultat.SetImaginar(this->imaginar + c.GetImaginar());
	return rezultat;
}

Complex Complex::operator+(int i)
{
	Complex rezultat;
	rezultat.SetReal(this->real + i);
	rezultat.SetImaginar(this->imaginar);
	return rezultat;
}

std::istream& operator>>(std::istream& in, Complex& c)
{
	std::cout << "\tIntroduceti partea reala: ";
	in >> c.real;
	std::cout << "\tIntroduceti partea imaginara: ";
	in >> c.imaginar;
	return in;
}
