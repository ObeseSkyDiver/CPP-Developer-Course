#include <iostream>
#include <array>

/*
Create an int array size of 10.
use a for loop to initialize the array elements to multiples of 2 for the integers 0 through 9(no manually storing numbers)
Use the size() function to know the size of your array.
use a ranged-based for loop  for print out the elements you stored.
 */

using namespace std;


int main()
{
    array <int, 10> myArray;

    for (int i = 0; i < myArray.size(); i++)
    {
        myArray[i] = i * 2;
    }


    for (int a : myArray)
    {
        cout << a << endl;
    }

    cout << "Size of 'ArraySize' : " << myArray.size() << endl;




    return 0;
}
