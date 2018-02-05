#include "Right.h"

using namespace std;

Right::Right()
{
	side = 0;
	base = 0;
}

Right::Right(float b, float s)
{
	side = s;
	base = b;
}

Right::Right(const Right & e)
{
	side = e.side;
	base = e.base;
}

Right::~Right()
{

}

Right & Right::operator = (const Right & e)
{
	side = e.side;
	base = e.base;
	return * this;
}

float Right::getSide() const
{
	return side;
}


void Right::setSide(float s)
{
	side = s;
}


float Right::getBase() const
{
	return base;
}


void Right::setBase(float s)
{
	base = s;
}

float Right::getPerimeter() const
{
	return side + base + sqrt(side*side + base*base);
}

float Right::getArea() const
{
	
	float area = base * side;
	area /= 2;
	return area;
}

ostream & operator << (ostream & outs, const Right & r)
{
	outs << "A right triangle with side length of " << r.getSide() << " and a base side of ";
	outs << r.getBase() << ", has a perimeter of ";
  	outs << r.getPerimeter() << ", and an area of "; 
  	outs << r.getArea() << "." << endl;
  	return outs;
}

bool Right::operator == (Right that) const
{
	if(that.side == side && that.base == base)
		return true;
	return false;
}


bool Right::operator != (const Right & that) const
{
	if(that.side == side && that.base == base)
		return false;
	return true;
}