#include <iostream>

using namespace std;

int main()
{
    int myInt = 150;
    int* somePtr = &myInt;

    cout << "myint is originally: " << myInt << endl;
    cout << "pointer holds value: " << somePtr << endl;
    cout << "pointer dereferenced: " << *somePtr << endl;

    *somePtr = 200;

    cout << "myInt is now: " << myInt << endl;

    double myDouble = 3.14;

    double* doublePtr = &myDouble;

    cout << "myDouble is originally: " << myDouble << endl;
    cout << "Pointer holds value: " << doublePtr << endl;
    cout << "pointer derefernced: " << *doublePtr << endl;


    return 0;
}