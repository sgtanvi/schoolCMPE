//
//  circle.h
//  lab3
//
//  Created by admin on 9/20/22.
//
using namespace std;
#define PI 3.14159265358979323846

#ifndef circle_h
#define circle_h
#include "triangle.h"
#include "shape.h"
#include "rectangle.h"

class circle : public shape{
    int radius;

public:

    void getParameters(){
        cout << "Enter radius of Circle: ";
        cin >> radius;
    }

    void area(){
        cout << "The area of circle is: " << PI * radius * radius << "\n";
    }
};
#endif /* circle_h */
