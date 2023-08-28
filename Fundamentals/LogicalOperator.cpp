#include <iostream>
using namespace std;

/*
    We're learning about logical operators. If you see '&&', that is the AND operator. If you see '||', that is the OR operator. The final one here is '!', which is the NOT operator.
    For AND, both variables must be the same and true for the end result to be true.
    For ||, only 1 variable needs to be true for the end result to be true.
    For !, whatever the variable is, it will become the opposite, true becomes false and false becomes true.

*/


int main()
{

    //IsRaining and isWarm are both set to true.
    cout << boolalpha;
    bool isRaining = true;
    bool isWarm = true;

    //AND should come out as true, OR should be true and NOT should become false.
    cout << "And: " << (isRaining && isWarm) << endl;
    cout << "Or: " << (isRaining || isWarm) << endl;
    cout << "Not: " << (!isRaining) << endl;


    return 0;
}
