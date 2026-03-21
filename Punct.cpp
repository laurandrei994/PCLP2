#include <iostream>
#include "Punct.h"

Punct::Punct() {
    x = 0;
    y = 0;
}

Punct::Punct(int xVal, int yVal) {
    x = xVal;
    y = yVal;
}

void Punct::setX(int val) {
    x = val;
}

void Punct::setY(int val) {
    y = val;
}

int Punct::getX() {
    return x;
}

int Punct::getY() {
    return y;
}

void Punct::print() {
    std::cout << "(" << x << ", " << y << ")\n";
}