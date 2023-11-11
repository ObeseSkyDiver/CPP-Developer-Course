#include "cat.hpp"
#include <iostream>
#include <string>

using namespace std;

Cat::Cat(string name, double weight) : Animal (name, weight)
{
}

void Cat::chaseMouse() const
{
    cout << "Give me a second, I'm chasing a mouse!" << endl;
}

string Cat::makeNoise() const
{
    return "Meow!";
}

string Cat::eat() const
{
    return "Tasty cat food!";
}