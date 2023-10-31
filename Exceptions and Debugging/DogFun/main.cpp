#include <iostream>
#include <stdexcept>
#include <string>

#include "dog.hpp" 

using namespace std;

int main()
{
    try
    {
        Dog dog1("Pitbull");
        Dog dog2("Yorkie");
        Dog dog3("Poodle");
        Dog dog4("Chihuahua");

        cout << dog1.getBreed() << endl;
        cout << dog2.getBreed() << endl;
        cout << dog3.getBreed() << endl; 
        cout << dog4.getBreed() << endl;
    }
    catch(const runtime_error& e)
    {
        cout << e.what() << '\n';
    }
    

    return 0;
}