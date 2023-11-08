#include <iostream>

using namespace std;

int main()
{
    int ARR_SIZE = 5;
    
    cout << "Please enter a number for the size of the Array: " << endl;
    cin >> ARR_SIZE;

    int* myArray = new int[ARR_SIZE];

    
    cout << endl << endl;
    
    for(int i = 0;i<ARR_SIZE;i++)
    {
        myArray[i] = i * 2;
    }


    for(int i = 0; i< ARR_SIZE;i++)
    {
        cout << myArray[i] << endl;
    }

    delete[] myArray;

    return 0;
}