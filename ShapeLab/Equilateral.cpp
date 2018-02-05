#include "Equilateral.h"

using namespace std;

Equilateral::Equilateral()

{
  side = 0;
}

Equilateral::Equilateral(float s)
{
  side = s;
}

Equilateral::Equilateral(const Equilateral & e)
{
  side = e.side;
}



Equilateral::~Equilateral()
{

}

Equilateral & Equilateral::operator = (const Equilateral & e)
{
  side = e.side;
  return * this;
}

float Equilateral::getSide() const
{
  return side;
}


void Equilateral::setSide(float s)
{
  side = s;
}

float Equilateral::getArea() const
{
  return ((sqrt(3)/4) * side * side);
}


float Equilateral::getPerimeter() const
{
  return side * 3;
}

ostream & operator << (ostream & outs, const Equilateral & e)
{
  outs << "Equalateral Triangle side: " << e.getSide() << "; perimeter: ";
  outs << e.getPerimeter() << "; area: " << e.getArea() << "." << endl;
  return outs;
}

bool Equilateral::operator == (Equilateral other) const
{
  return side == other.side;
}


bool Equilateral::operator != (const Equilateral & other) const
{
  return side != other.side;
}
