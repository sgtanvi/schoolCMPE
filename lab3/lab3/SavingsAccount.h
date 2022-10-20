// Definition of SavingsAccount class.
#ifndef SAVINGS_H
 #define SAVINGS_H

 #include "Account.h" // Account class definition

class SavingsAccount : public Account
{
public:
   // constructor initializes balance and interest rate
   SavingsAccount( double, double );

   double calculateInterest(); // determine interest owed
    double calculateNewBalance();
private:
   double interestRate; // interest rate (percentage) earned by account
}; // end class SavingsAccount

// constructor initializes balance and interest rate
SavingsAccount::SavingsAccount( double initialBalance, double rate )
   : Account( initialBalance ) // initialize base class
{
   if ( rate >= 0.0 )
      interestRate = rate;
   else
      throw std::invalid_argument( "Interest rate must be >= 0.0" );
} // end SavingsAccount constructor

// return the amount of interest earned
double SavingsAccount::calculateInterest()
{
   return getBalance() * interestRate;
} // end function calculateInterest

double SavingsAccount::calculateNewBalance()
{
   return (getBalance() * interestRate)+getBalance();
} // end function calculateInterest


 #endif
