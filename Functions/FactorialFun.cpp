#include <iostream>


using namespace std;

int factorial(int num);


int main()
{
    int input;

    cout << "Enter a number to use for the factorial: ";
    cin >> input;

    int answer = factorial(input);
    cout << answer << endl;

    return 0;
}

int factorial(int num)
{
    if (num >= 0)
    {
        cout << num << endl;
        return num * (factorial(num - 1));
    }
    return num;
}
