#include <iostream>
#include "Date.h"
#include "Employee.h"

using namespace std;

int main()
{
    //cout << "Hello to POO laboratory on GitHub!" << endl;
	Employee e ("Bob", "Jones", 24, 7, 1949, 12, 3, 2088);
	cout << '\n';  
	e.print();

	cout << "\n\nTesteaza constructorul Date\n";
    
    Date d(35, 14, 1994);
    return 0;
}
