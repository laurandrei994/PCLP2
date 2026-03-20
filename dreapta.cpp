#include "dreapta.h"
#include "punct.h"
#include <iostream>
using std::cout;
using std::endl;

Dreapta::Dreapta(float p1x, float p1y, float p2x, float p2y)
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

void Dreapta::setP1(float x, float y)
{
	this->p1.setX(x);
	this->p1.setY(y);
}

void Dreapta::setP2(float x, float y)
{
	this->p2.setX(x);
	this->p2.setY(y);
}



void Dreapta::printDreapta()
{
	cout << "Coordonatele celor doua puncte sunt " << this->p1.getX() << ", " << this->p1.getY() << " si " << this->p2.getX() << ", " << this->p2.getY() << endl;
}