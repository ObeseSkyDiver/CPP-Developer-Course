#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    ifstream intFile;
    ofstream outFile;

    int tempNum;

    cout << "I am checking the requested files. " << endl;

    intFile.open("file.txt");

    outFile.open("output.txt");

    if(!intFile)
    {
        cout << "ERROR: Unable to open the file, please try again. " << endl;
        return 1;
    }

    while(!intFile.eof())
    {
        intFile >> tempNum;
        outFile << "Before value: " << tempNum << endl;
        outFile << "After value: " << (tempNum * 2) << endl;
    }

    intFile.close();
    outFile.close();

    cout << "DONE!" << endl;



    return 0;
}