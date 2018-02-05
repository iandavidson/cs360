#ifndef ISOSCELES_H
#define ISOSCELES_H

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

class Isosceles
{
public:
	Isosceles();
	Isosceles(float base, float side);
	Isosceles(const Isosceles & i);
	~Isosceles();

	Isosceles & operator = (const Isosceles & i);

	float getSide() const;
	void setSide(float s);

	float getBase() const;
	void setBase(float b);


	float getArea()const;
	float getPerimeter()const;

	friend ostream & operator << (ostream & outs, const Isosceles & i);

	bool operator == (Isosceles other) const;
	bool operator != (const Isosceles & other) const;

private:
	float side;
	float base;


};


#endif