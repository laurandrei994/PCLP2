#include "Punct.h"
#include <iostream>

using std::cout;
using std::endl;

Punct::Punct() {
	this->x = 0.0;
	this->y = 0.0;
}

Punct::Punct(double x, double y) {
	this->x = x;
	this->y = y;
}

double Punct::getX() const {
	return this->x;
}

double Punct::getY() const {
	return this->y;
}

void Punct::setX(double x) {
	this->x = x;
}

void Punct::setY(double y) {
	this->y = y;
}

Punct::~Punct() {
    
}

void Punct::afisare() const {
	cout << "(" << this->x << ", " << this->y << ")";
}