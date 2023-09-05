#include <iostream>
#include <string>

using namespace std;

// Use a for loop to populate an array.
// Array size should equal to 10, populate the array with the numbers 1 through 10.
// With a separate range-based for loop, print out the values of the array.



int main()
{
    //setting array size to 10 with a const so it never changes.
    const int arraySize = 10;
    int arrays[arraySize];

    //populating array to always add 1 to it until it reaches the value set in arraySize
    for (int i = 0; i < arraySize; i++)
    {
        arrays[i] = i + 1;
    }

    //printing out the values in the array using num.
    for (int num : arrays)
    {
        cout << num << endl;
    }




    return 0;
}
