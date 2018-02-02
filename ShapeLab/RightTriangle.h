#ifndef RightTRIANGLE_H
#define RightTRIANGLE_H

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

class RightTriangle
{
public:
	RightTriangle();
	RightTriangle(float base, float side);
	RightTriangle(const RightTriangle & r);
	~RightTriangle();

	RightTriangle & operator = (const RightTriangle & r);

	float getSide() const;
	void setSide(float s);

	float getBase() const;
	void setBase(float o);

	float getArea()const;
	float getPerimeter()const;

	friend ostream & operator << (ostream & outs, const RightTriangle & e);

	bool operator == (RightTriangle base) const;
	bool operator != (const RightTriangle & base) const;

private:
	float side;
	float base;

};


#endif