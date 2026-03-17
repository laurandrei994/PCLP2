#include "Date.h"
#include <iostream>

Date::Date(int d, int m, int y)
{
    this->day = (d > 0 && d < 32) ? d : 1;
    this->month = (m > 0 && m < 13) ? m :1;
    this->year = y;
}

int Date::getDay() const
{
    return this->day;
}

int Date::getMonth() const
{
    return this->month;
}

int Date::getYear() const
{
    return this->year;
}

void Date::setDay(int d)
{
    this->day = (d > 0 && d < 32) ? d : 1;
}

void Date::setMonth(int m)
{
    this->month = (m > 0 && m < 13) ? m : 1;
}

void Date::setYear(int y)
{
    this->year = 1;
}

Date::~Date()
{
    std::cout << "Apel al constructorului" << std::endl;
}

void Date::printDate()
{
    std::cout << this->day << "-" << this->month << "-" << this->year;
}
