#include "Parallelogram.h"
#include <stdio.h>
#include<math.h>
using namespace std;

Parallelogram::Parallelogram()
//default constructor
{
  side1 = 0;
  side2 = 0;
  angle = 0;
}

Parallelogram::Parallelogram(const Parallelogram & s)
//copy constructor
{
  //this.setSide(s.getSide());
  side1 = s.side1;
  side2 = s.side2;
  angle = s.angle;
}

Parallelogram::~Parallelogram()
{

}

Parallelogram & Parallelogram::operator = (const Parallelogram & s) //overloaded assignment operator
{
  side1 = s.side1;
  side2 = s.side2;
  angle = s.angle;
  return * this;
  
}

float Parallelogram::getSide1() const
{
  return side1;

}

void Parallelogram::setSide1(float s)
{
  side1 = s;
}


float Parallelogram::getSide2() const
{
  return side2;
}

void Parallelogram::setSide2(float s)
{
  side2 = s;
}

float Parallelogram::getAngle() const
{
  return angle;

}

void Parallelogram::setAngle(float s)
{
  angle = s;
}

float Parallelogram::getArea() const
{
  float radians = angle * (M_PI/180);
  return (side1 * side2) * sin(radians);

}

float Parallelogram::getPerimeter() const
{
  return (side1 * 2) + (side2 * 2);
}

ostream & operator << (ostream & outs, const Parallelogram & s)
{
  outs << "Parallelogram with side1: " << s.getSide1() << "; side2: ";
  outs <<  s.getSide2() << "; angle: " << s.getAngle() << "; perimeter: ";
  outs << s.getPerimeter() << "; area: " << s.getArea() << "." << endl;
  return outs;
}

bool Parallelogram::operator == (Parallelogram other) const
{
  return (side1 == other.side1  && side2 == other.side2);
}

bool Parallelogram::operator != (const Parallelogram & other) const
{
  if(side1 == other.side1 && side2 == other.side2){
    return false;
  }
  return true;
}








