#include <iostream>

using namespace std;


//Learning about parameters, and the difference between global, local and main variables.
void someFunction(int aParam);

double myGlobalDouble = 3.14159;

int main()
{

    int localToMain = 20;
    cout << "The local to  main variable is " << localToMain << endl;
    cout << "Global double (in main) is " << myGlobalDouble << endl;

    someFunction(25);
    someFunction(30);
    someFunction(35);


    return 0;
}

void someFunction(int aParam)
{
    int myLocalNum = 100;
    static int staticNum = 20;
    staticNum++;

    cout << "My local number is " << myLocalNum << endl;
    cout << "The parameter is " << aParam << endl;
    cout << "My global double (in someFunction) is " << myGlobalDouble << endl;
    cout << "My static local variable is " << staticNum << endl;

}
