#include <iostream>
#include <vector>

/*
Build a vector that takes the users input.
Must accept non negative integers to continue. If a negative number if input, end loop.
Print out a x2 multiple of the user input.
*/

using namespace std;

int main()
{

    vector<int> userVector;
    int userInput;

    cout << "Please enter a positive number: ";
    cin >> userInput;


    while (userInput >= 0)
    {
        userVector.push_back(userInput);
        cout << "Please enter a positive number to keep going " << endl;
        cout << "or enter a negative to end this loop: ";
        cin >> userInput;
    }

    cout << "Now we are going to print out double of each entry you put." << endl;

    for (int num: userVector)
    {
        cout << "Before: " << num << endl;
        cout << "After: " << num * 2 << endl;
    }


    return 0;
}
