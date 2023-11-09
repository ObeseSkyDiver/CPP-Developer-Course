#include <iostream>
#include <fstream>
#include <vector>
#include "rectangle.hpp"

using namespace std;

void populateVector(ifstream& inFile, vector<Rectangle*>& rectVector);
void printData(ofstream& outFile, vector<Rectangle*>& rectVector);
void deallocateRectangles(vector<Rectangle*>& rectVector);

int main()
{
    vector<Rectangle*> rectVector;
    ifstream inFile;
    ofstream outFile;

    inFile.open("rectangles.txt");
    outFile.open("output.txt");

    if(!inFile)
    {
        cout << "ERROR: Unable to open the file, please use the correct file." << endl;
        return 1;
    }

    populateVector(inFile, rectVector);

    printData(outFile, rectVector);

    deallocateRectangles(rectVector);

    




    inFile.close();
    outFile.close();


    return 0;
}

void populateVector(ifstream& inFile, vector<Rectangle*>& rectVector)
{
    Rectangle* temp;
    int length;
    int width;

    while(!inFile.eof())
    {
        inFile >> length;
        inFile >> width;

        temp = new Rectangle(length, width);
        rectVector.push_back(temp);

    }

}

void printData(ofstream& outFile, vector<Rectangle*>& rectVector)
{
    for(Rectangle* rectPtr : rectVector)
    {
        outFile << rectPtr->area() << "\t" << rectPtr->perimeter() << endl;
    }
}

void deallocateRectangles(vector<Rectangle*>& rectVector)
{
    for(Rectangle* rectPtr: rectVector)
    {
        delete rectPtr;
    }

    //empty vector
    rectVector.clear();
}