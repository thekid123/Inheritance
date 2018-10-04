#include <iostream>
#include "account.hpp"
#include "savings_account.hpp"
#include "checking_account.hpp"


int main()
{
    //testing the program for account


    Account first_account(100.0);
    Savings_account second_account(100, .03);
    Checking_account third_account(100, 1.0);

    //displaying the initial balance for each account
    cout << "First account balance is: $" << first_account.get_Balance() << endl;
    cout << "Second account balance is: $" << second_account.get_Balance() << endl;
    cout << "Third account balance is: $" << third_account.get_Balance() << endl;

    //Attempting the debit
    cout << "debit(withdraw) $25.00 from First account. " << endl;
    first_account.debit(50.0);
    cout << "debit(withdraw) $30.00 from Second account. " << endl;
    second_account.debit(60.0);
    cout << "debit(withdraw) $40.00 from Third account. " << endl;
    third_account.debit(70.0);

    cout << "First account balance is: $" << first_account.get_Balance() << endl;
    cout << "Second account balance is: $" << second_account.get_Balance() << endl;
    cout << "Third account balance is: $" << third_account.get_Balance() << endl;

    //Attempting the credit
    cout << "credit(deposit) $40.00 to First account. " << endl;
    first_account.credit(50.0);
    cout << "credit(deposit) $65.00 to Second account. " << endl;
    second_account.credit(60.0);
    cout << "credit(deposit) $20.00 to Third account. " << endl;
    third_account.credit(70.0);

    cout << "First account balance is: $" << first_account.get_Balance() << endl;
    cout << "Second account balance is: $" << second_account.get_Balance() << endl;
    cout << "Third account balance is: $" << third_account.get_Balance() << endl;

    return 0;
}
