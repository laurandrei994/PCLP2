#pragma once


class Punct
{
private:
    float x;
    float y;
public:

    float getX();
    float getY();

    void setX(float x);
    void setY(float y);

    Punct();
    Punct(float x, float y);

    ~Punct();
};