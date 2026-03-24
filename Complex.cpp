#include "Complex.h"

Complex::Complex(double real, double imaginar) 
	: real(real), imaginar(imaginar)
{
	
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
	return Complex(this->real + c.getReal(), this->imaginar + c.getImaginar());
}

Complex Complex::operator+(double d)
{
	return Complex(this->real + d, this->imaginar);
}

std::istream& operator>>(std::istream& is, Complex& c)
{
	std::cout << "Real: ";
	is >> c.real;
	std::cout << "Imaginar: ";
	is >> c.imaginar;
	return is;
}

std::ostream& operator<<(std::ostream& os, const Complex c)
{
	double imaginar = c.getImaginar();
	os << c.getReal() << (imaginar < 0 ? "" : "+") << imaginar << "i";
	return os;
}

Complex Complex::operator*(Complex c)
{
	double real = this->real * c.getReal() - this->imaginar * c.getImaginar();
	double imaginar = this->real * c.getImaginar() + this->imaginar * c.getReal();
	return Complex(real, imaginar);
}

Complex Complex::operator!()
{
	return Complex(this->real, -this->imaginar);
}
