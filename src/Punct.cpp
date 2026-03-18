#include "punct.h"

float Punct::getX() const
{
	return this->x;
}

float Punct::getY() const
{
	return this->y;
}

void Punct::setX(float x)
{
	this->x = x;
}

void Punct::setY(float y)
{
	this->y = y;
}

Punct::Punct(float x, float y)
{
	this->x = x;
	this->y = y;
}
