#ifndef RIGHT_H
#define RIGHT_H

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

class Right
{
public:
	Right();
	Right(float base, float side);
	Right(const Right & r);
	~Right();

	Right & operator = (const Right & r);

	float getSide() const;
	void setSide(float s);

	float getBase() const;
	void setBase(float o);

	float getArea()const;
	float getPerimeter()const;

	friend ostream & operator << (ostream & outs, const Right & e);

	bool operator == (Right base) const;
	bool operator != (const Right & base) const;

private:
	float side;
	float base;

};


#endif