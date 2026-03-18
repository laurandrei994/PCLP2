#include <iostream>
#include "Dreapta.h"

using std::cout;
using std::endl;

int main() {
	// Testare punct implicit
	Punct p_imp;
	cout << "Punct implicit: ";
	p_imp.afisare();
	cout << endl;

	// Declaram obliectul d1 de tip dreapta
	Dreapta d1(4, 2.6, 3.0, 4.1);
	d1.afisare();
	cout << endl;

	// Creez 2 puncte noi si modific pozitia punctelor din d1 cu getteri aferenti.
	Punct p3(9.9, 9.9);
	Punct p4(3, 11.0);

	d1.setP1(p3);
	d1.setP2(p4);

	cout << "Dupa modificarea pozitiei celor doua puncte, avem: " << endl;
	d1.afisare();

	return 0;
}
