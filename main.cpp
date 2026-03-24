#include <iostream>
#include "Complex.h"

Complex operator-(Complex c1, Complex c2);
int main()
{
	Complex c1(3.0f, 5.0f); 
	Complex c2(2.0f, 4.0f);

	Complex c3 = c1 + c2;
	std::cout << c3 << std::endl;

	Complex c4 = c1 - c2;
	std::cout << c4 << std::endl;

	Complex c5;

	std::cin >> c5;
	std::cout << c5 << std::endl;
	return 0;
}

Complex operator-(Complex c1, Complex c2)
{
	return Complex(c1.getReal() - c2.getReal(), c1.getImaginar() - c2.getImaginar());
}