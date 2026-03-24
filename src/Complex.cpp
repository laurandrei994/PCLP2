#include "C:\Users\savac\source\repos\laborator5\PCLP2\Complex.h"
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

Complex Complex::operator+(int i)
{
	Complex rezultat;
	rezultat.setReal(this->real + i);
	rezultat.setImaginar(this->imaginar);
	return rezultat;
}


std::istream& operator>>(std::istream& in, Complex& c)
{
	std::cout << "Introduceti partea reala a numarului complex: "<<std::endl;
	in >> c.real;
	std::cout<< "Introduceti partea imaginara a numarului complex: "<<std::endl;
	in >> c.imaginar;
	return in;
}
