#include "IrregularPolygon.h"

using namespace std;

IrregularPolygon::IrregularPolygon()//edit this shit
//default constructor
{
  side = 0;
}

IrregularPolygon::IrregularPolygon(const IrregularPolygon & s)	//edit this shit
//copy constructor
{
  //this.setSide(s.getSide());
  side = s.side;
}

IrregularPolygon::~IrregularPolygon()
{

}

IrregularPolygon & IrregularPolygon::operator = (const IrregularPolygon & s) //overloaded assignment operator
//edit this shit
{
  side = s.side;
  return * this;
  
}

float IrregularPolygon::getSide() const
{
  return side;

}

void IrregularPolygon::setSide(float s)
{
  side = s;
}


float IrregularPolygon::getArea() const
{
  return side * side;
}

float IrregularPolygon::getPerimeter() const
{
  return side * 4;
}

ostream & operator << (ostream & outs, const IrregularPolygon & s)
{
  outs << "A IrregularPolygon with side length of " << s.getSide() << ", has a perimeter of ";
  outs << s.getPerimeter() << ", and an area of " << s.getArea() << "." << endl;
  return outs;
}

bool IrregularPolygon::operator == (IrregularPolygon other) const
{
  return side == other.side;
}

bool IrregularPolygon::operator != (const IrregularPolygon & other) const
{
  return side != other.side;
}








