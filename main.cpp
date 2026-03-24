#include <iostream>
#include "Complex.h"

Complex operator-(Complex c1, Complex c2)
{
	Complex rezultat;
	rezultat.setReal(c1.getReal() - c2.getReal());
	rezultat.setImaginar(c1.getImaginar() - c2.getImaginar());
	return rezultat;
}

int main()
{
 	Complex c1(5,5);

	std::cout << "Complex c1:" << std::endl;
	std::cin >> c1;
 	std::cout << "Real: " << c1.getReal() << ", Imaginar: " << c1.getImaginar() << std::endl;

	std::cout<<"Suma c+c"<<std::endl;
	Complex rezultat = c1+c1;
	std::cout << "Real: " << rezultat.getReal() << ", Imaginar: " << rezultat.getImaginar() << std::endl;

	std::cout<<"Diferenta c-c"<<std::endl;
	rezultat = c1-c1;
	std::cout << "Real: " << rezultat.getReal() << ", Imaginar: " << rezultat.getImaginar() << std::endl;

	return 0;
}