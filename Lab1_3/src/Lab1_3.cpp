//============================================================================
// Name        : Lab1_3.cpp
// Author      : Tanvi Guttula
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

/*************************************************************
 *
 * //Lab1 - Part 3
 * Objective    : A program that calculates a raised to the power of b
 * Input        : int a, int b
 * Output       :

enter an integer for a in a^b:
2
enter an integer for b in a^b:
3
2 raised to the power 3 is 8
 *
 *
 **************************************************************/


#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int a,b;

	cout << "enter an integer for a in a^b:\n";// prompts for int a
	cin >> a ;

	cout << "enter an integer for b in a^b:\n"; // prompts for int b
		cin >> b;

	int result = pow(a,b);

	cout << a << "raised to the power "
			<< b << " is "
			<<result << endl;

			return 0;
}
