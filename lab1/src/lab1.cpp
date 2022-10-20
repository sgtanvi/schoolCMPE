

//============================================================================
// Name        : Lab1.cpp
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================


/*************************************************************
 *
 * //Lab1 - Part 5
 * Objective    : A program that:
 *
    Show the customer the different products sold by the juice machine.
    Let the customer make the selection.
    Show the customer the cost of the item selected.
    Accept money from the customer.
    Release the item.
Notes:
  fuctions: two main components: a built-in cash register and several dispensers to hold and release the products

  files: cashRegister.h

         cashRegister.cpp

         dispenserType.h

         dispenserType.cpp

         lab1.cpp


 * Input        :
 * Output       :

 **************************************************************/


#include <iostream>
#include "cashRegister.h"
#include "dispenserType.h"
using namespace std;

int main() {

	int selection, loop;
	Dispenser Money;
	//Dispenser Apple(2.5);
	//Dispenser Orange(3.0);
	//Dispenser Mango(3.5);
	//Dispenser Fruit(2.0);

	loop = 1;
	while(loop == 1){
		cout<<"Which drink you like?"<<endl;
			cout<<"1. Apple Juice"<<endl;
			cout<<"2. Orange Juice"<<endl;
			cout<<"3. Mango Lassi"<<endl;
			cout<<"4. Fruit Punch"<<endl;


			//gets selection from user
			cin>>selection;

			//loop checking if ts a valid input from user
			while(selection < 1 || selection > 4){
							cout<<"Please put in a valid input: "<<endl;
							cin>>selection;
			}

			//calls function getTnput and the getAmount
			Money.getInput(selection);
			Money.getAmount();
			//Checks the if the money is sufficient

			if(selection == 1)
			{
				Money.checkApple();
			}
			if(selection == 2)
				{
					Money.checkOrange();
				}
			if(selection == 3)
				{
					Money.checkMango();
				}
			if(selection == 4)
				{
					Money.checkFruit();
				}

			//Dispenses drinks with function dispenseDrink
			Money.dispenseDrink(selection);

			Money.updateTotal();//Updates the total

			//displays the total to user and ask for more drinks
			cout<<"The total entered was: "<< Money.checkTotal()<<endl;
			cout<<"Would you like more drinks"<<endl;
			cout<<"1. Yes"<<endl;
			cout<<"2. No"<<endl;
			cin>>loop;
	}
	cout<<"thank you";
	return 0;
}
