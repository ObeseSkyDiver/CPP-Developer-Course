#include <iostream>
#include <string>

using namespace std;

//We're learning about constants in this part of the course. Constants are variables that never change. If you set a variable to be 20, no matter what you type or do afterwards.
// It will always be 20.


int main()
{
    const double myPi = 3.14159;

    const string myName = "Samuel";
    string nameInput;

    cout << "Hello, we have your name as " << myName << ". ";

    cout << "We will verify if what we have in the system and what you say match. Answer is case sensitive!" << endl;
    cout << "Can you please input your name: ";
    cin >> nameInput;

    if (nameInput == myName)
    {
        cout << "That's exactly what we have on record!";
    }
    else
    {
        cout << "Sorry that name doesn't match!" << endl;
    }

    return 0;
}
