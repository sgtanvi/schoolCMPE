//
//  main.cpp
//  Lab9
//
//  Created by admin on 11/14/22.
//

#include <iostream>
#include <fstream>
#include "sorting.h"
#include "time.h"

using namespace std;

int main(){

    int size = 10000;

    sorting<int> example(size);

    example.fillArray();
    example.display();

    int comparisons = 0;

    time_t before;
    time_t after;

    before = clock();
    example.bubbleSort(comparisons);
    after = clock();

    example.display();
    cout << "Bubblesort loops: " << comparisons << endl;
    cout << (after-before)/(double) CLOCKS_PER_SEC << " seconds" << endl << endl;
    //9896

    //reset
    example.fillArray();
    comparisons = 0;

    before = clock();
    example.insertionSort(comparisons);
    after = clock();
    cout << "insertionSort loops: " << comparisons << endl;
    cout << (after-before)/(double) CLOCKS_PER_SEC << " seconds" << endl << endl;
    //10000

    //reset
    example.fillArray();
    comparisons = 0;

    before = clock();
    example.selectionSort(comparisons);
    after = clock();
    cout << "selectionSort loops: " << comparisons << endl;
    cout << (after-before)/(double) CLOCKS_PER_SEC << " seconds" << endl << endl;
    //10000

    //reset
    example.fillArray();
    comparisons = 0;

    before = clock();
    example.mergeSort(0, size, comparisons);
    after = clock();
    cout << "mergeSort loops: " << comparisons << endl;
    cout << (after-before)/(double) CLOCKS_PER_SEC << " seconds" << endl << endl;
    //10000

    //reset
    example.fillArray();
    comparisons = 0;

    before = clock();
    example.quickSort(0, size, comparisons);
    after = clock();
    cout << "quickSort loops: " << comparisons << endl;
    cout << (after-before)/(double) CLOCKS_PER_SEC << " seconds" << endl << endl;
    //8998

    return 0;
}
