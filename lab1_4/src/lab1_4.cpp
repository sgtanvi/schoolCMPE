//============================================================================
// Name        : lab1_4.cpp
// Author      : Tanvi Guttula
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

/*************************************************************
 *
 * //Lab1 - Part 4
 * Objective    : A program that calculates the factorial of user entered number
 * Input        : int numFact
 * Output       :
Enter number greater than -1: -1
please enter an integer greater that -1: 5
Factorial of 5 is 120

 *
 *
 **************************************************************/


#include <iostream>
using namespace std;

int main() {
	int numFact;
	int factorial = 1;
	cout<<"Enter number greater than -1:";
	cin>>numFact;
	while(numFact < 0) {									//get user to input a number greater than -1
		cout<< "please enter an integer greater that -1:";
		cin >> numFact;
	}
	for(int i = 1 ; i <= numFact; i++){						//for loop that loops until reaches user inputed value
		factorial= factorial*(i);							//calculation

	}

	cout << "Factorial of " << numFact
			<< " is " << factorial << endl; // prints
	return 0;
}
