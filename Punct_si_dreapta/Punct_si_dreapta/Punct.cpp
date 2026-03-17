#include "Punct.h"
#include <iostream>

Punct::Punct()
{
	this->x = 0;
	this->y = 0;
}

Punct::Punct(int coord_x, int coord_y)
{
	this->x = coord_x;
	this->y = coord_y;
}

int Punct::getX()
{
	return this->x;
}

int Punct::getY()
{
	return this->y;
}



void Punct::setX(int coord_x)
{
	this->x = coord_x;
}

void Punct::setY(int coord_y)
{
	this->y = coord_y;
}



void Punct::print()
{
	std::cout << "(" << this->x << "," << this->y << ")";
}
