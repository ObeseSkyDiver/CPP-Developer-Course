#include <iostream>
#include <vector>
#include <string>

//Learning about vectors here.


using namespace std;

int main()
{
    //Vector is an integer named someVec. The size of someVec has not been determined. AnotherVec currently holds 3 values.
    vector<int> someVec;
    vector<string> anotherVec(3);

    //push_back is done to add 1 to the value at the end of the variable. So if the size of someVec was 50, doing a push_back command would make it 51.
    someVec.push_back(1);
    someVec.push_back(2);
    someVec.push_back(3);

    //Here we can check to see how large someVec is.
    cout << "someVec size: " << someVec.size() << endl << endl ;

    //The 3 names that are currently inside anotherVec.

    anotherVec[0] = "John";
    anotherVec[1] = "Sam";
    anotherVec[2] = "Nicole";

    //Added 1 more to anotherVec and declared it.
    anotherVec.push_back("Alex");

    // uses "val" to print out each value inside "someVec". This will make sure that "val" keeps  continuing until it matches "someVec" size.
    for (int val : someVec)
    {
        cout << val << endl;
    }

    // uses "name" to print out each value inside "anotherVec". This will make sure that "name" will keep going until it matches the size of "anotherVec".
    for (string name: anotherVec)
    {
        cout << name << endl;
    }

    // checking what is currently in the front and in the back of the queue for "anotherVec".
    cout << "Front and back: " << endl;
    cout << "front: " << anotherVec.front() << endl;
    cout << "back: " << anotherVec.back() << endl;

    //pop_back is a function that will remove the last value of the queue in "anotherVec". So if 'Alex' is the last one in the queue, it will disappear.
    anotherVec.pop_back();

    //insert is a function similar to push_back, however it doesn't specify where you insert the next value.
    //You will need to use the .begin() command to add it to the beginning of the variable. using .end() will add it to the end.
    anotherVec.insert(anotherVec.begin(), "Apolinar");


    cout << "Now, front is: " << anotherVec.front() << endl;
    cout << "and Back is: " << anotherVec.back() << endl;


    return 0;
}
