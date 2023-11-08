#include <iostream>
#include <stdexcept>
#include "warpDriveOverheating.hpp"

using namespace std;


void warpTest(int temp);


int main()
{
    cout << "Checking operating temperature " << endl;

    try
    {   
        for( int i = 0; i< 10; i++)
        {
            warpTest(50 + (i * 10));
        }
    }
    catch(const WarpDriveOverheating& e)
    {
        cerr << e.what() << '\n';
    }
    

    return 0;
}

void warpTest(int temp)
{
    if (temp <= 80)
    {
        cout << "Temperature is within tolerance." << endl;
    }
    else
    {
        throw WarpDriveOverheating();
    }
}