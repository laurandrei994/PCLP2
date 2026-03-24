#pragma once
#include <iostream>

class Complex {

	private:
		double real;
		double imaginar;
	public:
		//constructor implicit
		//Complex();
		//constructor explicit
		//Complex( double real, double imaginar);
		//constructor cu valori implicite
		Complex(double real = 0, double imaginar = 0);

		//getteri
		double getReal()const;
		double getImaginar()const;

		//setteri
		void setReal(double real);
		void setImaginar(double imaginar);

		//destructor
		~Complex();

		//alte functii
		Complex operator+(Complex c);
		Complex operator+(int i);
		//Complex operator-(Complex c);
		friend std::istream& operator>>(std::istream& in, Complex& c);


};