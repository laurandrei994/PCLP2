#include <iostream>
#include "dreapta.h"
#include "punct.h"

using namespace std;

int main()
{
    Dreapta d(2,1,0,3);
	d.printDreapta();
	d.setP1(12.3, 11.4);
	d.setP2(14.3, 11.7);
	d.printDreapta();

    return 0;
}
