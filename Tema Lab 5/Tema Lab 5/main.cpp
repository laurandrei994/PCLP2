#include <iostream>
#include "Punct.h"
#include "Dreapta.h"

int main()
{
	Dreapta AB(1.3, 3.4, 4.7, 7.9);
	AB.printPct();
	AB.setP1(4.6, 6.9);
	AB.setP2(7.8, 8.9);
	AB.printPct();
}