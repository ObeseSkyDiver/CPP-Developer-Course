#include <iostream>
#include <vector>
#include <string>

/*
Use vectors to ask a user for a name and also that persons weight(in pounds).
Ask for 5 users information and print out "*name* weighs *weight* lbs." for each of the users.
*/


using namespace std;

int main()
{
    //variables declared for each vector, along with the max of people being used for this sample.
    const int peopleCap = 5;
    vector<string> personName;
    vector<int> personWeight;

    //temporary variables declared to use to hold the information
    string tempName;
    int tempWeight;


    //for loop that will keep running until the user has input 5 entries.
    for (int i = 0 ; i < peopleCap; i++)
    {
        //getline(cin, tempName) is being used instead of "cin >> tempName" to allow spaces in between first and last name.
        cout << "Please enter a person's name: ";
        getline(cin, tempName);

        //cin.get() being used to reiterate the loop back to previous func.
        cout << "Please enter their weight in pounds: ";
        cin >> tempWeight;
        cin.get();

        //push_back function is being used to input the temporary name and weight into the permanent name and weight.
        personName.push_back(tempName);
        personWeight.push_back(tempWeight);

    }

    cout << endl;

    //for loop that prints out each persons name and weight.
    for (int i = 0; i < peopleCap; i++)
    {
        cout << personName[i] << " weighs " << personWeight[i] << "lbs." << endl;
    }


    return 0;
}
