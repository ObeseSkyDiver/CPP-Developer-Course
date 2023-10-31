#include <iostream>
#include <stdexcept>

#include "AngryCatException.hpp"

using namespace std;

void feedKitty(int numTreats);


int main()
{
    int numTreats = 0;

    cout << "How many treats do you want to feed the cat?" << endl;
    cin >> numTreats;

    try
    {
        feedKitty(numTreats);
    }
    catch(const AngryCatException & e)
    {
        cout << e.what() << '\n';
    }
    

    return 0;
}

void feedKitty(int numTreats)
{
    if(numTreats < 3)
    {
        throw AngryCatException();
    }
    else if(numTreats < 6)
    {
        throw AngryCatException("I still want more treats!");
    }

    cout << "The cat is happy with " << numTreats << " treats." << endl;
}