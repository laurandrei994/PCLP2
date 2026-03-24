#pragma once
#include <iostream>

class Complex
{
private:
	double real;
	double imaginar;

public:
	/*Constructor implicit
		Complex();
	/Constructor explicit
		Complex(double real, double imaginar);*/

	//Constructor cu valori implicite (echivalent cu cei 2 de mai sus)
	Complex(double real = 0, double imaginar = 0);

	//Getteri
	double getReal() const;
	double getImaginar() const;

	//Setteri
	void setReal(double real);
	void setImaginar(double imaginar);

	//Destructori
	~Complex();

	//Alte functii
	Complex operator+(Complex c);
	Complex operator+(int i);
	friend std::istream& operator>>(std::istream& in, Complex& c);
	Complex operator*(Complex c);
	friend Complex operator!(Complex& c);
	friend std::ostream& operator<<(std::ostream& out, Complex& c);
};
