#pragma once
#include <iostream>
class Complex
{
private:
	double real;
	double imaginar;
public:
	//Constructor implicit
	//Complex();
	//Constructor explicit
	//Complex(double real, double imaginar);
	
	//Consructor cu valori explicite
	Complex(double real = 0, double imaginar = 0);

	//Getteri
	double getReal() const;
	double getImaginar() const;

	//Setteri
	void setReal(double real);
	void setImaginar(double imaginar);

	//Destructor
	~Complex();

	//Alte functii
	Complex operator+(Complex c);

	friend std::istream& operator>>(std::istream& in, Complex& c);

};