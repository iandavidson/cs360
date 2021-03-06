#ifndef IRREGULARPOLYGON_H
#define IRREGULARPOLYGON_H

#include <vector>
#include <iostream>
#include <stdlib.h>
#include <iomanip>

using namespace std;

class IrregularPolygon
{
 public:

  IrregularPolygon(int numSides, float s[], float a[]);//constructor
  IrregularPolygon(const IrregularPolygon & IrregularPolygon);//copy constructor
  ~IrregularPolygon();//destructor

  IrregularPolygon & operator = (const IrregularPolygon & s);//overloaded assignment
  
  float getNumSides()const;
  
  float*  getSides()const;
  
  float*  getAngles()const;

  float getArea()const;

  float getPerimeter()const;
  

  friend ostream & operator << (ostream & outs, const IrregularPolygon & s);
  
  bool operator == (IrregularPolygon other) const;
  bool operator != (const IrregularPolygon & that) const;

 private:

  int numSides;
  float *sides;
  float *angles;

  void setNumSides(float i);  //  will literally break it
  float triangleArea(float s1, float s2, float s3) const;
};





#endif
