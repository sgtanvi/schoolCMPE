//
//  main.cpp
//  Lab5
//
//  Created by admin on 10/4/22.
//

#include "DerivedLinkedListType.hpp"
#include "BaseLinkedListType.hpp"
#include <stdio.h>
#include <iostream>
using namespace std;


int main() {
   //incase lab instructor wants to enter numbers manually
    int n = 10;
    int elem;
    derivedLinkedList<int>list;
    cout << "Enter 10 elements in the list: ";
    for(int i = 0; i < n; i++)
    {
        cin >> elem;
        list.insertFirst(elem);
    }
    cout << endl;

    /*
    derivedLinkedList<int> list;
        list.insertFirst(37);
        list.insertFirst(25);
        list.insertFirst(19);
        list.insertFirst(15);
        list.insertFirst(8);
        list.insertFirst(8);
        list.insertFirst(8);
        list.insertFirst(6);
        list.insertFirst(1);
        list.insertFirst(3);
        list.print();
*/
        cout << "deleteSmallest" << endl;
        list.deleteSmallest();
        list.print();
        cout << endl;

        cout << "Delete repeated numbers: " << endl;
        list.deleteRepeats();
        list.print();
        cout << endl;
   
    //incase Lab instructor whants to test
    int num;
    cout << "Enter number you want to delete at: ";
    cin>> num;
    list.deleteAt(num);
    list.print();
    cout << endl;

        cout << "Testing deleteAt : 3" << endl;
        list.deleteAt(3);
        list.print();
        cout << endl;
   
    //incase Lab instructor wants to test
    int another;
    cout << "Enter postion you want data from: ";
    cin>> another;
    cout<<"Data at postion"<<list.getAt(another)<<endl;
    cout << endl;

    
    //testing
    cout << "Data at position 4: " << list.getAt(4) <<endl;
    
    return 0;
}
