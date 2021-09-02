//============================================================================
// Name        : lab1_5.cpp
// Author      : Tanvi Guttula
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================


/*************************************************************
 *
 * //Lab1 - Part 5
 * Objective    : A program that returns all prime numbers starting from 3 to user inputed int k
 * Input        : int k; User entered 20
 * Output       :
3 is a prime number
5 is a prime number
7 is a prime number
11 is a prime number
13 is a prime number
17 is a prime number
19 is a prime number

 **************************************************************/

#include <iostream>
#include <cmath>
using namespace std;

int main() {

	int k, i;

	    //cout << "Enter a number greater than 2" << endl; THere is no prompt

	    cin >> k; //gets user input
	   while( k<3) {cout<<"Please enter a number greater than 2:"; //ensures user inputs a number greater than two
	   cin >> k;
	   }

	for (i=2; i<=k; i++)					//for loop to run through the numbers until user inputed integer is reached
	            for (int j = 2; j<=i; j++)  // for loop that helps divide the number
	            {

	                if (i % j == 0) 		//stops dividing and breaks out of for loop when number is reached
	                    break;
	                else if (i == j+1)		// checks if its a prime yet
	                    cout << i << " is a prime number \n" ;

	            }
    return 0;
}




