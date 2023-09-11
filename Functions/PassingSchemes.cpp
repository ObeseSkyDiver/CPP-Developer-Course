#include <iostream>

using namespace std;
//Learning about functions, their arguments and parameters.

void valueChanged1(int someNum);
void valueChanged2(int& someNum);
void threeTimesN(int num1, int& num2);


int main()
{
    int myNum = 20;

    cout << "Before valueChanged1 call, myNum is " << myNum << endl;
    valueChanged1(myNum);
    cout << "After valueChanged1 call, myNum is " << myNum << endl;

    cout << endl << endl;

    cout << "myNum is currently: " << myNum << endl;
    valueChanged2(myNum);
    cout << "myNum is now : " << myNum << endl;

    threeTimesN(1,myNum);

    return 0;
}

void valueChanged1(int someNum)
{
    someNum = 100;
    cout << "some num in valueChanged1 is " << someNum << endl;
}

void valueChanged2(int& someNum)
{
    someNum = 100;
    cout << "some num in valueChanged2 is " << someNum << endl;
}
void threeTimesN(int num1, int& num2)
{
    cout << "Please enter a number: ";
    cin >> num1;
    num2 = num1 * 3;
    cout << "Your number was multipled by 3 and comes out to " << num2 << "." << endl;
}

