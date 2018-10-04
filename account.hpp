/**************************************************************************************************
    Blessing Alagba
    v223e376
    Program 4

    Description: This Program implements a base function class called Account which will
                 be inherited from the savings account class and checking account class.
                 it calculates the debit(withdrawal) and credit(deposit) amount in the account.

    Pseudo code:-
    Class name: Account
    Data:
        balance - stores the balance of the user of the account
    Mutator Functions:
        credit - controls the deposit amount in the bank
        debit - controls the withdrawal amount in the bank
        set_balance - represents the account balance
    Accessor Functions:
        get_Balance - it returns the balance 
*/
//defining account class

#ifndef Account_hpp
#define Account_hpp

class Account
{
public:
    //default constructor
    Account (double);
    //withdraws amount from the Account
    bool debit (double);
    //Deposits amount to the Account
    void credit (double);
    //represents the account balance
    void set_Balance (double);
    //it returns the balance
    double get_Balance();

private:
    double balance;

};

#endif
