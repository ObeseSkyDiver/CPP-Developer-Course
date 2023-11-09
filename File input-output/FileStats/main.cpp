#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream intFile;
    intFile.open("scores.txt");

    int tempNum;

    double sum = 0;
    int count = 0;
    int max = 0;
    int min = 0;
    double avg = 0.0;
    
    cout << " Checking the numbers in the submitted file. " << endl;

    if(!intFile)
    {
        cout << "ERROR: Unable to open the file, please make sure you submit the correct file." << endl;
        return 1;
    }

    while(!intFile.eof())
    {
        intFile >> tempNum;

        if(tempNum >= 0 && tempNum <= 100)
        {
            if(count == 0)
            {
                min = tempNum;
                max = tempNum;
            }

            if(tempNum < min)
            {
                min = tempNum;
            }

            if(tempNum > max)
            {
                max = tempNum;
            }

            sum += tempNum;
            count++;
        }
        else
        {
            cout << tempNum << " isn't within range. " << endl;
            
        }
    }

    if(count != 0)
    {
        avg = sum / count;
    }

    cout << "Statistics: " << endl;
    cout << "\tMax: " << max << endl;
    cout << "\tMin: " << min << endl;
    cout << "\tAverage: " << avg << endl;


    intFile.close();

    cout << "DONE" << endl;


    return 0;
}