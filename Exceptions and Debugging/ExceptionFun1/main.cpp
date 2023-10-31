#include <iostream>
#include <string>
#include <vector>
#include <stdexcept>

using namespace std;

int main()
{
    vector<string> names(5);


    names.at(0) = "Sam";
    names.at(1) = "Alex";
    names.at(2) = "Jeffrey";
    names.at(3) = "Nicole";
    names.at(4) = "Yolanda";

    for (string name: names)
    {
        cout << name << endl;
    }

    try 
    {
        //exception?
        names.at(5) = "Apolinar";
    }

    catch(const out_of_range & err)
    {
        cout << err.what() << endl;
    }


    return 0;
}