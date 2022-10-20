//
//  main.cpp
//  lab3
//
//  Created by Tanvi G on 9/13/22.
//

#include <iostream>
#include <vector>
#include <typeinfo>
#include "Account.h"
#include "CheckingAccount.h"
#include "SavingsAccount.h"


using namespace std;

int main(){
    vector<Account*> ptr;//vector of account ptr

    //ptrs
    Account* ptrChecking = new CheckingAccount(1000,2.5);
    Account* ptrSavings = new SavingsAccount(2000,0.03);
    Account* ptrSavings2 = new SavingsAccount(500,0.1);
    Account* ptrChecking2 = new CheckingAccount(3000, 5);

    //putting pointers into the vector
    //checking account even
    //savings account odd
    ptr.push_back(ptrChecking);
    ptr.push_back(ptrSavings);
    ptr.push_back(ptrSavings2);
    ptr.push_back(ptrChecking2);

    for(unsigned int i = 0; i < ptr.size(); ++i){
        double amount = 0;
        cout << "Account #" << i+1 << ": " << endl;

        //checkingAccount
        if(typeid(CheckingAccount) == typeid(*ptr[i])){//checks if the account is a checking account

            cout << "Account is a checking account" << endl;
            cout << "Account Balance: $" << ptr[i]->getBalance() << endl;

        }

        //savingsAccount
        if(typeid(SavingsAccount) == typeid(*ptr[i])){
            cout << "Account is a savings account" << endl;
            ptr[i]->credit(ptr[i]->calculateInterest());
            cout << "Interest owed to account: $" << ptr[i]->calculateInterest() << endl;

            

            cout << "Account Balance: $" << ptr[i]->calculateNewBalance()<< endl;
        }
        //ask amount to withdraw
        cout << "Enter amount to withdraw: ";
        cin >> amount;
        //if the amount given is negative
        while(amount < 0){
            cout << "Withdrawn amount must be >= 0, reenter an amount to withdraw: ";
            cin >> amount;
        }
        //0 case
        if(amount == 0){
            cout << "No amount withdrawn" << endl;
        }
        else if(ptr[i]->debit(amount)){
            cout << "Widthdrawn : $" << amount << endl;
            cout << "New Balance : $" << ptr[i]->getBalance() << endl;
        }
        //if the amount given is too high
        else{
            cout << "Account doesn't hold enough for requested withdraw" << endl;
        }

        //ask amount to deposit
        cout << "Enter amount to deposit: ";
        cin >> amount;

        //if the amount entered is negative
        while(amount < 0){
            cout << "Deposit amount must be >= 0, reenter an amount to deposit: ";
            cin >> amount;
            }
        //0 case
        if(amount == 0){
            cout << "No amount deposited" << endl;
        }
        else{
            cout << "Deposit : $" << amount << endl;
            ptr[i]->credit(amount);
            cout << "New Balance : $" << ptr[i]->getBalance() << endl;
        }

        cout << endl;
    }

    //delete vector pointers
    for(auto p : ptr){
        delete p;
    }
    ptr.clear();

    return 0;
}
