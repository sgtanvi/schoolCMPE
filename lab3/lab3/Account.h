// Definition of Account class.
 #ifndef ACCOUNT_H
 #define ACCOUNT_H

 class Account
 {
 public:
 Account( double ); // constructor initializes balance
 void credit( double ); // add an amount to the account balance
 bool debit( double ); // subtract an amount from the account balance
 void setBalance( double ); // sets the account balance
 double getBalance(); // return the account balance
 virtual double calculateInterest();//intended to get overridden by the SavingsAccount class
 virtual double calculateNewBalance();
 private:
 double balance; // data member that stores the balance
 }; // end class Account

Account::Account(double balance){
    this->balance = balance;
}
void Account::credit(double amount){
    balance += amount;
}
bool Account::debit(double amount){
    if(amount < balance && amount != 0){
        balance -=amount;
        return true;
    }
    else return false;
}
void Account::setBalance(double amount){
    balance = amount;
}
double Account::getBalance(){
    return balance;
}
double Account::calculateInterest(){
    //going to be overridden
    return 0;
}
double Account::calculateNewBalance()
{
    //going to be overridden
   return 0;
} // end function calculateInterest


 #endif
