/*
 * dispenserType.h
 *
 *  Created on: Sep 6, 2022
 *      Author: tanvig
 */


#ifndef DISPENSERTYPE_H_
#define DISPENSERTYPE_H_

class Dispenser: public CashRegister
{
private:
	float Apple;
	float Orange;
	float Mango;
	float Fruit;

	float price;		//ATTEMPT
	float temp;
	int choice;
	int select;
public:
	Dispenser();//default

	//ATTEMPT TO REDUCE FUNCTIONS////
	//Dispenser(float pri);//sets price of drink
	void checkMoney();//checks drinks
	void changeMoney();//provides change



	float checkTotal();//Checks the total
	void updateTotal();
	void dispenseDrink(int select);//Dispenses the drink
	void getInput(int choice);//Gets user input


	void checkApple();//Checks the drinks
	void checkOrange();
	void checkMango();
	void checkFruit();


	void changeApple();//Checks the change
	void changeOrange();
	void changeMango();
	void changeFruit();

};

#endif /* DISPENSERTYPE_H_ */
