#ifndef Circle_H
#define Circle_H

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

class Circle
{
 public:

  Circle();//constructor
  Circle(const Circle & Circle);//copy constructor
  ~Circle();//destructor

  Circle & operator = (const Circle & c);//overloaded assignment
  
  float getRadius()const;
  void setRadius(float i);
  //float & Side();

  float getArea()const;

  float getPerimeter()const;


  friend ostream & operator << (ostream & outs, const Circle & s);
  
  bool operator == (Circle other) const;
  bool operator != (const Circle & that) const;

 private:

  float radius;
  
};





#endif
