//Member funtion definition for class Account

#include "account.hpp"
#include <iostream>
using namespace std;

Account::Account(double initial_balance)
{
    //if the initial balance is greater than or equal to 0 it sets the value as the balance of the account
    if(initial_balance >= 0)
    balance = initial_balance;
    else
    {   //if the initial balance is greater than 0 it shows an Error message
        cout << "Error: Initial balance invalid. " << endl;
        balance  = 0.0;
    }
}

//deposit an amount to the account
void Account::credit(double amt)
{
    balance += amt;
}

//withdraws an ammount from the account
bool Account::debit(double amount)
{
    if(amount > balance)
    {
        cout << "Debit amount exceeded account balance. " << endl;
        return false;
    }
    else
    {
        balance += amount;
        return true;
    }
}

//sets the account balance 
void Account::set_Balance(double new_balance)
{
    balance = new_balance;
}

double Account::get_Balance()
{
    return balance;
}
