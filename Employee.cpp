#include <iostream>	
#include "Employee.h"
#include <cstring>
#include "Date.h"
using std::cout;
using std::endl;


Employee::Employee(const char* fname, const char* lname, int bDay, int bMonth, int bYear,
	 int hDay, int hMonth, int hYear)
	: birthDate(bDay, bMonth, bYear) , hireDate(hDay, hMonth, hYear){

	int lenght = strlen(fname);
	lenght = (lenght < 25) ? lenght : 24;
	strncpy_s(firstName, fname, lenght);
	firstName[lenght] = '\0';

	lenght = strlen(lname);
	lenght = (lenght < 25 ? lenght : 24);
	strncpy_s(lastName, lname, lenght);
	lastName[lenght] = '\0';
	cout << "Constructorul obiectului de tip Employee pentru " << firstName
		<< ' ' << lastName << endl;
}

void Employee::print() const
{
	cout << firstName << ' ' << lastName << " nascut la ";
	hireDate.print();
	cout << endl;
	birthDate.print();
	cout << " angajat la ";
	
}

Employee::~Employee()
{
	cout << "Destructorul obiectului de tip Employee pentru " << firstName
		<< ' ' << lastName << endl;
};
