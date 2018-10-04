//Member funtion definitons for checking class

#include "checking_account.hpp"
#include <iostream>
using namespace std;

//calculates the transaction fee
Checking_account::Checking_account(double initial_balance, double fee) : Account (initial_balance)
{
    transaction_fee = fee;
}
