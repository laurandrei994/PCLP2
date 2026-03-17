#include <iostream>
#include "Linie.h";
#include "Punct.h"

int main() {
	Linie D1(2, 3, -1, 0);
	D1.printPunct();

	D1.setP1(4, 3);
	D1.setP2(6, -2);
	D1.printPunct();


	return 0;
}