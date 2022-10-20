#include "BasicShape.h"
#ifndef RECTANGLE_H_
#define RECTANGLE_H_

class Rectangle : public BasicShape{ 		//derived from BasicShape Classs
private:
	long width;								// width of rectangle
	long length;							//legth of rectangle
public:
	Rectangle();							//default
	Rectangle(long width, long length);		//constructor
	long getwidth()const;					// returns width
	long getlength()const;					//returns length
	void calcArea();						//calcutates area and stores in inherited member area
};



#endif /* RECTANGLE_H_ */
