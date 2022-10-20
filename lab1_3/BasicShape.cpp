//============================================================================
// Name        : BasicShape.cpp
// Author      : Tanvi Guttula
// Version     :
// Copyright   : 
// Description : hw1
//============================================================================
#include "BasicShape.h"
#include "Circle.h"
#include "Rectangle.h"

//basic shape 

double BasicShape::getArea()const{			//returns area and constant
	return area;
}

void BasicShape::setArea(double area){		//used to retrieve object area hidden by local variable area
	this->area = area;
}


//Rectagle

long Rectangle::getwidth()const{			//returns width and constant value
	return width;
}

long Rectangle::getlength()const{			//returns legth and constant value
	return length;
}

void Rectangle::calcArea(){
	double myArea;							
	myArea = length * width;
	setArea(myArea);
}

Rectangle::Rectangle(long width, long length){
	this->width = width;
	this->length = length;
	calcArea();
}


//Circle


double Circle::getcenterX(){
	return centerX;
}
double Circle::getcenterY(){
	return centerY;
}

double Circle::getradius(){
	return radius;
}

void Circle::calcArea(){
	double myArea;
	myArea = 3.14159 * radius * radius;
	setArea(myArea);
}

Circle::Circle(long centerX, long centerY, double radius){
	this->centerX = centerX;
	this->centerY = centerY;
	this->radius = radius;
	calcArea();
}


