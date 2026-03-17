#include "dreapta.h"
#include <iostream>

Dreapta::Dreapta(double x1, double y1, double x2, double y2)
{
	p1.setX(x1);
	p1.setY(y1);
	p2.setX(x2);
	p2.setY(y2);
}

Punct Dreapta::getP1()
{
	return this->p1;
}

Punct Dreapta::getP2()
{
	return this->p2;
}

void Dreapta::setP1(int x1, int y1)
{
	p1.setX(x1);
	p1.setY(y1);
}

void Dreapta::setP2(int x2, int y2)
{
	p2.setX(x2);
	p2.setY(y2);
}

void Dreapta::printDreapta()
{
	std::cout << "Dreapta 1: " << std::endl;
	p1.printPunct();
	std::cout << "Dreapta 2: " << std::endl;
	p2.printPunct();
	std::cout << std::endl;
}
