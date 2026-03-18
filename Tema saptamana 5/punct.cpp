#include "punct.h"

Punct::Punct()
{
	this->x = 0;
	this->y = 0;
}

Punct::Punct(float x, float y)
{
	this->x = x;
	this->y = y;
}

float Punct::getx() const
{
	return this->x;
}

float Punct::gety() const
{
	return this->y;
}

void Punct::setx(float x)
{
	this->x = x;
}

void Punct::sety(float y)
{
	this->y = y;
}
