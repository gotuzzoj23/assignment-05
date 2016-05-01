//
//  main.cpp
//  assignment 5
//
//  Created by Jose Gotuzzo, Robert Gonzalez, Griffin Yee on 4/30/16.
//  Copyright © 2016 Jose Gotuzzo. All rights reserved.

#include <iostream>
#include <vector>
#include<chrono>
#include<thread>
#include "Point.hpp"
#include "Shapes.hpp"

using std::cout;
using std::endl;
using std::vector;


/**
 * A function to draw the `Shape*`s in the given vector in a terminal.
 *
 * Arguments:
 * - `v`: A vector containing pointers to each `Shape` to draw.
 *
 * Notes:
 * - A terminal window is typically 80 columns wide by 25 lines high.
 * - The width:height aspect ratio of a terminal character is approximately
 *   1:1.9.
 */
void draw(const vector<Shape*> & v) {
 
    double xSize = 80;
    double ySize = 25;
    double yScale = 1.9;
    bool iPoint = false;
    
    for(int y = 0; y < ySize; y++){

        for (int x = 0 ; x < xSize; x++) {
            
            for (Shape* e : v){
                
                if (e->contains(Point(x,y * yScale)) == true){
                    
                    iPoint = true;
                    break;
                }
            }
            
            if(iPoint)
                cout << "*";
            else
                cout<< " ";
        }
        cout << endl;
    }
}








int main() {
    
    const int frames = 25;
    const int frameSleep = 100;
   
    Rectangle r(Point(4,20), 10, 4);
    Ellipse e(Point(40, 20), Point(40, 10), 20);
    Square s(Point(6, 5), 7);
    Circle c(Point(55,32), 14);
    
    vector<Shape*> shapes = { &r, &e, &s, &c, };
    
    
    for (int i = 0; i < frames; i++){

        r.setHeight(11+i);
        e.setDistance(20 - i / 4);
        s.move_point(Point(6 + 2 * i, 5 + 1 * i));
        c.set_x(Point(55-2 * i, 25 - i / 2));
        c.set_y(Point(55-2 * i, 25 - i / 2));

        
        
        draw(shapes);
        
        std::this_thread::sleep_for(std::chrono::milliseconds(frameSleep));
        
    }
   
    return 0;
}

    // declare constants for the number of frames to draw and the
    // amount of time to sleep after drawing each frame
    
    // for each frame
    
    // create some shapes (with values depending on the current frame
    // number)
    
    // put pointers to them in an array
    //
    // for example, given a `Rectangle r` and a `Square s`:
    //vector<Shape*> shapes = { &r, &s, };
    // this is possible because `Rectangle`s and `Squares`, and all
    // your other shapes, inherit from `Shape`
    
    // draw the shapes in the terminal
    //
    // for example, given the `shapes` array above:
    //draw(shapes);
    
    // wait before drawing the next frame
    //
    // for example:
    //std::this_thread::sleep_for(std::chrono::milliseconds(frameSleep));
    // if you'd like to know more about what this line is doing, look
    // up the documentation for `std::this_thread::sleep_for` and
    // `std::chrono::milliseconds()`.
    
    //return 0; success
