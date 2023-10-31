#include <iostream>
#include <string> 

#include "house.hpp"

//creating a constructor class, you are allowed to have multiple constructors at once.
House::House()
{
        this->numStories = 1;
        this->numWindows = 4;
        this->color = "green";
}

House::House(int numStories, int numWindows, string color) 
{
        this->numStories = numStories;
        this->numWindows = numWindows;
        this->color = color;
}

//deconstructor class
House::~House()
{
        cout << "The "<< color << " house with " << numStories << " stories";
        cout << " and " << numWindows << " is being destroyed by this function!" << endl;
}

void House::setNumStories(int numStories)
{
        this->numStories = numStories;
}
void House::setNumWindows(int numWindows)
{
        this->numWindows = numWindows;
}
void House::setColor(string color)
{
        this->color = color;
}
int House::getNumStories() const
{
        return numStories;
}
int House::getNumWindows() const
{
        return numWindows;
}
string House::getColor() const
{
        return color;
}

void House::print() const
{
        cout << "The color of your house is " << color;
        cout << " and it has " << numStories << " stories, and also it has ";
        cout << numWindows << " windows in it!" << endl;
}