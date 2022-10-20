/*
 * arrayListType1.h
 *
 *  Created on: Sep 20, 2022
 *      Author: tanvig
 */

#ifndef ARRAYLISTTYPE1_H_
#define ARRAYLISTTYPE1_H_

#include <iostream>
#include <cassert>
using namespace std;

//template class
template <class Type>
class arrayListType{
public:
    const arrayListType<Type>& operator=(const arrayListType<Type>&);
    bool isEmpty() const;
    bool isFull() const;
    int listSize() const;
    int maxListSize() const;
    void print() const;
    bool isItemAtEqual(int location, const Type& item) const;
    void insertAt(int location, const Type& insertItem);
    void insertEnd(const Type& insertItem);
    void removeshift(int location);
    void removeAt(int location);
    void retrieveAt(int location, Type& retItem) const;
    void replaceAt(int location, const Type& repItem);
    void clearList();
    int seqSearch(const Type& item) const;
    void insert(const Type& insertItem);
    void remove(const Type& removeItem);
    void removeAll(const Type& removeItem);
    int max() const;
    int min() const;
    arrayListType(int size = 100);
    arrayListType(const arrayListType<Type>& otherList);
    ~arrayListType();

protected:
    Type *list;
    int length;
    int maxSize;
};//template class end



//simple functions returning attributes ***


template <class Type>
bool arrayListType<Type>::isEmpty() const{
    return (length == 0);
}

template <class Type>
bool arrayListType<Type>::isFull() const{
    return (length == maxSize);
}

template <class Type>
int arrayListType<Type>::listSize() const{
    return length;
}

template <class Type>
int arrayListType<Type>::maxListSize() const{
    return maxSize;
}

template <class Type>
void arrayListType<Type>::print() const{
    for (int i = 0; i < length; i++)
        cout << list[i] << " " << endl;
}

template <class Type>
bool arrayListType<Type>::isItemAtEqual(int location, const Type& item) const{
    return (list[location] == item);
}



//location
template <class Type>
void arrayListType<Type>::insertAt(int location, const Type& insertItem){
    if (location < 0 || location >= maxSize)
    {
        cerr << "The position of the item to be inserted is out of range" << endl;
    }
    else if (length >= maxSize)
    {
        cerr << "Cannot insert in a full list" << endl;
    }
    else
    {
        for (int i = length; i > location; i--)
        {
            list[i] = list[i - 1];
        }
        list[location] = insertItem;
        length++;
    }
}



//insert item
template <class Type>
void arrayListType<Type>::insertEnd(const Type& insertItem){
    if (length >= maxSize)
    {
        cerr << "Cannot insert in a full list" << endl;
    }
    else
    {
        list[length] = insertItem;
        length++;
    }
}



//remove item
template <class Type>
void arrayListType<Type>::removeshift(int location){
    if (location < 0 || location >= length)
    {
        cerr << "The location of the item to be removed is out of range" << endl;
    }
    else
    {
        for (int i = location; i < length - 1; i++)
        {
            list[i] = list[i+1];
        }
        length--;
    }
}



template <class Type>
void arrayListType<Type>::removeAt(int location){
    if (location < 0 || location >= length)
    {
        cerr << "The location of the item to be removed is out of range" << endl;
    }
    else
    {
        list[location-1] = list[length-1];
        length--;
    }
}//end removeAt



//retrieve
template <class Type>
void arrayListType<Type>::retrieveAt(int location, Type& retItem) const{
    if (location < 0 || location >= length)
    {
        cerr << "The location of the item to be retrieved is out of range." << endl;
    }
    else
    {
        retItem = list[location];
    }
} //end retrieveAt

template <class Type>
void arrayListType<Type>::replaceAt(int location, const Type& repItem){
    if (location < 0 || location >= length)
    {
        cerr << "The location of the item to be replaced is out of range." << endl;
    }
    else
    {
        list[location] = repItem;
    }
}

template <class Type>
void arrayListType<Type>::clearList(){
    length = 0;
}

template <class Type>
int arrayListType<Type>::seqSearch(const Type& item) const{
    int loc;
    bool found = false;
    for (loc = 0; loc < length; loc++)
    {
        if (list[loc] == item)
        {
            found = true;
            break;
        }
    }
    if(found)
    {
        return loc;
    }
    else
    {
        return -1;
    }
}



template <class Type>
void arrayListType<Type>::insert(const Type& insertItem){
    int loc;
    if (length == 0)
    {
        list[length++] = insertItem;
    }
    else if (length == maxSize)
    {
        cerr << "Cannot insert in a full list." << endl;
    }
    else
    {
        loc = seqSearch(insertItem);
        if (loc == -1)
        {
            list[length++] = insertItem;
        }
        else
        {
            cerr << "the item to be inserted is already in the list. No duplicates are allowed." << endl;
        }
    }
}



template <class Type>
int arrayListType<Type>::max() const{
    Type max1 = list[0];
    for (int i = 0; i < length; i++)
    {
        if(max1<list[i])
        {
            max1=list[i];
        }
    }
    return max1;
}



template <class Type>
int arrayListType<Type>::min() const{
    Type min1 = list[0];
    for (int i = 0; i < length; i++)
    {
        if(min1 > list[i])
        {
            min1=list[i];
        }
    }
    return min1;
}



template<class Type>
void arrayListType<Type>::remove(const Type& removeItem){
    int loc;
    if (length == 0)
    {
        cerr << "Cannot delete from an empty list." << endl;
    }
    else
    {
        loc = seqSearch(removeItem);
        if (loc != -1)
        {
            removeshift(loc);
        }
        else
        {
            cout << "The item to be deleted is not in the list." << endl;
        }
    }
}



template <class Type>
arrayListType<Type>::arrayListType(int size){
    if (size < 0)
    {
        cerr << "The array size must be positive. Creating an array of size 100. " << endl;
        maxSize = 100;
    }
    else
    {
        maxSize = size;
    }
    length = 0;
    list = new Type[maxSize];
    assert(list != NULL);
}

template <class Type>
arrayListType<Type>::~arrayListType(){
    delete [] list;
}



template <class Type>
arrayListType<Type>::arrayListType
(const arrayListType<Type>& otherList){
    maxSize = otherList.maxSize;
    length = otherList.length;
    list = new Type[maxSize];
    assert(list != NULL);

    for (int j = 0; j < length; j++)
    {
        list [j] = otherList.list[j];
    }
}



template <class Type>
const arrayListType<Type>& arrayListType<Type>::operator=(const arrayListType<Type>& otherList){
    if(this != &otherList)
    {
        delete [] list;
        maxSize = otherList.maxSize;
        length = otherList.length;
        list = new Type[maxSize];

        assert(list != NULL);

        for (int i = 0; i < length; i++)
        {
            list[i] = otherList.list[i];
        }


    }
    return *this;
}


template <class Type>
void arrayListType<Type>::removeAll(const Type& item){
    int index;
    while((index = seqSearch(item)) != -1)
    {
        removeshift(index);
    }
}

#endif /* ARRAYLISTTYPE1_H_ */
