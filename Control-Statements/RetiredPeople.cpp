#include <iostream>

using namespace std;

int main()
{
    int age;
    char gender;

    cout << "Hello, we are giving away a senor citizen discount! We also have an elderly woman discount that grants extra savings!" << endl;
    cout << "Can you please tell us your age? ";
    cin >> age;

    cout << "We can also give you a discount based on your gender. Please type it as a single character such as F or M." << endl;
    cin >> gender;

    cout << "So for your age we have " << age << " and for your gender we have " << gender << "." << endl;



    cout << "Lets see if you qualify for the discounts!" << endl;

    if (age >= 65)
    {
        cout << "You qualify for the senor citizen discount. " << endl;
    }
    else
    {
        cout << "Sorry you don't qualify for the senor citizen discount. " << endl;
    }

    if (gender == 'F' || 'f')
    {
        cout << "You do qualify for the elderly woman discount! " << endl;
    }
    else
    {
        cout << "Sorry you don't qualify for the elderly woman discount. " << endl;
    }


    return 0;
}
