#include "Punct.h"

punct::punct()
{
	this->x = 0;
	this->y = 0;
}

punct::punct(double x, double y)
{
	this->x = 0;
	this->y = 0;
}

double punct::getX() const
{
	return this->x;
}

double punct::getY() const
{
	return this->y;
}

void punct::getX(double x)
{
	this->x = x;
}

void punct::getY(double y)
{
	this->y = y;
}
