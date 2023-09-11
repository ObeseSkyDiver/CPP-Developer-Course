#include <iostream>

using namespace std;

// Create a function that multiplies 3 parameters.

int multiply(int a, int b, int c);

int main()
{
    int product = multiply(1,1,1);
    cout << product << endl;

    return 0;
}

int multiply(int a, int b, int c)
{
    a = 5;
    b = 5;
    c = 10;
    return a * b * c;
}
