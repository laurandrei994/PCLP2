#pragma once

class Punct {
private:
	int x;
	int y;
public:
	//Constructor implicit
	Punct();
	//Constructor explicit
	Punct(int x, int y);
	//Getteri
	int getX();
	int getY();
	//Setteri
	void setX(int x);
	void setY(int y);
	//Alte functii
	void print();

};