#include "date.h"
#include <iostream>
#include "Employee.h"

int main()
{
	Employee Gigel("Gigel", "Dorel", 13, 8, 1999, 2, 3, 2019);
	Gigel.printEmployee();

	Gigel.setDataAngajare(12, 12, 2022);
	Gigel.printEmployee();

	Date da(10, 10, 2025);
	Gigel.setDataAngajare(da);
	Gigel.printEmployee();

	return 0;
}