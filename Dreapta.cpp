#include <iostream>
#include "Dreapta.h"

Dreapta::Dreapta(int x1, int y1, int x2, int y2)
    : p1(x1, y1), p2(x2, y2) {}

Punct Dreapta::getP1() {
    return p1;
}

Punct Dreapta::getP2() {
    return p2;
}

void Dreapta::setP1(int x, int y) {
    p1.setX(x);
    p1.setY(y);
}

void Dreapta::setP2(int x, int y) {
    p2.setX(x);
    p2.setY(y);
}

void Dreapta::print() {
    std::cout << "P1(" << p1.getX() << ", " << p1.getY() << ") ";
    std::cout << "P2(" << p2.getX() << ", " << p2.getY() << ")\n";
}