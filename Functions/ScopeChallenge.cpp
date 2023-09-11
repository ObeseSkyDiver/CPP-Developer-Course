#include <iostream>

using namespace std;

void modifyGlobal();
int counter = 0;
//Making a program to add +1 to each count inside counter.
//Create a function and global variable, then inside the modifyGlobal() function it must add 1.
//function is than called and put into a for loop inside the main function.


int main()
{
    cout << "Right now counter is set to "<< counter << endl;

    for (int i = 0; i < 100; i++)
    {
        modifyGlobal();
    }

    cout << "After all of that, the counter is now " << counter << endl;

    return 0;
}

void modifyGlobal()
{
    counter++;

}
