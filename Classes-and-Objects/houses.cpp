#include <iostream>

using namespace std;


class House{
public:
    void setNumStories(int numStories)
    {
        this->numStories = numStories;
    }

    void setNumWindows(int numWindows)
    {
        this->numWindows = numWindows;
    }

    void setColor(string color)
    {
        this->color =color;
    }

    int getNumStories() const
    {
        return numStories;
    }

    int getNumWindows() const
    {
        return numWindows;
    }

    string getColor() const
    {
        return color;
    }

private:
    int numStories;
    int numWindows;
    string color;
};//end of the House class


int main()
{
    House myHouse;
    House yourHouse;

    myHouse.setNumStories(2);
    myHouse.setNumWindows(6);
    myHouse.setColor("red");

    yourHouse.setNumStories(4);
    yourHouse.setNumWindows(10);
    yourHouse.setColor("white");


    cout << "My house is " << myHouse.getColor() << " and has " << myHouse.getNumStories() << " stories, it also has " << myHouse.getNumWindows() << " windows. " << endl;
    cout << "My house is " << yourHouse.getColor() << " and has " << yourHouse.getNumStories() << ", it also has " << yourHouse.getNumWindows() << " windows. " << endl;


    return 0;
}
