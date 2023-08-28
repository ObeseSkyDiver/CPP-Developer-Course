#include <iostream>
using namespace std;


/*
    > greater than
    >= greater than or equal to
    < less than
    <= less than or equal to
    == equal (don't mix up with '=' which just assigns)
    != does not equal too
*/


int main()
{

    cout << boolalpha;

    int a = 15;
    int b = 20;
    bool areEqual = a == b;
    bool notEqual = a != b;


    cout << (a < b) << endl;
    cout << (a > b) << endl;
    cout << areEqual << endl;
    cout << notEqual << endl;

    int age;

    cout << "Welcome to the age verifier, we verify what we have in the system to what you say it is." << endl;
    cout << " Please input your age: ";
    cin >> age;

    if (age == 30)
    {

        cout << "This is exactly what we have in our system!" << endl;
    }
    else
    {
        cout << "Sorry, please enter the correct age." << endl;
    }


    return 0;
}
