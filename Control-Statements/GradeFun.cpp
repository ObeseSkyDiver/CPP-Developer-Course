#include <iostream>

using namespace std;

// We're learning about switches. This makes it easy for the user to have multiple options.


int main()
{
    char grade;

    cout << "Please enter a letter grade:" << endl;
    cin >> grade;

    switch (grade)
    {
    case 'A':
    case 'a':
        cout << "Great job!" << endl;
        break;

    case 'B':
    case 'b':
        cout << "Good job." << endl;
        break;

    case 'C':
    case 'c':
        cout << "You can do better." << endl;
        break;

    case 'D':
    case 'd':
        cout << "You didn't fail, but you didn't do well." << endl;
        break;

    case 'F':
    case 'f':
        cout << "You failed the exam." << endl;
        break;

    default:
        cout << "You entered an invalid grade. Try again" << endl;
    }


    return 0;

}
