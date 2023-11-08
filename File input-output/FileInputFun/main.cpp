#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main()
{
    ifstream infile;
    infile.open("input.txt");

    int inputNum;
    int sum = 0;

    vector<int> myInt;

    while(!infile.eof())
    {
        infile >> inputNum;
        myInt.push_back(inputNum);
        sum += inputNum;
    }

    for( int item: myInt)
    {
        cout << item << endl;
    }
    cout << endl;

    cout << "Sum of numbers is: " << sum << endl;

    infile.close();

    return 0;
}