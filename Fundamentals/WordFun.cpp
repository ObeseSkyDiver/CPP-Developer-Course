#include <iostream>
#include <string>

using namespace std;

int main()
{
    //Instead of working with variables, this will focus on characters and words.

    //As you can see here, we used a single quotation mark for a single character. Doing so makes it easier to stay organized as to what you're trying to type.
    char singleChar = 'a';

    //We are using strings to print out full words. To use strings, you MUST include the <string> library. If you don't, its GG bud.
    string myString = "Samuel Fernandez";


    cout << singleChar << endl;
    cout << "Hello my name is " << myString <<", I hope you've had a great day!" << endl;


    return 0;
}
