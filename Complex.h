#pragma once
#include <iostream>

class Complex
{
private:
    double real;
    double imaginar;
public:
   // Complex();
   // Complex(double real, double imaginar);
    Complex(double real = 0, double imaginar = 0);


    double getReal() const;
    double getImaginar() const;


    void setReal(double real);
    void setImaginar(double imaginar);

    Complex operator+(Complex c);
    Complex operator+(int r);
    friend std::istream& operator>>(std::istream& in, Complex& c);
    ~Complex();
};
