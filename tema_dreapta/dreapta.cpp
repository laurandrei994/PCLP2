#include "Dreapta.h"
#include <iostream>

Dreapta::Dreapta(double x1, double y1, double x2, double y2)
	: p1(x1, y1), p2(x2, y2)
{
}

Punct Dreapta::getP1()
{
	return p1;
}

Punct Dreapta::getP2()
{
	return p2;
}

void Dreapta::setP1(Punct p1)
{
	this->p1 = p1;
}

void Dreapta::setP2(Punct p2)
{
	this->p2 = p2;
}

void Dreapta::print()
{
	std::cout << "Dreapta formata din P1(" 
		<< getP1().getX() << "," << getP1().getY() 
		<< ") si P2(" 
		<< getP2().getX() << "," << getP2().getY() 
		<< ")" << std::endl;
}

Dreapta::~Dreapta()
{
	//std::cout << std::endl << "Destructorul obiectului Dreapta." << std::endl;
}
