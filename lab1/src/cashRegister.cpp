/*
 * cashRegister.cpp
 *
 *  Created on: Sep 6, 2022
 *      Author: tanvig
 */

#include "cashRegister.h"
#include <iostream>
using namespace std;

float CashRegister::getAmount(){					//User inputs cash here
    cout<<"Enter in your amount of cash: "<<endl;
    cin>>cash;
	return cash;										//returns cash to
}

CashRegister::CashRegister(){		//default constructor with all values set to zero
	total = 0;
	cash = 0;
	change = 0;
}



