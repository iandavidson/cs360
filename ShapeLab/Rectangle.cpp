#include "Rectangle.h"
using namespace std;

Rectangle::Rectangle()
//default constructor
{
  side1 = 0;
  side2 = 0;
}

Rectangle::Rectangle(const Rectangle & s)
//copy constructor
{
  //this.setSide(s.getSide());
  side1 = s.side1;
  side2 = s.side2;
}

Rectangle::~Rectangle()
{

}

Rectangle & Rectangle::operator = (const Rectangle & s) //overloaded assignment operator
{
  side1 = s.side1;
  side2 = s.side2;
  return * this;
  
}

float Rectangle::getSide1() const
{
  return side1;

}

void Rectangle::setSide1(float s)
{
  side1 = s;
}


float Rectangle::getSide2() const
{
  return side2;

}

void Rectangle::setSide2(float s)
{
  side2 = s;
}


float Rectangle::getArea() const
{
  return side1 * side2;
}

float Rectangle::getPerimeter() const
{
  return (side1 * 2) + (side2 * 2);
}

ostream & operator << (ostream & outs, const Rectangle & s)
{
  outs << "A Rectangle with side1 length of " << s.getSide1() << " and a side2 of length ";
  outs <<  s.getSide2() <<", has a perimeter of ";
  outs << s.getPerimeter() << ", and an area of " << s.getArea() << "." << endl;
  return outs;
}

bool Rectangle::operator == (Rectangle other) const
{
  return (side1 == other.side1  && side2 == other.side2);
}

bool Rectangle::operator != (const Rectangle & other) const
{
  if(side1 == other.side1 && side2 == other.side2){
    return false;
  }
  return true;
}








