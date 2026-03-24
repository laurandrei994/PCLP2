#pragma once
#include <iostream>

class Complex
{
private:
	double real;
	double imaginar;

public:

	//constructor cu valori implicite
	Complex(double real = 0, double imaginar = 0);

	//getteri
	double getReal() const;
	double getImaginar() const;

	//setteri
	void setReal(double real);
	void setImaginar(double imaginar);

	//destructor
	~Complex();

	//alte functii
	Complex operator+ (Complex c);

	//operator ! ca functie membra
	Complex operator! ();

	//operator >> pentru citire
	friend std::istream& operator>>(std::istream& in, Complex& c);

	//operator << pentru afisare
	friend std::ostream& operator<<(std::ostream& out, Complex c);
};