#ifndef PERSON_HPP
#define PERSON_HPP 

#include <string>
using namespace std;


class Person
{
    public:
        Person(string name);
        string getName() const noexcept;
        void setName(string name);

    private:
        string name;
};
#endif