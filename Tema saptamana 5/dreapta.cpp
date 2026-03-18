#include "dreapta.h"

Dreapta::Dreapta(float p1x, float p1y, float p2x, float p2y)
{
	this->p1.setx(p1x);
	this->p1.sety(p1y);
	this->p2.setx(p2x);
	this->p2.sety(p2y);
}

Punct Dreapta::getp1() const
{
	return this->p1;
}

Punct Dreapta::getp2() const
{
	return this->p2;
}

void Dreapta::setp1(Punct p1)
{
	this->p1 = p1;
}

void Dreapta::setp1(float x, float y)
{
	this->p1.setx(x);
	this->p1.sety(y);
}

void Dreapta::setp2(Punct p2)
{
	this->p2 = p2;
}

void Dreapta::setp2(float x, float y)
{
	this->p2.setx(x);
	this->p2.sety(y);
}

void Dreapta::printPuncte()
{
	cout << "Punctul 1: (" << this->p1.getx() << ", " << this->p1.gety() << ")" << endl;
	cout << "Punctul 2: (" << this->p2.gety() << ", " << this->p2.gety() << ")" << endl;
}
