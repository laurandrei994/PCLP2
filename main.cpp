#include <iostream>
#include "Complex.h"

Complex operator-(Complex c1, Complex c2)
{
	Complex rezultat;
	rezultat.SetReal(c1.GetReal() - c2.GetReal());
	rezultat.SetImaginar(c1.GetImaginar() - c2.GetImaginar());
	return rezultat;
}

int main()
{
	Complex c;
	std::cout << "Introduceti un numar complex: " << std::endl;
	std::cin >> c;
	std::cout << "Partea reala: " << c.GetReal() << std::endl;
	std::cout << "Partea imaginara: " << c.GetImaginar() << std::endl;

	std::cout << std::endl << "Suma: c + c: " << std::endl;
	Complex rezultat;
	rezultat = c + c;
	std::cout << "Partea reala: " << rezultat.GetReal() << std::endl;
	std::cout << "Partea imaginara: " << rezultat.GetImaginar() << std::endl;

	std::cout << std::endl << "Suma: c + 5: " << std::endl;
	rezultat = c + 5;
	std::cout << "Partea reala: " << rezultat.GetReal() << std::endl;
	std::cout << "Partea imaginara: " << rezultat.GetImaginar() << std::endl;

	std::cout << std::endl << "Suma: c - c: " << std::endl;
	rezultat = c - c;
	std::cout << "Partea reala: " << rezultat.GetReal() << std::endl;
	std::cout << "Partea imaginara: " << rezultat.GetImaginar() << std::endl;


	return 0;
}