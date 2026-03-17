#pragma once


class Punct {

private:
	double x;
	double y;
public:

	//constructor implicit
	Punct();

	//constructor explicit
	Punct(double x, double y);

	//getteri
	double getX() const;
	double getY() const;

	//setteri
	void setX(double x);
	void setY(double y);

	
};