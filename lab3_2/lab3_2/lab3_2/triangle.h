//
//  triangle.h
//  lab3
//
// 
//
#include "circle.h"
#include "shape.h"
#include "rectangle.h"


#ifndef triangle_h
#define triangle_h
using namespace std;

#include<iostream>
#include<vector>
#define PI 3.14159265358979323846

class triangle : public shape
{
    int base;
    int height;

public:

    
    void getParameters(){
        cout << "Enter length of Triangle: ";
        cin >> base;
        cout << "Enter height of Triangle: ";
        cin >> height;
    }

    void area(){
        cout << "The area of Triangle is: " << 0.5 * base * height << "\n";
    }
};


#endif /* triangle_h */



