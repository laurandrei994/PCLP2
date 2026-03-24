#include "Complex.h"

////complex::complex()
//{
//	this->real = real;
//	this->img = img;
//}

complex::complex(double real, double img)
{
	this->real = real;
	this->img = img;

}

double complex::getReal() const
{
	return this->real;
}

double complex::getImg() const
{
	return this->img;
}

void complex::setReal(double real)
{
	this->real = real;
}

void complex::setImg(double img)
{
	this->img = img;
}

complex::~complex()
{
}

complex complex::operator+(complex c)
{
	complex rezultat;
	rezultat.setReal (this->real + c.getReal());
	rezultat.setImg (this->img + c.getImg());
	return rezultat;
}

complex complex::operator+(int i)
{
	complex rezultat;
	rezultat.setReal(this->real + i);
	rezultat.setImg(this->img);
	return complex();
}

std::istream& operator>>(std::istream& in, complex& c)
{
	std::cout << "Introduceti partea reala: ";
	in >> c.real;
	std::cout << "Introduceti partea imaginara: ";
	in >> c.img;

	return in;
}
