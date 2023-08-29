#include <iostream>

using namespace std;

int main()
{
    for (int i = 0; i <= 50; i++)
    {
        if  (i % 2)
        {
            cout << i << " is odd." << endl;
        }
        else
        {
            cout << i << " is even." << endl;
        }
    }
    return 0;
}
