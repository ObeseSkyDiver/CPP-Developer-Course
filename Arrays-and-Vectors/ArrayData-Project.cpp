#include <iostream>


/*
Building an array that allows users to input a number and then multiply the users input by 2.
Then print out the users multiplied value back to them.
*/

using namespace std;

int main()
{
   const int arraySize = 5;
   int userInput[arraySize];


   for (int i = 0; i < arraySize; i++)
   {
       cout << "Please enter an integer: " ;
       cin >> userInput[i];
   }

   cout << "Now lets print out double of what you put in!" << endl;

    for (int num : userInput)
    {
           cout << num * 2 << endl;
    }


    return 0;
}


