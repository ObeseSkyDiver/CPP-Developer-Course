#include <iostream>
#include <string>


using namespace std;


int main()
{
    //Setting array_size to a constant for learning.
    const int array_size = 6;
    int thisArray[array_size];

    //string is an array which should hold these 4 names.
    string nameList[4]{"Sammy", "Danny", "Nicole", "Alex"};


    thisArray[0] = 10;
    thisArray[1] = 22;
    thisArray[2] = 13;
    thisArray[3] = 4;
    thisArray[4] = 44;
    thisArray[5] = 9;
    thisArray[6] = 36;


    for (int i = 0; i <= array_size; i++)
    {

        cout << thisArray[i] << endl << endl;
    }

//    for (int i = 0; i < 4; i++)
//    {
//        cout << nameList[i] << endl;
//


// creating a for loop but calling the variable something different so I can call it with less text.
for(string name: nameList)
{
    cout << name << endl;
}


    return 0;
}
