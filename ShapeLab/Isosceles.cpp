#include "Isosceles.h"

using namespace std;

Isosceles::Isosceles()

{
	side = 0;
	base = 0;
}

Isosceles::Isosceles(float b, float s)

{
	side = s;
	base = b;
}

Isosceles::Isosceles(const Isosceles & i)
{
	side = i.side;
	base = i.base;
}

Isosceles::~Isosceles()
{

}

Isosceles & Isosceles::operator = (const Isosceles & e)
{
	side = e.side;
	base = e.base;
	return * this;
}

float Isosceles::getSide() const
{
	return side;
}


void Isosceles::setSide(float s)
{
	side = s;
}

float Isosceles::getBase() const
{
	return base;
}


void Isosceles::setBase(float b)
{
	base = b;
}



float Isosceles::getArea() const
{
	float area = sqrt(4*(side * side) - (base * base));
	area *= base/4;
	return area;
}


float Isosceles::getPerimeter() const
{
	return base + side * 2;
}

ostream & operator << (ostream & outs, const Isosceles & e)
{
	outs << "Isosceles Triangle with side: " << e.getSide() << "; base: ";
	outs << e.getBase() << "; perimeter: ";
  	outs << e.getPerimeter() << ": area: " << e.getArea() << "." << endl;
  	return outs;
}

bool Isosceles::operator == (Isosceles other) const
{
	if(other.side == side && other.base == base)
		return true;
	return false;

}


bool Isosceles::operator != (const Isosceles & other) const
{
	if(other.side == side && other.base == base)
		return false;
	return true;
}



