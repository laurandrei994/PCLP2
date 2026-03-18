#pragma once

class Punct {
private:
	double x;
	double y;

public:
	Punct(); // Constructor implicit
	Punct(double x, double y); // Constructor explicit

	double getX() const;
	double getY() const;

	void setX(double x);
	void setY(double y);

	~Punct();

	void afisare() const;
};

