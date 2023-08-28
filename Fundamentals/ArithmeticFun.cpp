#include <iostream>

using namespace std;
/* Below is a list of arithmetic operators.
    +  addition operator
    -  subtraction operator
    *  multiplication operator
    /  division operator
    %  modulus operator
*/

int main()
{
    // Time to learn about operators. We're going to assign the variables and their values.

    int a = 36;
    int b = 7;

    // Addition operator
    int sum = a + b;

    // Subtraction operator
    int dif = a - b;

    // Multiplication operator
    int product = a * b;

    // Division operator
    int quotient = a / b;

    // Modulus operator
    int remainder = a % b;


    // Printing out the results from each operator
    cout << "Sum = " << sum << endl;
    cout << "Difference = " << dif << endl;
    cout << "Product = " << product << endl;
    cout << "Quotient = " << quotient << endl;
    cout << "Remainder = " << remainder << endl;


    // We are adding 2 to "result". If you were to put -= 2, it would subtract 2 from result.
    int result = 15;
    result += 2;

    cout << "The result is " << result << endl;

    // The ++ operator will add 1 to any variable that it is connected to. It is similar to += 1, but faster. You can also do ++ before the variable for a different outcome depending on use.
    int myInt = 10;
    myInt++;

    cout << myInt << endl;



    return 0;
}
