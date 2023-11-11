#ifndef CAT_HPP
#define CAT_HPP

#include <string>
#include "animal.hpp"

using namespace std;

class Cat: public Animal
{
    public:
        Cat(string name, double weight);
        void chaseMouse() const;
        string makeNoise() const;
        string eat() const;

};
#endif