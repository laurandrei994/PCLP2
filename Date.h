#ifndef DATE_H
#define DATE_H

class Date
{
private:
	int day;
	int month;
	int year;

public:
	//Constructor
	//Date(); //Constructor implicit
	//Date(int d, int m, int y); //Constructor explicit
	Date(int d = 1, int m = 1, int y = 2000); //Constructor cu valori

	//Getteri
	int getDay() const;
	int getMonth() const;
	int getYear() const;

	//Setteri
	void setDay(int d);
	void setMonth(int m);
	void setYear(int y);

	//Destrcutor
	~Date();

	//Alte Functii
	void printDate();
};
#endif
