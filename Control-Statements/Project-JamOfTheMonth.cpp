#include <iostream>


using namespace std;



int main()
{
    char package;
    int extrajams;
    int totalcost;

    cout << "What package did you chose? ";
    cin >> package;

    switch(package)
    {
    case 'A':
    case 'a':
        cout << "Your package is $8/ month, includes 2 jams per month and each additional jam is $5." << endl;
        cout << "How many jams did you purchase this month? ";
        cin >> extrajams;

        if (extrajams > 2)
        {
            totalcost = 8 + ((extrajams - 2) * 5);
        }
        else if (extrajams <= 2)
        {
            totalcost = 8;
        }
        cout << "Your total is " << totalcost << endl;
        break;

    case 'B':
    case 'b':
        cout << "Your package is $12/ month, includes 4 jams per month and each additional jam is $4." << endl;
        cout << "How many jams did you purchase this month? ";
        cin >> extrajams;

        if (extrajams > 4)
        {
            totalcost = 12 + ((extrajams - 4) * 4 );
        }
        else if (extrajams <= 4)
        {
            totalcost = 12;
        }

        cout << "Your total is " << totalcost << endl;
        break;

    case 'C':
    case 'c':
        cout << "Your package is $15/ month, includes 6 jams per month and each additional jam is $3." << endl;
        cout << "How many jams did you purchase this month? ";
        cin >> extrajams;

        if (extrajams > 6)
        {
            totalcost = 15 + ((extrajams - 6) * 3);
        }
        else if (extrajams <= 6)
        {
            totalcost = 15;
        }
        cout << "Your total is " << totalcost << endl;
        break;

    default:
        cout << "Please input a correct package between A, B, and C." << endl;
    }


    return 0;
}
