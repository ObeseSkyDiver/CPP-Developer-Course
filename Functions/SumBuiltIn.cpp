#include <iostream>

using namespace std;

/*
Create a function called sumArray, must have 2 parameters and be an array of integers.
Iterate through the array, summing the integers in the array.
Return the sum of these integers.
*/

int sumArray(int a[], int arraySize);

int main()
{

    int arrayAmt[]{1,5,7,8,1,0,6,10};
    int sum = sumArray(arrayAmt, 5);

    cout << "Sum of the elements in arrayAmt is " << sum << endl;

    return 0;
}

int sumArray(int a[], int arraySize)
{
    int sum = 0;

    for (int i = 0;i < arraySize; i++)
    {
        sum += a[i]; // sum = sum + a[i]
    }
    return sum;
}
