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
		
		//Constructor cu valori implicite

		Complex(double real = 0, double imaginar = 0);

		//Destructor

		~Complex();

		//Getteri

		double GetReal() const;

		double GetImaginar() const;

		//Setteri

		void SetReal(double real);

		void SetImaginar(double imaginar);

		//Alte functii

		Complex operator+(Complex c);
		Complex operator+(int i);
		friend std::istream& operator>>(std::istream& in, Complex& c);
};