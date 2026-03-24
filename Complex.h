#pragma once
#include <iostream>
class Complex
{
	private:
	double real;
	double imaginar;
public:
	Complex(double real = 0, double imaginar = 0);
	double getReal() const;
	double getImaginar() const;
	void setReal(double real);
	void setImaginar(double imaginar);
	~Complex();
	Complex operator+(Complex c) const;
	Complex operator+(int i) const;
	friend std::istream& operator>>(std::istream& in, Complex& c);
	//Complex operator-(Complex c) const;
	Complex operator*(Complex c) const;
	friend Complex operator!(Complex c);
	
	friend std::ostream& operator<<(std::ostream& out, Complex& c);
};