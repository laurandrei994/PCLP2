#pragma once
class Punct {
private:
		float x;
		float y;
public:
	
	float getX() const;
	float getY() const;

	void setX(float x);
	void setY(float y);

	Punct(float x = 0, float y = 0);

	Punct(float x, float y);
};
