#include <iostream>
#include "Complex.h"

Complex operator-(Complex c1, Complex c2);
int main()
{
	Complex c1(1.0f, 2.0f); 
	Complex c2(2.0f, -3.0f);

	std::cout << c1 << std::endl;
	std::cout << c2 << std::endl;

	/*Complex c3 = c1 + c2;
	std::cout << c3 << std::endl;

	Complex c4 = c1 - c2;
	std::cout << c4 << std::endl;

	Complex c5;

	std::cin >> c5;
	std::cout << c5 << std::endl;*/

	Complex c6 = c1 * c2;
	std::cout << c6 << std::endl;

	Complex c7 = !c1;
	std::cout << c7 << std::endl;
	return 0;
}

Complex operator-(Complex c1, Complex c2)
{
	return Complex(c1.getReal() - c2.getReal(), c1.getImaginar() - c2.getImaginar());
}