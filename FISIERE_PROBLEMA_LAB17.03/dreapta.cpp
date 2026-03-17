#include <iostream>
#include "Dreapta.h"
#include "Punct.h"

dreapta::dreapta(double p1x, double p1y, double p2x, double p2y)
{
	this->p1.getX(p1x);
	this->p1.getY(p1y);
	this->p2.getX(p2x);
	this->p2.getY(p2y);
}

punct dreapta::getP1() const
{
	return this->p1;
}

punct dreapta::getP2() const
{
	return this->p2;
}

void dreapta::setP1(punct p1)
{
	this->p1 = p1;
}

void dreapta::setP1(double x, double y)
{
	this->p1.getX(x);
	this->p1.getY(y);
}

void dreapta::setP2(punct p2)
{
	this->p2 = p2;
}

void dreapta::setP2(double x, double y)
{
	this->p2.getX(x);
	this->p2.getY(y);
}

void dreapta::printPct() const
{
	std::cout << "Punctul 1: (" << this->p1.getX() << ", " << this->p1.getY() << ")\n";
	std::cout << "Punctul 2: (" << this->p2.getX() << ", " << this->p2.getY() << ")\n";
}
