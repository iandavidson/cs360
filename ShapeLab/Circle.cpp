#include "Circle.h"
using namespace std;

Circle::Circle()
//default constructor
{
  radius = 0;
}

Circle::Circle(float r)
{
  radius = r;
}


Circle::Circle(const Circle & s)
//copy constructor
{
  //this.setradius(s.getradius());
  radius = s.radius;
}

Circle::~Circle()
{

}

Circle & Circle::operator = (const Circle & s) //overloaded assignment operator
{
  radius = s.radius;
  return * this;
  
}

float Circle::getRadius() const
{
  return radius;

}

void Circle::setRadius(float s)
{
  radius = s;
}


float Circle::getArea() const
{
  return M_PI * (radius) * (radius);
}

float Circle::getPerimeter() const
{
  return 2 * radius * M_PI;
}

ostream & operator << (ostream & outs, const Circle & s)
{
  outs << "A Circle with radius length of " << s.getRadius() << ", has a circumfrence of ";
  outs << s.getPerimeter() << ", and an area of " << s.getArea() << "." << endl;
  return outs;
}

bool Circle::operator == (Circle other) const
{
  return radius == other.radius;
}

bool Circle::operator != (const Circle & other) const
{
  return radius != other.radius;
}