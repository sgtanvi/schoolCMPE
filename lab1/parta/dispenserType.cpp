/*
 * dispenserType.cpp
 *
 *  Created on: Sep 6, 2022
 *      Author: tanvig
 */


#include "cashRegister.h"
#include "dispenserType.h"
#include <iostream>
using namespace std;


Dispenser::Dispenser(){
	price = 0;
	Apple = 2.5;
	Orange = 3.0;
	Mango = 3.5;
	Fruit = 2.0;

}


//ATTEMPT TO REDUCE FUNCTIONS ///////////start


/*Dispenser::Dispenser(float pri){
	price = pri;
	Apple = 2.5;
	Orange = 3.0;
	Mango = 3.5;
	Fruit = 2.0;
}*/

//attempt to reduce
void Dispenser::checkMoney(){
	while(cash < price){
		cout<<"Insufficient amount of cash, please enter in the correct amount: "<<endl;
		cin>>cash;
	}

}

void Dispenser::changeMoney()//These below check and display how much change they have
{
	temp = cash - price;
	if(cash > price)
		{
			cout<<"You have left over change, please grab it at the bottom of the vending machine: $"<<temp<<endl;
			cash = cash - temp;
		}
}



///ATTEMPT END////////////////////



//Checking if the user has put in less money

void Dispenser::checkApple()
{
	while(cash < Apple)
		{
			cout<<"Insufficient amount of cash, please enter in the correct amount: "<<endl;
			cin>>cash;
		}
}
void Dispenser::checkOrange()
{
	while(cash < Orange)
		{
			cout<<"Insufficient amount of cash, please enter in the correct amount: "<<endl;
			cin>>cash;
		}
}
void Dispenser::checkMango()
{
	while(cash < Mango)
		{
			cout<<"Insufficient amount of cash, please enter in the correct amount: "<<endl;
			cin>>cash;
		}
}
void Dispenser::checkFruit()
{
	while(cash < Fruit)
			{
			cout<<"Insufficient amount of cash, please enter in the correct amount: "<<endl;
			cin>>cash;
			}
}


//Check and display how much change has been given and recieved
void Dispenser::changeApple()
{
	temp = cash - Apple;
	if(cash > Apple)
		{
			cout<<"You have left over change, please grab it at the bottom of the vending machine: $"<<temp<<endl;
			cash = cash - temp;
		}
}

void Dispenser::changeOrange()
{
	temp = cash - Orange;
	if(cash > Orange)
		{
			cout<<"You have left over change, please grab it at the bottom of the vending machine: $"<<temp<<endl;
			cash = cash - temp;
		}
}

void Dispenser::changeMango()
{
	temp = cash - Mango;
	if(cash > Mango)
		{
			cout<<"You have left over change, please grab it at the bottom of the vending machine: $"<<temp<<endl;
			cash = cash - temp;
		}
}

void Dispenser::changeFruit()
{
	temp = cash - Fruit;
	if(cash > Fruit)
		{
			cout<<"You have left over change, please grab it at the bottom of the vending machine: $"<<temp<<endl;
			cash = cash - temp;
		}
}


//This shows the user which one they have chosen

void Dispenser::dispenseDrink(int select)
{

	if(select == 1)
	{
		cout<<"Dispensing Apple juice"<<endl;
		changeApple();												//Check how much money they have put in
	}
	if(select == 2)
		{
			cout<<"Dispensing Orange Juice"<<endl;
			changeOrange();
		}
	if(select == 3)
		{
			cout<<"Dispensing Mango Lassi"<<endl;
			changeMango();
		}
	if(select == 4)
		{
			cout<<"Dispensing Fruit Punch"<<endl;
			changeFruit();
		}
}


void Dispenser::updateTotal()//This updates the total
{
	total = total + cash;
}
float Dispenser::checkTotal()//This returns the total
{
	return total;

}

void Dispenser::getInput(int choice)//This checks to see what choice the user has chosen
{

	if(choice == 1)
	{
	cout<<"You have selected Apple Juice, that would be $2.50"<<endl;
	}
	else if(choice == 2)
		{
		cout<<"You have selected Orange Juice, that would be $3.00"<<endl;
		}
	else if(choice == 3)
			{
		cout<<"You have selected Mango Lassi, that would be $3.50"<<endl;
			}
	else if(choice == 4)
			{
		cout<<"You have selected Fruit Punch, that would be $2.00"<<endl;
			}
}



