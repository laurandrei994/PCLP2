#include <iostream>
#include "Complex.h"

Complex operator-(Complex c1, Complex c2);
Complex operator*(Complex c1, Complex c2);

int main()
{
	Complex c;
	std::cout << "introducere un nr complex:" << std::endl;
	std::cin >> c;
	std::cout << "partea reala :" << c.getReal() << std::endl;
	std::cout << "partea imaginare :" << c.getImaginar() << std::endl;

	std::cout << std::endl << "suma :c + c" << std::endl;
	Complex rezultat;
	rezultat = c + c;
	std::cout << "partea reala:" << rezultat.getReal() << std::endl;
	std::cout << "partea imaginara:" << rezultat.getImaginar() << std::endl;

	std::cout << std::endl << "diferenta :c - c" << std::endl;
	rezultat = c - c;
	std::cout << "partea reala:" << rezultat.getReal() << std::endl;
	std::cout << "partea imaginara:" << rezultat.getImaginar() << std::endl;

	//apel operator * 
	std::cout << std::endl << "inmultirea :c * c" << std::endl;
	rezultat = c * c;
	std::cout << "partea reala:" << rezultat.getReal() << std::endl;
	std::cout << "partea imaginara:" << rezultat.getImaginar() << std::endl;

	//apel operator !
	std::cout << std::endl << "operatorul ! schimba semnul partii imaginare" << std::endl;
	rezultat = !c;
	std::cout << "partea reala:" << rezultat.getReal() << std::endl;
	std::cout << "partea imaginara:" << rezultat.getImaginar() << std::endl;

	//apel operator <<
	std::cout << std::endl << "afisare cu operator << :" << std::endl;
	std::cout << rezultat << std::endl;

	return 0;
}

//operator - ca functie nemembra
Complex operator-(Complex c1, Complex c2)
{
	Complex rezultat;
	rezultat.setReal(c1.getReal() - c2.getReal());
	rezultat.setImaginar(c1.getImaginar() - c2.getImaginar());
	return rezultat;
}

//operator * ca functie nemembra
Complex operator*(Complex c1, Complex c2)
{
	Complex rezultat;
	rezultat.setReal(c1.getReal() * c2.getReal() - c1.getImaginar() * c2.getImaginar());
	rezultat.setImaginar(c1.getReal() * c2.getImaginar() + c1.getImaginar() * c2.getReal());

	return rezultat;
}