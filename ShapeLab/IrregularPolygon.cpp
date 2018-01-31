#include "IrregularPolygon.h"
#include <cmath>

using namespace std;

IrregularPolygon::IrregularPolygon(int numSides, vector<float> sides, vector <float> angles)
//default constructor
{
    if(numSides > 2){
      this->numSides = numSides;
      this->sides = sides;
      this->angles = angles;
    
    }else{
      //doesnt make sense; go screw yourself
      exit(1);
    }
}

IrregularPolygon::IrregularPolygon(const IrregularPolygon & s)
//copy constructor
{
  numSides = s.getNumSides();
  sides = s.getSides();
  angles = s.getAngles();
}

IrregularPolygon::~IrregularPolygon()
{

}

IrregularPolygon & IrregularPolygon::operator = (const IrregularPolygon & s) //overloaded assignment operator
//edit this shit
{
  numSides = s.getNumSides();
  sides = s.getSides();
  angles = s.getAngles();
  return * this;
  
}

float IrregularPolygon::getNumsides() const
{
  return numSides;

}

vector<float> & IrregularPolygon::getSides() const
{
  return sides;

}

vector<float> & IrregularPolygon::getAngles() const
{
  return angles;

}

float IrregularPolygon::triangleArea(float s1, float s2, float s3)
{
  float s = (s1 + s2 + s3)/2;
  return sqrt(s *(s - s1) * (s - s2) * (s - s3));


float IrregularPolygon::getArea() const
{
  if(numSides == 3){
    return triangleArea(sides[0], sides[1], sides[2]);
  }
  float area = 0;
  int currentSideIndex = numSides - 1;
  int currentAngleIndex = numSides - 1;
  //must have at least 4 sides
  vector <float> lines;
  vector<float> partialAngles;
  float line1, partialAngle1;
  bool firstLoop = true;
  int l = 0;//lines/partialAngles accumulator 
  while(currentSideIndex != 2){
     
    if(firstLoop){
      //compute cosine idenity with a[0] side[0] & side[currentSideIndex]
      line1 = (side[0] * side[0]) + (side[currentSideIndex] * side[currentSideIndex]);
      line1 += sqrt(2 *(side[0] * side[currentSideIndex]) * cos (angles[0]));
      lines.push_back(line1);
      //now with line we can do sine law to get the part of angles[currentSideIndex]
      partialAngle1 = (lines[0]*angles[0])/sides[currentSideIndex];
      partialAngles.push_back(partialAngle1);

      area += triangleArea(sides[0], sides[currentSideIndex], lines[0]);  //add first 

      //float angles[currentAngleIndex] - partialAngle1;

      currentSideindex--;
      firstLoop = false;
    }
  
  line1 = (lines[l] *  lines[l]) + (sides[currentSideIndex] * sides[currentSideIndex]);
  line1 += sqrt(2 * sides[currentSideIndex] * lines[l] * cos (angles[currentAngleIndex] - partialAngles[l]));
  lines.push_back(line1);

  partialAngle1 = (lines[l] * partialAngles[l])/ sides[currentSideIndex];
  partialAngles.push_back(partialAngle1);

  area += triangleArea(sides[currentSideIndex], lines[l], lines[l+1]);

  //things to inc/dec:  
  //  ++: l
  //  --: currentSideIndex, currentAngleIndex  

  l++;
  currentSideIndex--;
  currentAngleIndex--;

  }

  // compute & += area of last triangle
  area += triangleArea(sides[1], sides[2], lines[l]);
  return area;
}

float IrregularPolygon::getPerimeter() const
{
  int perimeter = 0;
  for (int i = 0; i < numSides; i++){
    perimeter += sides[i];
  }
  return perimeter;
}

ostream & operator << (ostream & outs, const IrregularPolygon & s)
{
  outs << "A Irregular Polygon with " << s.getNumSides() << " sides" << ", has a perimeter of ";
  outs << s.getPerimeter() << ", and an area of " << s.getArea() << "." << endl;
  return outs;
}

bool IrregularPolygon::operator == (IrregularPolygon other) const
{
  if (numSides != other.numSides)
      return false;
  for (int i = 0; i < numSides; i++) {
      if ((sides[i] != other.sides[i]) || (angles[i] != other.angles[i]))
          return false;
  }
  return true;
}

bool IrregularPolygon::operator != (const IrregularPolygon & other) const
{
  for (int i = 0; i < numSides; i++) {
      if ((sides[i] != other.sides[i]) || (angles[i] != other.angles[i])){
          return true;
      }
  }
  return false;
}








