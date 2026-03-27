#pragma once
#include <iostream>
using namespace std;

class Complex
{
    public:
        // Constructor implicit
        //Complex();
        // Constructor explicit
        //Complex(float real, float imaginar);
        // Constructor cu valori implicite

        Complex(float real = 0, float imaginar = 0);

        // Getteri
        float getReal() const;
        float getImaginar() const;

        // Setteri
        void setReal(float real);
        void setImaginar(float imaginar);

        // Destructor
        ~Complex();

        // Alte functii
        Complex operator+(Complex c);
        Complex operator+(int i);
        friend istream& operator>>(istream& in, Complex& c);

    private:
        float real;
        float imaginar;
};
