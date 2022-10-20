//
//  DerivedLinkedListType.hpp
//  Lab5
//
//  Created by admin on 9/27/22.
//

#ifndef DerivedLinkedListType_hpp
#define DerivedLinkedListType_hpp
#include "BaseLinkedListType.hpp"
#include <stdio.h>
#include <iostream>


template<class Type>
class derivedLinkedList : public linkedListType<Type>{
public:
    derivedLinkedList();
    void deleteSmallest();
    void deleteAll(const Type item);
    void deleteRepeats();
    void deleteAt(int pos);
    Type getAt(int pos);
    ~derivedLinkedList();
};

template<class Type>
derivedLinkedList<Type>::derivedLinkedList() {
    this->first = NULL;
    this->last = NULL;
    this->count = 0;
}


//deletes the smallest
template<class Type>
void derivedLinkedList<Type>::deleteSmallest(){
    Type smallest = this->first->data;
    nodeType<Type>* point = this->first;
    //find the smallest
    while(point != NULL){
        if(smallest > point->data){
            smallest = point->data;
        }
        point = point->next;
    }

    //delete smallest
    point = this->first;
    nodeType<Type>* past = point;
    //delete first element
    if(smallest == this->first->data){
        this->first = this->first->next;
        this->count--;
    }
    //delete in the middle of list to end
    else
        while(point != NULL){
            if(point->next == NULL && point->data == smallest){//smallest is the last
                past->next = NULL;
                this->last = past;
                this->count--;
            }
            else if(point->data == smallest){
                past->next = point->next;
                this->count--;
                return;//stop function
            }
            past = point;
            point = point->next;
        }

}

//deletes the whole list
template<class Type>
void derivedLinkedList<Type>::deleteAll(const Type item){
    nodeType<Type>* point = this->first;
    nodeType<Type>* past = NULL;

    while(point != NULL){
        if(this->first->data == item){//item is first in the list
            if(this->first == this-> last){//if there only one element and it's the target item, delete whole list
                this->first = NULL;
                this->last = NULL;
                this->count--;
                return;
            }
            else{
                this->first = this->first->next;
                point = this->first;
                this->count--;
            }
        }
        else if(point->data == item && point->next == NULL){//if the item is the last element
            this->last = past;
            past->next = NULL;
            this->count--;
        }
        else if(point->data == item){
            past->next = point->next;
            point = past;
            this->count--;
        }
        past = point;
        point = point->next;
    }
}

//delete's at choosen element
template<class Type>
void derivedLinkedList<Type>::deleteAt(int pos){
    nodeType<Type>* point = this->first->next;//set to 2nd element
    nodeType<Type>* past = this->first;//set to first element
    if(pos > this->count){
        cout << "Chosen position out of range" << endl;
        return;//exit function
    }
    else if(pos == 1){//delete the first element
        this->first = this->first->next;
        this->count--;
    }
    else{
        //move pointer to pos
        for(int i = 2; i < pos; ++i){
                past = point;
                point = point->next;
            }
        past->next = point->next;
        if(point->next == NULL){//last element
            this->last = past;
        }
        this->count--;
        return;
    }

}
//delete repeats
template<class Type>
void derivedLinkedList<Type>::deleteRepeats(){
    nodeType<Type>* point = this->first;
            nodeType<Type>* temp = point;
            
            while(point != NULL && point->next != NULL){
                if(point->data == point->next->data){
                    temp = point->next->next;
                    delete point->next;
                    this->count--;
                    point->next = temp;
                }
                else{
                    point = point->next;
                }
            }
}


//gets number k
template<class Type>
Type derivedLinkedList<Type>::getAt(int pos){
    nodeType<Type>* point = this->first;
    if(pos > this->count){
        cout << "Chosen position is out of range" << endl;
        exit(0);
    }
    //move point
    for(int i = 0; i < pos-1; ++i){
        point = point->next;
    }
    return point->data;
}


template<class Type>
derivedLinkedList<Type>::~derivedLinkedList(){
    this->destroyList();
}
#endif /* DerivedLinkedListType_hpp */
