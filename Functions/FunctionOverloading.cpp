#include <iostream>
#include <string>

using namespace std;


//Learning about function overloading.

int getResult(int num1, int num2);
string getResult(string str1, string str2);

// function created to get the cuberoot of a number.
int getResult(int numA);



int main()
{
    int resultNum = getResult(30,20);
    string nameResult = getResult("Samuel", "Fernandez");

    cout << "result num is " << resultNum << endl;
    cout << "result name is " << nameResult << endl;
    cout << endl << endl;

    int cubeRoot = getResult(5);

    cout << "The cube root of getResult is " << cubeRoot;

    return 0;
}

int getResult(int num1, int num2)
{
    return num1 * num2;
}

string getResult(string str1, string str2)
{
    return str1 + " " + str2;
}

int getResult(int numA)
{
    int numTotal = numA * numA * numA;
    return numTotal;
}
