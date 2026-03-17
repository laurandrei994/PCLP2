#pragma once
#include <iostream>
#include "date.h"
class Employee
{
private:
	std::string nume;
	std::string prenume;
	Date data_nastere;// dn, mn, yn
	Date data_angajare;

public:
	//Constructor explicit
	Employee(std::string n, std::string p, int dn, int mn, int yn, int da, int ma, int ya);

	//Getteri
	std::string getNume() const;
	std::string getPrenume() const;
	Date getData_nastere() const;
	Date getData_angajare() const;

	//Setteri
	void setNume(std::string n);
	void setPrenume(std::string p);
	void setDataNastere(Date dn);
	void setDataNastere(int dn, int mn, int yn);
	void setDataAngajare(Date da);
	void setDataAngajare(int da, int ma, int ya);

	//Destructor
	~Employee();

	//Alte functii
	void printEmployee();
};