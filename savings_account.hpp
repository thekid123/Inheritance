//defining savings account class

#ifndef Savings_hpp
#define Savings_hpp
#include "account.hpp"
using namespace std;

//inheriting from the base class Account 
class Savings_account : public Account
{
public:
    Savings_account(double, double);
    double calculate_interest();

private:
    double interest_rate;
};

#endif
