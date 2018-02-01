#ifndef PARALLELOGRAM_H
#define PARALLELOGRAM_H

#include <iostream>
#include <iomanip>

using namespace std;

class Parallelogram
{
 public:

  Parallelogram();//constructor
  Parallelogram(const Parallelogram & Parallelogram);//copy constructor
  Parallelogram(float side1, float side2, float angle);
  ~Parallelogram();//destructor

  Parallelogram & operator = (const Parallelogram & s);//overloaded assignment
  
  float getSide1()const;
  void setSide1(float i);
  
  float getSide2()const;
  void setSide2(float i);

  float getAngle()const;
  void setAngle(float i);

  float getArea()const;

  float getPerimeter()const;


  friend ostream & operator << (ostream & outs, const Parallelogram & s);
  
  bool operator == (Parallelogram other) const;
  bool operator != (const Parallelogram & that) const;

 private:

  float side1;
  float side2;
  float angle;
  
};





#endif
