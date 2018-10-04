//Member function definiton for class Savings_account

#include "savings_account.hpp"
using namespace std;

//Calculates the interest rate
Savings_account::Savings_account(double initial_balance, double r) : Account (initial_balance)
{
    interest_rate = r;
}

double Savings_account::calculate_interest()
{
    return get_Balance() * (interest_rate/100);
}
