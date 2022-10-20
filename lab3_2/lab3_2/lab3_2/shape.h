//
//  shape.h
//  lab3
//
//  Created by admin on 9/20/22.
//
using namespace std;
#define PI 3.14159265358979323846

#ifndef shape_h
#define shape_h
#include<iostream>
#include<vector>
class shape{
public:
    virtual void area() = 0;
    virtual void getParameters() = 0;
};

#endif /* shape_h */
