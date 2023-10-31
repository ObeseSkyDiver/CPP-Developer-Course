#include "person.hpp"
#include <stdexcept>
#include <string>

using namespace std;


Person::Person(string name)
{
    setName(name);
}


string Person::getName() const noexcept
{
    return name;
}


void Person::setName(string name)
{
    if(name != "Sam")
    {
        this->name = name;
    }
    else
    {
        throw runtime_error("Sam? Who df is that guy?");
    }
}