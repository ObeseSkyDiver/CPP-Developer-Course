#include <iostream>
#include <string>

using namespace std;


void printSomething();

void printMyName();


int main()
{
    printSomething();

    printMyName();

    return 0;
}


void printSomething()
{
    cout << "Hey! Look at what i'm printing!" << endl;
}

void printMyName()
{
    string name;
    cout << "Hello my name is CPU, what is your name? ";
    cin >> name;
    cout << "It's good to meet you " << name << "." << endl;
}
