#pragma once
#include <iostream>

class Complex {
private:
	double real;
	double imaginar;
public:
	// Constructor implicit:
	//Complex();
	//Constructor explicit:
	//Complex(double real, double imaginar);
	// Constructor cu valori implicite:
	Complex(double real = 1, double imaginar = 1);
	// Getter
	double getReal() const;
	double getImaginar() const;
	// Setter
	void setReal(double real);
	void setImaginar(double imaginar);

	// Destructor
	~Complex();

	// Others
	Complex operator+(Complex c);
	Complex operator+(double d);
	friend std::istream& operator>>(std::istream& is, Complex& c);
	friend std::ostream& operator<<(std::ostream& os, const Complex c);

	Complex operator*(Complex c);
	Complex operator!();
};