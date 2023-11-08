#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    ifstream nameFile;
    ifstream ageFile;
    ofstream outFile;

    string tempName;
    int tempAge;

    cout << "Opening the requested files..." << endl;
    
    nameFile.open("names.txt");
    ageFile.open("ages.txt");
    
    outFile.open("output.txt");

    if(!nameFile || !ageFile)
    {
        cout << "ERROR: Unable to open the file, please try again. " << endl;
        return 1;
    }

    while(!nameFile.eof() && !ageFile.eof())
    {
        getline(nameFile,tempName);
        ageFile >> tempAge;
        outFile << tempName << " " << tempAge << endl;
    }


    nameFile.close();
    ageFile.close();

    outFile.close();


    cout << "DONE!" << endl;

    return 0;
}