#ifndef EQUITRIS_H
#define EQUITRIS_H

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

class EquiTris
{
public:
	EquiTris();
	EquiTris(float s);
	EquiTris(const EquiTris & e);
	~EquiTris();

	EquiTris & operator = (const EquiTris & e);

	float getSide() const;
	void setSide(float s);


	float getArea()const;
	float getPerimeter()const;

	friend ostream & operator << (ostream & outs, const EquiTris & e);

	bool operator == (EquiTris other) const;
	bool operator != (const EquiTris & other) const;

private:
	float side;


};


#endif