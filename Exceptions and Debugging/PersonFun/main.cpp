#include <iostream>
#include <stdexcept>
#include "person.hpp"

using namespace std;

int main()
{
    try
    {
        Person person1("Alex");
        Person person2("Nicole");
        Person person3("Sam");
        Person person4("William");

        cout << person1.getName() << endl;
        cout << person2.getName() << endl;
        cout << person3.getName() << endl;
        cout << person4.getName() << endl;

    }
    catch(const runtime_error& e)
    {
        cout << e.what() << '\n';
    }
    



    return 0;
}