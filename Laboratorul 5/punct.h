#pragma once
class Punct
{
private:
	double x;
	double y;

public:

	//constructor implicit
	Punct();

	//constructor explicit
	Punct(double xVal, double yVal);
	

	//setteri
	void setX(double val);
	void setY(double val);


	//getteri
	double getX();
	double getY();

};