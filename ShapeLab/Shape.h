#ifndef __SHAPE_H
#define __SHAPE_H

class Shape {

public:
    virtual int sides() const = 0; 
    virtual float getArea() const = 0;
    virtual float getPerimeter() const;



}
#endif
