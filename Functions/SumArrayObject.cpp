#include <iostream>
#include <array>

using namespace std;
/*
Create a function called sumArray, it has 1 parameter, however the array object has 2 type of parameters. Data type and size
Iterate through the array, summing the integers in the array.
Array size must be 10.
Return the sum of these integers.
*/

int sumArray(array<int,10>arrayInt);
void sumArray(array<int,10> arrayInt, int& arrayRef);


int main()
{
    array<int,10> primaryArray = {2,4,6,8,10,12,14,16,18,20};

    int theResult = sumArray(primaryArray);
    int resultByRef;

    sumArray(primaryArray, resultByRef);

    cout << "The result is " << theResult << endl;
    cout << "Result by reference is " << resultByRef << endl;


    return 0;
}

int sumArray(array<int,10> arrayInt)
{
    int sum = 0;

    for (int item: arrayInt)
    {
        sum += item;
    }
    return sum;

}

void sumArray(array<int,10> arrayInt, int& arrayRef)
{
    arrayRef = 0;

    for(int item: arrayInt)
    {

        arrayRef += item;
    }


}
