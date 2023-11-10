#include <iostream>
#include <string>
#include "animal.hpp"
#include "Dog.hpp"

using namespace std;

int main()
{
    //Animal myAnimal("Sam", 190);
    //Dog dog("Rover", 80, "Greyhound");
    Animal* dogPtr = new Dog("Luffy",20,"Yorkie");

    //cout << "Does the dog make noise? " << dogPtr->makeNoise() << endl;
    
    cout << "Will the dog eat the food? " << dogPtr->eat() << endl;

    // cout << "Animal name: " << myAnimal.getName() << endl;
    // cout << "Animal weight: " << myAnimal.getWeight() << endl;
    // cout << "Animal noise: " << myAnimal.makeNoise() << endl;

    // cout << "Dog's name: " << dog.getName() << endl;
    // cout << "Dog's weight: " << dog.getWeight() << endl;
    // cout << "Dog's breed: " << dog.getBreed() << endl;
    // cout << "Dog's noise: " << dog.makeNoise() << endl;
    //dog.digHole();
    //dog.chaseCat();

    delete dogPtr;
    dogPtr = nullptr;



    return 0;
}