#ifndef DOG_HPP
#define DOG_HPP

#include <string>
using namespace std;

class Dog
{
    public:
        Dog(string breed);
        string getBreed() const noexcept;
        void setBreed(string breed);

    private:
        string breed;
};
#endif