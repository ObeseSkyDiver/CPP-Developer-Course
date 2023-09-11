#include <iostream>

using namespace std;

void printHello();
void printNumber(int a);
int giveMe10();
int multiplyThese(int num1,int num2);

int square(int num);


int main()
{

    int num;
    int num1 = 10;
    int num2 = 20;


    printHello();
    printNumber(100);

    int someData = giveMe10();

    cout << someData << endl;

    int totalValue = multiplyThese(num1, num2);
    cout << totalValue << endl;

    printNumber(multiplyThese(num1,num2));

    cout << square(num) << endl;

    return 0;
}

void printHello()
{
    cout << "Hello is being printed. " << endl;

}

void printNumber(int a)
{
    cout << "The number being printed is " << a << endl;
}

int giveMe10()
{
    return 10;
}

int multiplyThese(int num1, int num2)
{
    int result = num1 * num2;
    return result;
}


int square(int num)
{
    cout << "Please enter a number and we will square it: " << endl;
    cin >> num;
    int total = num * num;

    return total;
}
