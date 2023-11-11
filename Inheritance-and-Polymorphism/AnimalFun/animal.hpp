#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <string>

using namespace std;

class Animal
{
    public:
        Animal(string name, double weight);
        string getName() const;
        double getWeight() const;
        void setName(string name);
        void setWeight(double weight);
        virtual string makeNoise() const = 0;
        virtual string eat() const = 0;

    private:
        string name;
        double weight;

};



#endif