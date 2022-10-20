//
//  rectangle.h
//  lab3
//
//  
//
using namespace std;
#define PI 3.14159265358979323846

#ifndef rectangle_h
#define rectangle_h
#include "circle.h"
#include "shape.h"
#include "triangle.h"

class rectangle : public shape{
    int length;
    int width;

public:
    
    void getParameters(){
        cout << "Enter length of Rectangle: ";
        cin >> length;
        cout << "Enter width of Rectangle: ";
        cin >> width;
    }

    void area(){
        cout << "The area of Rectanlge: " << length * width << "\n";
    }
};


#endif /* rectangle_h */
