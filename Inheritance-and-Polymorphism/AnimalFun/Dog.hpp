#ifndef DOG_HPP
#define DOG_HPP

#include <string>
#include "animal.hpp"
using namespace std;

class Dog: public Animal
{
    public:
        Dog(string name, double weight, string breed);
        string getBreed() const;
        void digHole() const;
        string makeNoise() const;
        void chaseCat() const;
        string eat() const;

    private:
        string breed;


};

#endif