#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

void printFormatted(ofstream& outfile, int inCap);

int main()
{

    ofstream outfile;

    cout << "Writing to file " << endl;

    outfile.open("output.txt");

    outfile << fixed << showpoint;
    cout << fixed << showpoint;

    int inCap;

    cout << "Please enter the ceiling for the loop: " << endl;
    cin >> inCap;

    printFormatted(outfile, inCap);


    outfile.close();

    cout << "Done!" << endl;


    return 0;
}

void printFormatted(ofstream& outfile, int inCap)
{
    for (int i = 1; i<= inCap;i++)
    {
        outfile << setw(12) << setprecision(2) << (i * 5.7575)
            << setw(12) << setprecision(3) << (i * 3.14159) << endl;

        cout << setw(12) << setprecision(2) << (i *5.7575)
            << setw(12) << setprecision(3) << (i * 3.14159) << endl;
    }
}