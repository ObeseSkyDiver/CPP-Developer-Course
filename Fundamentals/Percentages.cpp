#include <iostream>
#include <string>

using namespace std;

int main()
{
    string fullname;
    string location;
    int initialScore;
    int finalScore;

    cout << "Please input your full name: ";
    getline(cin, fullname);

    cout << "Input your name by city, state, and country. Ex: New York, NY, USA" << endl;
    cout << "Please input your location: ";
    getline(cin, location);

    cout << "If you could rate your town from 0 to 100, 0 being the worst, and 100 being the best." << endl;
    cout << "What rating would you give your town? ";
    cin >> initialScore;

    finalScore = (initialScore + 5);

    cout << "Below you will see all of the information you inputted. As you can see we added +5 to your score." << endl;
    cout << fullname << endl;
    cout << location << endl;
    cout << finalScore << endl;


    return 0;
}
