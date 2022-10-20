#include "Rectangle.h"
#include "BasicShape.h"
#include "Circle.h"

#include <iostream>
using namespace std;

int main() {
 BasicShape* rect = new Rectangle(10,15);
 	cout<<"Area of the Rectangle: "<<rect->getArea()<<endl;
 
 BasicShape* circ = new Circle(0,0,8);
 	cout<<"Area of the Circle: "<<circ->getArea()<<endl;
	
	return 0;
}
