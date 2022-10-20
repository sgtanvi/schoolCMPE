//============================================================================
// Name        : intro.cpp
// Author      : Tanvi Guttula
// Version     :
// Copyright   : 
// Description : introdution lab: reviewing CMPE 50
//============================================================================


/*************************************************************
 *
 * //problem 1
 * Objective    : A program that creates student
 * Input        : object
 * Output       :
 **************************************************************/

class Triangle{
    public:
    
    double side1; //smallest
    double side2;
    double side3; //largest  
    Triangle(double x,double y, double z){
        
    }

    double perimeter = side1 + side2 +side3; 

    double area = 0.5* side1 *side2; 
   

    void Print(){
        cout<<"area = "+ area;
        cout<<"perimeter" + area; 

    }
};
