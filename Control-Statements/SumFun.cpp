#include <iostream>

using namespace std;

// User will enter a positive number and then add that number to a rolling sum. User will than see the sum increase as they continue to input a number.

int main()
{

    int input;
    cout << "Please enter a positive number to continue." << endl;
    cout << "If you wish to end, enter a negative number." << endl;
    cin >> input;

    cout << endl << endl;

    int sum = 0;


    while (input >= 0)
    {
    sum = (sum + input);

    cout << sum << endl;
    cout << "Please enter another positive number to continue." << endl;
    cout << "If you would like to end this, enter a negative number." << endl;

    cin >> input;
    cout << endl;
    }


    return 0;
}
