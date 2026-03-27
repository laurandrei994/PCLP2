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

Complex Complex::operator+(int i)
{
	Complex rezultat;
	rezultat.setReal(this->real + i);
	rezultat.setImaginar(this->imaginar);
	return rezultat;
}

Complex Complex::operator*(Complex c)
{
	Complex rezultat;
	rezultat.setReal(this->real * c.getReal() - this->imaginar * c.getImaginar());
	rezultat.setImaginar(this->real * c.getImaginar() + this->imaginar * c.getReal());
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

Complex operator!(Complex& c)
{
	Complex rez;
	rez.setReal(c.getReal());
	rez.setImaginar(-c.getImaginar());
	return rez;
}

std::ostream& operator<<(std::ostream& out, Complex& c)
{
	out << c.real;
	if (c.imaginar < 0)
		out << " - " << -c.imaginar << "i";
	else
		out << " + " << c.imaginar << "i";
	return out;
}