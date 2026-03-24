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

Complex Complex::operator+(Complex c) const
{
	Complex rezultat;
	rezultat.setReal(this->real + c.getReal());
	rezultat.setImaginar(this->imaginar + c.getImaginar());
	return rezultat;
}

Complex Complex::operator+(int i) const
{
	Complex rezultat;
	rezultat.setReal(this->real + i);
	rezultat.setImaginar(this->imaginar);
	return rezultat;
}

Complex Complex::operator*(Complex c) const
{
	Complex rezultat;
	rezultat.setReal(this->real * c.getReal() - this->imaginar * c.getImaginar());
	rezultat.setImaginar(this->real * c.getImaginar() + this->imaginar * c.getReal());
	return rezultat;
}

std::istream& operator>>(std::istream& in, Complex& c)
{
	std::cout << "introduceti partea reala: ";
	in >> c.real;
	std::cout << "introduceti partea imaginara: ";
	in >> c.imaginar;
	return in;
}

Complex operator!(Complex c)
{
	Complex rezultat;
	rezultat.setReal(c.getReal());
	rezultat.setImaginar(-c.getImaginar());
	return rezultat;
}

std::ostream& operator<<(std::ostream& out, Complex& c)
{
	out << c.real;
	if(c.imaginar < 0)
		out << " - " << -c.imaginar << "i";
	else
		out <<" + " << c.imaginar << "i";
	return out;
}
