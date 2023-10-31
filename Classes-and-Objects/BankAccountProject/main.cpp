#include <iostream>
#include <string>
#include "bank.h"

using namespace std;

int main()
{
    BankAccount myAcc("Sam", 500);
    BankAccount yourAcc("John Baugh");

    yourAcc.deposit(500);
    cout << yourAcc.getOwner() << " account contains " << yourAcc.getBalance() << endl;

    yourAcc.withdraw(1000);
    cout << yourAcc.getOwner() << " account currently has " << yourAcc.getBalance() << endl;

    cout << myAcc.getOwner() << " account contains "<< myAcc.getBalance() << endl; 

    return 0;
}