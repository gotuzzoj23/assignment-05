//
//  Point.cpp
//  assignment 5
//
//  Created by Jose Gotuzzo, Robert Gonzalez, Griffin Yee on 4/30/16.
//  Copyright © 2016 Jose Gotuzzo. All rights reserved.
//

#include "Point.hpp"
#include <cmath>

Point::Point(double x, double y) : x(x),y(y){
}

double Point::getx()const{
    return x;
}

double Point::gety()const{
    return y;
}

double Point::distance(const Point & p) const {
    return sqrt(pow(x - p.x,2) + pow(y - p.y,2));
}


