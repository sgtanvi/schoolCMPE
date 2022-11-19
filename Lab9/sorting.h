//
//  sorting.h
//  Lab9
//
//  Created by admin on 11/15/22.
//

#ifndef sorting_h
#define sorting_h

#include <iostream>
#include <fstream>

using namespace std;

template <class T>
class sorting{
public:
    sorting(int size);
    void bubbleSort(int &);
    void insertionSort(int &);
    void selectionSort(int &);
    void merge(int l, int r, int m);
    void mergeSort(int l, int r, int &count);
    int partition(int l, int r);
    void quickSort(int start, int end, int &count);
    void swap(int, int);
    void display();
    void fillArray();
    ~sorting();

private:
    T *array;
    int size;
};

template<class T>
sorting<T>::sorting(int size){
    array = new T[size];
    this->size = size;
}

template<class T>
void sorting<T>::bubbleSort(int &count){
    bool swapped;
    int temp;
    for(int i = 0; i < size -1 ; ++i){//repeat until second to last element
        swapped = false;
        for(int k = 0; k < size -1 -i; ++k){//pushes a larger element to the
            if(array[k] > array[k+1]){//if the next element is smaller than the current
                swap(k, k+1);//swap elements
                swapped = true;
            }
        }
        if(!swapped){//if not swapped, array has been sorted
                break;
        }
        count++;
    }
}

template<class T>
void sorting<T>::insertionSort(int &count){
    int num, k;
    for(int i = 0; i < size; ++i){
        num = array[i];//current num
        k = i - 1;//position of the previous element

        //if the previous element is greater than num, move it up by 1 element
        while(k >= 0 && array[k] > num){
            array[k+1] = array[k];//moves k to the element above it
            k--;//this causes the loop behind k to sort itself
        }
        //after while loop, k is at the element less than num
        array[k+1] = num;
        count++;
    }
}

template<class T>
void sorting<T>::selectionSort(int &count){
    int min, temp;
    for(int i = 0; i < size-1; ++i){
        min = i;
        for(int k = i + 1; k < size; ++k){
            if(array[k] < array[min]){//if the element at k is < the element at min
                //min position is now at k
                min = k;
            }
        }
        swap(i, min);//swap elements at position i to the element of the min
        count++;
    }
}

template<class T>
void sorting<T>::mergeSort(int l, int r, int &count){
    int mid = l + (r -l)/2;
    if(l < r){
        count++;
        //left side
        mergeSort(l, mid, count);
        //right side
        mergeSort(mid+1, r, count);
        this->merge(l, r, mid);
    }
}

template<class T>
void sorting<T>::merge(int l, int r, int m){
    int la = m-l+1;//left array size
    int ra = r-m;//right array size
    T left[la], right[ra];
    //fill temp array
    //left array
    for(int i = 0; i < la; ++i){
        left[i] = array[i+l];
    }
    //right array
    for(int i = 0; i < ra; ++i){
        right[i] = array[m+i+1];
    }

    //sort and merge both arrays
    int L = 0, R = 0, C = l;
    while(L < la && R < ra){
        if(left[L] <= right[R]){
            array[C] = left[L];
            L++;
        }
        else{
            array[C] = right[R];
            R++;
        }
        C++;
    }
    //extra elements in the arrays
    while(L < (la)){
        array[C] = left[L];
        C++;
        L++;
    }
    while(R < (ra)){
        array[C] = right[R];
        C++;
        R++;
    }
}

template<class T>
int sorting<T>::partition(int l, int r){
    int pivot = array[l];
    int count = 0;
    int i = l, k = r;
    //find midpoint for starting element
    for(int i = l+1; i <= r; ++i){
        if(pivot >= array[i]){
            count++;
        }
    }
    //move pivot to new position
    swap(l, l+count);

    //sort left and right sides of the pivot

    while(i < (l+count) && k > (l+count)){//repeat until i is at a higher position than the pivot and r is at a lower position of the pivot
        //left side
        while(array[i] <= pivot){//if element of i is less than or equal to the pivot, move to next element, stops when current element is greater than the pivot (should be on the right side)
            i++;
        }
        while(array[k] > pivot){//if element of r is greater than pivot, move to the previous element, stops when current element is >= pivot (should be on the left side)
            k--;
        }
        if(i < (l+count) && k > (l+count)){//if i&k stopped before they are higher than the pivot position, this means at current element are on the wrong side, swap them
            swap(i, k);
            --i;
            ++k;
        }
    }
    return l+count;
}

template<class T>
void sorting<T>::quickSort(int start, int end, int &count){
    //base
    if(start >= end){
        return;
    }

    int p;
    p = partition(start, end);

    //sort left side
    quickSort(start, p-1, count);
    //sort right side
    quickSort(p+1,end, count);
    count++;
}

template<class T>
void sorting<T>::swap(int pos1, int pos2){
    //if pos1 == pos2
    //nothing really happens
    T temp = array[pos1];
    array[pos1] = array[pos2];
    array[pos2] = temp;
}

template<class T>
void sorting<T>::display(){
    for(int i = 0; i < size; ++i){
        cout << array[i] << " ";
        if(i%10 == 0 && i != 0){
            cout << endl;
        }
    }
    cout << endl << endl;
}

template<class T>
void sorting<T>::fillArray(){
    int count = 0, num;
    ifstream in;
    in.open("Array elements.txt");
    while(in >> num){
        array[count++] = num;
    }
}

template<class T>
sorting<T>::~sorting(){
    delete []array;
}

#endif
