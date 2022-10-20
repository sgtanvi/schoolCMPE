/*
 * cashRegister.h
 *
 *  Created on: Sep 6, 2022
 *      Author: tanvig
 */

#ifndef CASHREGISTER_H_
#define CASHREGISTER_H_

class CashRegister{
private:
public:

	//default constructor
	//will set all values to zero
	CashRegister();


	float getAmount();//this gets the amount of cash
	float total;
		float cash;
		float change;
};



#endif /* CASHREGISTER_H_ */
