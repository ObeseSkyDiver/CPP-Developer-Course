#include <iostream>
#include <cmath>

using namespace std;
//Learning about the cmath library. Using some functions to help understand what they do.


int main()
{

    int powResult = pow(2, 3);
    int sqrtResult = sqrt(25);
    int ceilResult = ceil(4.25);
    int floorResult = floor(4.25);
    int logResult = log2(512);



    cout << "2^3 is " << powResult << endl;
    cout << "Square Root of " << sqrtResult << endl;
    cout << "The Ceiling of 4.2 is " << ceilResult << endl;
    cout << "The floor of 4.2 is " << floorResult << endl;
    cout << "The log2 of 512 is " << logResult << endl;


    return 0;
}
