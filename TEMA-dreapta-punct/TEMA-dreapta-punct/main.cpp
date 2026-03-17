#include <iostream>
#include "punct.h"
#include "dreapta.h"

int main() {

	Dreapta d1(1, 2, 3, 4);
	d1.printDreapta();
	d1.setP1(6, 7);
	d1.setP2(6, 9);
	d1.printDreapta();

	std::cout << "XD";
	
}