#ifndef TRAPAZOID_H
#define TRAPAZOID_H

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

class Trapazoid
{
 public:

  Trapazoid();//constructor
  Trapazoid(const Trapazoid & trapazoid);//copy constructor
  Trapazoid(float top, float bottom, float height);
  ~Trapazoid();//destructor

  Trapazoid & operator = (const Trapazoid & s);//overloaded assignment
  
  float getTop()const;
  void setTop(float i);
  
  float getBottom()const;
  void setBottom(float i);

  float getHeight()const;
  void setHeight(float i);

  float getArea()const;

  float getPerimeter()const;


  friend ostream & operator << (ostream & outs, const Trapazoid & s);
  
  bool operator == (Trapazoid other) const;
  bool operator != (const Trapazoid & that) const;

 private:

  float top;
  float bottom;
  float height;

};





#endif
