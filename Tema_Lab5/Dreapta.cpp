#include "Dreapta.h"
#include <iostream>

using std::cout;
using std::endl;

// Apelam constructorul explicit al clasei Punct
Dreapta::Dreapta(double x1, double y1, double x2, double y2)
	: p1(x1, y1), p2(x2, y2)
{
}

Punct Dreapta::getP1() const {
	return this->p1;
}

Punct Dreapta::getP2() const {
	return this->p2;
}

void Dreapta::setP1(Punct p1) {
	this->p1 = p1;
}

void Dreapta::setP2(Punct p2) {
	this->p2 = p2;
}

Dreapta::~Dreapta() {
	cout << "Apel al destructorului" << endl;
}

void Dreapta::afisare() const {
	cout << "Dreapta definita de punctele: ";
	this->p1.afisare();
	cout << " si ";
	this->p2.afisare();
	cout << endl;
}