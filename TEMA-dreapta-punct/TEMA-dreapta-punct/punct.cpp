#include "punct.h"
#include <iostream>

double Punct::getX()
{
	return this->x;
}

double Punct::getY()
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

void Punct::printPunct()
{
	std::cout << "Coordonata pe dreapta X: " << this->x << "\nCoordonata pe dreapta Y: " << this->y << std::endl;
}
