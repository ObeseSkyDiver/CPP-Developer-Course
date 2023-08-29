#include <iostream>
#include <cstdlib>
#include <ctime>

//Learning about how to generate pseudo-random numbers.

using namespace std;

int main()
{
    srand(time(nullptr));

//    int val1 = rand() % 10; // val1 will be equal or greater than 0 and less than 10.
//
//    //shift num
//    int val2 = rand() % 10 + 1; //val2 is equal or greater than 1 and less than 10.
//
//    cout << val1 << endl;
//    cout << val2 << endl;


    int roll;


    for (int i = 0; i < 10; i++)
    {
        roll = rand() % 6 + 1;
        cout << roll << endl;
    }


    return 0;
}
