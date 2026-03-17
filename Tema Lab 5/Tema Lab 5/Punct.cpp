#include "Punct.h"
#include <iostream>

Punct::Punct()
{
	this->x = 0;
	this->y = 0;
}

Punct::Punct(double x, double y)
{
	this->x = x;
	this->y = y;
}

int Punct::getX() const
{
	return this->x;
}

int Punct::getY() const
{
	return this->y;
}

void Punct::setX(double x)
{
	this->x = x;
}

void Punct::setY(double y)
{
	this->y = y;
}


