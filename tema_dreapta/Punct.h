#pragma once

class Punct
{
private:
	double x;
	double y;

public:

	//Constructor implicit
	Punct();

	//Constructor explicit
	Punct(double x, double y);

	//Getteri
	double getX() const;
	double getY() const;

	//Setteri
	void setX(double x);
	void setY(double y);

	//Destructor
	~Punct();

};