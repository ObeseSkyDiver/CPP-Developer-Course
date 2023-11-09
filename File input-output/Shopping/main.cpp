#include <iostream>
#include <fstream>
#include <string>
#include "item.hpp"

using namespace std;

int main()
{
    itemFrequency itemFrequency;

    ifstream inFile;
    string tempName;

    inFile.open("shopping.txt");

    if(!inFile)
    {
        cout << "Please change the filename of the file you're looking to read." << endl;
        return 1;
    }

    while (!inFile.eof())
    {
        inFile >> tempName;
        itemFrequency.addItem(tempName);
    }

    itemFrequency.printFrequency();

    inFile.close();


    return 0;
}