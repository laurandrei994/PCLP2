#pragma once
class Complex
{
private:
	double real;
	double imaginar;

public:
	//Complex();
	//Complex(double real, double imaginar);
	Complex(double real = 0, double imaginar = 0);
	double getReal() const;
	double getImaginar() const;

	void  setReal(double real);
	void setImaginar(double imaginar);

	~Complex();

	Complex operator+(Complex c) ;
	friend std::istream& operator>>(std::istream& in,Complex& c);
	Complex Complex::operator+(int i);
};