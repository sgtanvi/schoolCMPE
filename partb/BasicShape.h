#ifndef BASICSHAPE_H_
#define BASICSHAPE_H_

class BasicShape{
private:
	double area;			//double used to hold the shape's area
public:
	double getArea()const;		//returns the alue in member variable area
	void calcArea();			//VIRTUAL FUNCTION	
	void setArea(double area);  //takes area from user n sets referance 
	

};



#endif /* BASICSHAPE_H_ */
