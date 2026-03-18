#include <iostream>
#include "punct.h"
#include "dreapta.h"

int main()
{
	Dreapta d(1.5, 2.5, 3.5, 4.5);
	d.printPuncte();
	d.setp1(6.6, 8.9);
	d.setp2(9.0, 9.9);
	d.printPuncte();
}