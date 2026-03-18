#include "Dreapta.h"
#include <iostream>


Dreapta::Dreapta(float x1, float y1, float x2, float y2) : p1(x1, y1), p2(x2, y2) {
}


Dreapta::~Dreapta() {
}


Punct Dreapta::getP1() {
    return p1;
}


Punct Dreapta::getP2() {
    return p2;
}


void Dreapta::setP1(Punct p1) {
    this->p1 = p1;
}


void Dreapta::setP2(Punct p2) {
    this->p2 = p2;
}

// Display coordinates
void Dreapta::afisareCoordonate() {
    std::cout << "P1(" << p1.getX() << ", " << p1.getY() << "), ";
    std::cout << "P2(" << p2.getX() << ", " << p2.getY() << ")" << std::endl;
}
