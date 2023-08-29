#include <iostream>

using namespace std;

int main()
{
    int count = 1;

    while (count < 10)
    {

        cout << count << endl;
        count++ ;
    }
    cout << endl << endl; << endl;
    //do-while loop
    int count1 = 100;

    do
    {

        cout << count1 << endl;
        count1++;

    } while (count1 < 100);

    for (int i = 0; i < 10; i++)
    {
        cout << i << endl;
    }

    int input;
    cout << "Please enter a positive integer to continue, and negative integer if you want to quit." << endl;
    cin >> input;

    while (input >= 0)
    {
        cout << input << endl;
        cout << "Please enter a positive integer to continue, and negative integer if you want to quit." << endl;
        cin >> input;
    }

    return 0;
}
