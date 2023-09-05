#include <iostream>

using namespace std;

int main()
{

    //declaring a 2D array that is 2 by 3

    int myNums[2][3]{
        {1,2,3},
        {4,5,6}
    };


    //calling for the array that is located in vertical row 0, horizontal row 3.
    cout << myNums[0][2] << endl;
    cout << myNums[1][2] << endl;

    //changing the array located in vertical row 2, horizontal row 3. So 6 should be changing to 24.
    //myNums[1][2] = 24;

    //printing out 6 or 24 depending on if top line is commented out or not.
    cout << myNums[1][2] << endl;

    for (int row = 0; row < 2; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            cout << myNums[row][col] << " ";
        }
        cout << endl;
    }

    cout << endl << endl;

    int myArrays[2][3]{
        {1,2,3},
        {4,5,6}
    };

    for (int row = 1; row >= 0;row--)
    {
        for (int col = 2; col >= 0; col--)
        {
            cout << myArrays[row][col] << " ";
        }
        cout << endl;
    }

    return 0;

}
