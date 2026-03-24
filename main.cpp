#include <iostream>
#include "Complex.h"

Complex operator-(Complex c1, Complex c2);

int main()
{
	std::cout << "Laborator 6" << std::endl;

	Complex c(5, 5);
	std::cout << "Introduceti un numar complex: " << std::endl;
	std::cin >> c;
	std::cout << "Partea reala " << c.getReal() << std::endl;
	std::cout << "Partea imaginara " << c.getImaginar() << std::endl;

	std::cout << std::endl << "Suma c + c " << std::endl;

	Complex rezultat;
	rezultat = c + c;
	std::cout << "Partea reala " << rezultat.getReal() << std::endl;
	std::cout << "Partea imaginara " << rezultat.getImaginar() << std::endl;

	std::cout << std::endl << "Diferenta c - c " << std::endl;

	rezultat = c - c;
	std::cout << "Partea reala " << rezultat.getReal() << std::endl;
	std::cout << "Partea imaginara " << rezultat.getImaginar() << std::endl;

	std::cout << std::endl << "Suma c + i " << std::endl;

	rezultat = c + 8;
	std::cout << "Partea reala " << rezultat.getReal() << std::endl;
	std::cout << "Partea imaginara " << rezultat.getImaginar() << std::endl;

	return 0;
}

Complex operator-(Complex c1, Complex c2)
{
	Complex rezultat;
	rezultat.setReal(c1.getReal() - c2.getReal());
	rezultat.setImaginar(c1.getImaginar() - c2.getImaginar());
	return rezultat;
}