//
//  Shapes.cpp
//  assignment 5
//
//  Created by Jose Gotuzzo, Robert Gonzalez, Griffin Yee on 4/30/16.
//  Copyright © 2016 Jose Gotuzzo. All rights reserved.


#include "Shapes.hpp"
#include <cmath>
using std::abs;

Rectangle::Rectangle(Point c, double x, double y) : c(c), x(x), y(y){
    
}

bool Rectangle::contains(const Point & p) const{
    
    if (abs(p.getx() - c.getx()) <= x && abs(p.gety() - c.gety()) <= y)
        return true;
    else
        return false;

}
    
Square::Square(Point c, double side) : Rectangle(c, side, side){
    
}

Ellipse::Ellipse(Point x, Point y, double distance) : distance(distance), x(x), y(y){
    
}

bool Ellipse::contains(const Point & p) const{
    
    if (x.distance(p) + y.distance(p) <= distance)
        return true;
    else
        return false;
}

Circle::Circle(Point c, double diameter) : Ellipse(c, c, diameter){
    
}