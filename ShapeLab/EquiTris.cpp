#include "EquiTris.h"

using namespace std;

EquiTris::EquiTris()

{
	side = 0;
}

EquiTris::EquiTris(float s)
{
	side = s;
}

EquiTris::EquiTris(const EquiTris & e)
{
	side = e.side;
}



EquiTris::~EquiTris()
{

}

EquiTris & EquiTris::operator = (const EquiTris & e)
{
	side = e.side;
	return * this;
}

float EquiTris::getSide() const
{
	return side;
}


void EquiTris::setSide(float s)
{
	side = s;
}

float EquiTris::getArea() const
{
	return ((sqrt(3)/4) * side * side);
}


float EquiTris::getPerimeter() const
{
	return side * 3;
}

ostream & operator << (ostream & outs, const EquiTris & e)
{
	outs << "A equalateral triangle with side length of " << e.getSide() << ", has a perimeter of ";
  	outs << e.getPerimeter() << ", and an area of " << e.getArea() << "." << endl;
  	return outs;
}

bool EquiTris::operator == (EquiTris other) const
{
	return side == other.side;
}


bool EquiTris::operator != (const EquiTris & other) const
{
	return side != other.side;
}



