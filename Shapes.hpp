//
//  Shapes.hpp
//  assignment 5
//
//  Created by Jose Gotuzzo, Robert Gonzalez, Griffin Yee on 4/30/16.
//  Copyright © 2016 Jose Gotuzzo. All rights reserved.


#ifndef Shapes_hpp
#define Shapes_hpp

#include <stdio.h>
#include "Point.hpp"

class Shape{
public:
   
    virtual bool contains(const Point & p) const = 0;
    
    virtual ~Shape() = default;
    
};

class Rectangle: public Shape{
protected:
    
    Point c;
    double x;
    double y;
    
public:
   
    Rectangle(Point c = Point(0,0), double x = 0, double y = 0);
    
    virtual void setLenght(double l){
        this -> x = l;
    }
    
    virtual void setHeight(double h){
        this-> y = h;
    }
    
    virtual void move_point(Point p){
        c = p;
    }
    
    bool contains(const Point & p) const ;
    
};

class Ellipse: public Shape{
protected:
    
    Point x;
    Point y;
    double distance;

public:
    
    Ellipse(Point x = Point(0,0), Point y = Point(0,0), double distance = 0);
   
    virtual void set_x(Point x){
        this->x = x;
    }
    
    virtual void set_y(Point y){
        this->y = y;
    }
    
    virtual void setDistance(double distance){
        this->distance = distance;
    }
    
    bool contains(const Point & p) const;

    
};

class Square: public Rectangle{
public:
    
    Square(Point c = Point(0,0), double side = 0);
    
};

class Circle: public Ellipse{
public:
    
    Circle(Point c = Point(0,0), double diameter = 0);
    
};


/**
 * A function to determine whether a shape contains a given point.
 *
 * Arguments:
 * - `p`: The point we are considering.
 *
 * Returns:
 * - `true` if the given point is inside the shape, `false`
 *   otherwise.
 */
//virtual bool contains(const Point & p) const = 0;






#endif /* Shapes_hpp */
