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
	RightTriangle(const RightTriangle & r);
	~RightTriangle();

	RightTriangle & operator = (const RightTriangle & r);

	float getSide() const;
	void setSide(float s);

	float getOther() const;
	void setOther(float o);

	float getArea()const;
	float getPerimeter()const;

	friend ostream & operator << (ostream & outs, const RightTriangle & e);

	bool operator == (RightTriangle other) const;
	bool operator != (const RightTriangle & other) const;

private:
	float side;
	float other;

};


#endif