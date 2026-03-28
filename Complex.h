#pragma once
#include <iostream>

class Complex
{
private:
	double real;
	double imaginar;

public:
	
	// Constructor cu valori implicite
	Complex(double real = 0, double imaginar = 0);

	// Getteri
	double getReal() const;
	double getImaginar() const;

	// Setteri
	void setReal(double real);
	void setImaginar(double imaginar);

	// Destructor
	~Complex();

	//Alte functii
	Complex operator*(Complex c);
	
};
