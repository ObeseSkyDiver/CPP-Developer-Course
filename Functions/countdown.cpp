#include <iostream>

using namespace std;

/*
Learning about recursion. Example required for the user to just put a number into the countdown
 and also the sumValues function. I modified it so
*/

void countdownFrom(int num);

int sumValues(int num);


int main()
{
    int input;
    int input2;

    cout << "Enter a number for the countdown: ";
    cin >> input;

    countdownFrom(input);

    cout << "Enter a number for the sum of the total values: ";
    cin >> input2;

    int totalSum = sumValues(input2);
    cout << "The sum is " << totalSum << endl;


    return 0;
}

void countdownFrom(int num)
{
    if (num >= 0)
    {
        cout << num << endl;
        countdownFrom(num - 1);
    }

}


int sumValues(int num)
{
    if (num >= 1)
    {
        cout << num << endl;
        return num + sumValues(num -1);
    }

    return num;
}
