#include "Rhombus.h"
using namespace std;

Rhombus::Rhombus()
//default constructor
{
  side = 0;
  angle = 0;
}

Rhombus::Rhombus(float s, float a)
//default constructor
{
  side = s;
  angle = a;
}

Rhombus::Rhombus(const Rhombus & s)
//copy constructor
{
  //this.setSide(s.getSide());
  side = s.side;
  angle = s.angle;
}

Rhombus::~Rhombus()
{

}

Rhombus & Rhombus::operator = (const Rhombus & s) //overloaded assignment operator
{
  side = s.side;
  angle = s.angle;
  return * this;
  
}

float Rhombus::getSide() const
{
  return side;
}

void Rhombus::setSide(float s)
{
  side = s;
}


float Rhombus::getAngle() const
{
  return angle;
}

void Rhombus::setAngle(float s)
{
  angle = s;
}


float Rhombus::getArea() const
{
  // side^2 * sin(a-radians)
  float temp  = (side * side);
  return temp * sin (a * (M_PI / 180));
}

float Rhombus::getPerimeter() const
{
  return side * 4;
}

ostream & operator << (ostream & outs, const Rhombus & s)
{
  outs << "Rhombus with side: " << s.getSide() <<  "; angle: " << s.getAngle();
  outs <<"; perimeter: "  << s.getPerimeter() << "; area: " << s.getArea() << "." << endl;
  return outs;
}

bool Rhombus::operator == (Rhombus other) const
{
  return (side == other.side && angle == other.angle);
}

bool Rhombus::operator != (const Rhombus & other) const
{
  if(side == other.side && angle == other.angle){
    return false;
  }
  return true;
}








