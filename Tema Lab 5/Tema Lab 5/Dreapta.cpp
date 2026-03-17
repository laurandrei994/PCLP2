#include "Dreapta.h"
#include <iostream>
#include "Punct.h"

Dreapta::Dreapta(double p1x, double p1y, double p2x, double p2y)
{
	this->p1.setX(p1x);
	this->p1.setY(p1y);
	this->p2.setX(p2x);
	this->p2.setY(p2y);
}

Punct Dreapta::getP1() const
{
	return this->p1;
}

Punct Dreapta::getP2() const
{
	return this->p2;
}

void Dreapta::setP1(Punct p1)
{
	this->p1 = p1;
}

void Dreapta::setP1(double x, double y)
{
	this->p1.setX(x);
	this->p1.setY(y);
}
void Dreapta::setP2(Punct p2)
{
	this->p2 = p2;
}

void Dreapta::setP2(double x, double y)
{
	this->p2.setX(x);
	this->p2.setY(y);
}


void Dreapta::printPct()
{
	std::cout << "Punctul A(" << this->p1.getX() << "," << this->p1.getY() << ")" << std::endl;
	std::cout << "Punctul B(" << this->p2.getX() << "," << this->p2.getY() << ")" << std::endl;
}

