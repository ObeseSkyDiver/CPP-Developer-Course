#include "dog.hpp"
#include <stdexcept>
#include <string>

using namespace std;

Dog::Dog(string breed)
{
    setBreed(breed);
}

string Dog::getBreed() const noexcept
{
    return breed;
}

void Dog::setBreed(string breed)
{
    if(breed != "Poodle")
    {
        this->breed = breed;
    }
    else
    {
        throw runtime_error("What's a poodle?! That isn't a real dog you weirdo!");
    }
}