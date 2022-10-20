//============================================================================
// Name        : Lab4-ArrayList.cpp
// Author      : Tanvi Guttula
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "arrayListType1.h"
using namespace std;

int main() {

	int n = 10;
	int elem, pos, occ;
	arrayListType<int>nums;
	cout << "Enter 10 elements in the list: ";
	for(int i = 0; i < n; i++)
	{
		cin >> elem;
		nums.insertEnd(elem);
	}

	cout << "The list of numbers is " << endl;
	nums.print();

	cout << "Enter the position of element to remove: ";
	cin >> pos;
	nums.removeAt(pos);
	cout << "Display the list after Removing the element at give position: " << endl;
	nums.print();
	cout << "Enter number to delete it's all occurrence: ";
	cin>>occ;
	nums.removeAll(occ);
	cout << "Display the list after Removing the all occurrence of " << occ << " : " << endl;
	nums.print();

	cout << "Max element is: " << nums.max() << endl;
	cout << "Max element is: " << nums.min() << endl;

	return 0;
}
