#pragma once
#include <iostream>

class Complex
{
private:
	double real;
	double imaginar;

public:

	// constructor
	Complex(double real = 0, double imaginar = 0);

	// getteri
	double getReal() const;
	double getImaginar() const;

	// setteri
	void setReal(double real);
	void setImaginar(double imaginar);

	// destructor
	~Complex();

	// adunare
	Complex operator+ (Complex c);

	// schimb semnul la imaginar
	Complex operator! ();

	// citire
	friend std::istream& operator>>(std::istream& in, Complex& c);

	// afisare
	friend std::ostream& operator<<(std::ostream& out, Complex c);
};