#include "BasicShape.h"
#ifndef CIRCLE_H_
#define CIRCLE_H_


class Circle : public BasicShape			//derived from BasicShape
{
private:
	long centerX;							//long variable with x-coordinate of circle
	long centerY;							//long variable with y-coordinate of circle
	double radius;							//cirlce's radius
public:
	Circle();											//default
	Circle(long centerX, long centerY, double radius);  //accepts values for variables 
	double getcenterX();								//returns value in centerX
	double getcenterY();								//returns value in centerY
	double getradius();									//returns value in radius
	 void calcArea();									//calculates n stores result in inherited member area
};



#endif /* CIRCLE_H_ */
