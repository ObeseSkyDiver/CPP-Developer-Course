#include <iostream>

using namespace std;


int main()
{
    int age;



    cout << "Welcome to Sam's bar! You must be 21 or over to drink. " << endl;
    cout << "Please hand me your ID to verify your age. " << endl;
    cin >> age;

    if (age >= 21)
    {
        cout << "What would you like to drink?" << endl;
    }
    else if (age >= 18)
    {
        cout << "You're able to come inside, but you can't drink alcohol. " << endl;
    }

    else
    {
        cout << "Sorry you aren't old enough to drink. " << endl;
    }

    cout << "Thank for coming to the bar. See you soon!" << endl;
    return 0;
}
