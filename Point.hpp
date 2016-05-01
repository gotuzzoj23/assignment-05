//
//  Point.hpp
//  assignment 5
//
//  Created by Jose Gotuzzo, Robert Gonzalez, Griffin Yee on 4/30/16.
//  Copyright © 2016 Jose Gotuzzo. All rights reserved.


#ifndef Point_hpp
#define Point_hpp

#include <stdio.h>

class Point{
private:
    
    double x;
    double y;
    
public:
    
    Point(){
        x = 0;
        y = 0;
    }
    
    Point( double x, double y);
    
    double getx()const;
    double gety()const;
    
    double distance(const Point & p) const;
    
    
};

#endif /* Point_hpp */
