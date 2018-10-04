//defining checking account class

#ifndef checking_hpp
#define checking_hpp
#include "account.hpp"
using namespace std;

//inheriting from the bass class Account
class Checking_account : public Account
{
public:
    Checking_account(double, double);
private:
    double transaction_fee;
};

#endif
