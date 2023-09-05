#include <iostream>
#include <array>

using namespace std;

int main()
{
    array<int, 5> myIntArray{};

    myIntArray[0] = 2;
    myIntArray[1] = 4;
    myIntArray[2] = 6;
    myIntArray[3] = 8;
    myIntArray[4] = 10;

    for (int a: myIntArray)
    {
        cout << a << endl;
    }

    cout << "Size of Array: " << myIntArray.size() << endl;


    return 0;
}
