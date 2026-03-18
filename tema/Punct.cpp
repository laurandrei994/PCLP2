#include "Punct.h"


Punct::Punct() {
    x = 0;
    y = 0;
};


Punct::Punct(float x, float y)  {
    this->x = x;
    this->y = y;
}


Punct::~Punct() {
}


float Punct::getX() {
    return x;
}


float Punct::getY() {
    return y;
}


void Punct::setX(float x) {
    this->x = x;
}


void Punct::setY(float y) {
    this->y = y;
}
