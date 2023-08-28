#include <iostream>

using namespace std;

int main()
{
    int age = 16;
    cout << age << endl;

    if (age >= 16)
    {
        cout << "You are able to drive!" << endl;
    }
    else
    {
        cout << "Sorry you can't drive yet!" << endl;
    }

    for (int i =1;i <= age; i++)
    {
        cout << "Happy birthday! " << i << endl;
    }

    return 0;
}
