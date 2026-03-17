#pragma once
class punct {
private:
	double x, y;
public:
	punct();

	punct(double x, double y);

	double getX()const;
	double getY()const;
	void getX(double x);
	void getY(double y);

};