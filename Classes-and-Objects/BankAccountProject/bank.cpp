#include "bank.h"
#include <iostream>

using namespace std;

BankAccount::BankAccount(string owner)
{
 this->owner = owner;
 this->balance = 0;
}

BankAccount::BankAccount(string owner, int balance)
{
    this-> owner = owner;
    if(balance <= 0)
    {
        cout << "Sorry, a balance above 0 is required" << endl;
    }
    else
    {
        this->balance = balance;
    }
}
void BankAccount::deposit(int amount)
{
    if(amount > 0)
    {
        balance += amount;
    }
    else
    {
        cout << "The amount deposited must be greater than 0" << endl;
    }
}
void BankAccount::withdraw(int amount)
{
    if (amount > 0 && amount <= balance)
    {
        balance -= amount;
    }
    else
    {
        cout << "The amount withdrawn must be greater than 0" << endl;
    }
}
string BankAccount::getOwner() const
{
    return owner;
}
int BankAccount::getBalance() const
{
    return balance;
}