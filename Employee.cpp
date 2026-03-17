#include "Employee.h"

Employee::Employee(std::string n, std::string p, int dn, int mn, int yn, int da, int ma, int ya)
{
}

std::string Employee::getNume() const
{
    return this->nume;
}

std::string Employee::getPrenume() const
{
    return this->prenume;
}

Date Employee::getData_nastere() const
{
    return this->data_nastere;
}

Date Employee::getData_angajare() const
{
    return this->data_angajare;
}

void Employee::setNume(std::string n)
{
    this->nume = n;
}

void Employee::setPrenume(std::string p)
{
    this->prenume = p;
}

void Employee::setDataNastere(Date dn)
{
    this->data_nastere = dn;
}

void Employee::setDataNastere(int dn, int mn, int yn)
{
    Date d_n(dn, mn, yn);
        this->data_nastere = d_n;
}

void Employee::setDataAngajare(Date da)
{
    this->data_angajare = da;
}

void Employee::setDataAngajare(int da, int ma, int ya)
{
    Date d_a(da, ma, ya);
        this->data_angajare = d_a;
}

Employee::~Employee()
{
    std::cout << "Apel al destructorului implicit " << std::endl;
}

void Employee::printEmployee()
{
    std::cout << "Angajat: " << std::endl;
    std::cout << "\tNume: " << this->nume << std::endl;
    std::cout << "\tPrenume" << this->prenume << std::endl;
    std::cout << "\tData Nastere";
    this->data_nastere.printDate();
    std::cout << "\tData Angajare: ";
    this->data_angajare.printDate();
}
