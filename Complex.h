#pragma once
#include <iostream>

class complex {
private:
	double real;
	double img;

public:

	//constructors
	//complex();  //implicit

	//complex(double real, double img); //explicit

	complex(double real = 0, double img = 0); //exp. cu val.

	//getteri

	double getReal() const;
	double getImg() const;

	//setteri
	void setReal(double real);
	void setImg(double img);

	//destructor
	~complex();


	//others
	complex operator+ (complex c);
	complex operator+(int i);
	friend std::istream& operator>>(std::istream& in, complex& c);

	
};
