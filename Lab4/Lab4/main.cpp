//
//  main.cpp
//  Lab4
//
//  Created by admin on 9/27/22.
//


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


/*Enter 10 elements in the list: 1
 2
 3
 45
 4
 5
 6

 23
 12
 4
 The list of numbers is
 1
 2
 3
 45
 4
 5
 6
 23
 12
 4
 Enter the position of element to remove: 7
 Display the list after Removing the element at give position:
 1
 2
 3
 45
 4
 5
 4
 23
 12
 Enter number to delete it's all occurrence: 4
 Display the list after Removing the all occurrence of 4 :
 1
 2
 3
 45
 5
 23
 12
 Max element is: 45
 Max element is: 1
 Program ended with exit code: 0*/
