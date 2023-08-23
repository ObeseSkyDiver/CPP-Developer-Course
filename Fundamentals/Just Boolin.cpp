#include <iostream>


using namespace std;

int main()
{
    //Time to learn about booleans. Booleans, or "bool" for short, will help determine if something is true or false and then print that out for you if you want.
    //If you want to keep it as a 1 or 0, you just keep it as such.

    bool isRaining = false;
    bool isNotRaining = true;

    cout << boolalpha <<  isRaining << endl;
    cout << isNotRaining << endl;

    // If you want bools to be presented as a word of true or false, you must declare boolalpha before the booleans. You only need to declare it once for every boolean to follow that rule.

    //This is a test to make sure I understand.
    bool isSunny = true;
    bool isWarm = true;

    cout << "Today on August 23, 2023, would you say that it is sunny? " << isSunny << endl;
    cout << "Would you also say it is warm outside today? " << isWarm << endl;
    return 0;
}

