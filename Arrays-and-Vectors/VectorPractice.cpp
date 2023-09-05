#include <iostream>
#include <vector>
#include <string>

/*
Create a vector and add 5 names to it.
After adding 5 names to it, insert "Samuel Fernandez" as the third element.
Once that is complete, remove the last element of the vector.
Print all elements in the vector.
*/


using namespace std;

int main()
{

    //created vector and labelled 5 names to it.
    vector<string> nameList(5);

    nameList[0] = "Nicole";
    nameList[1] = "Alex";
    nameList[2] = "Jeffrey";
    nameList[3] = "Apolinar";
    nameList[4] = "Yolanda";

    //for loop to print out each name inside nameList.
    for (string name : nameList)
    {
        cout << name << endl;
    }

    cout << endl;
    //remove last 3 elements in nameList.
    nameList.pop_back();
    nameList.pop_back();
    nameList.pop_back();

    //insert "Samuel Fernandez" to the end of nameList.
    nameList.push_back("Samuel Fernandez");

    //added 1 more element to nameList.
    nameList.push_back("Apolinar");

    //repeat for loop to print out each name inside nameList.
    for (string name : nameList)
    {
        cout << name << endl;
    }



    return 0;
}
