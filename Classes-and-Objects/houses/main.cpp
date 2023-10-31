#include <iostream>
#include <string>
#include "house.hpp" 

using namespace std;


//Learning how to use classes and work with header files and use multiple .cpp files
void printHouseData(const House& house);

int main()
{
    House myHouse;
    House yourHouse;
    House newHouse(2,10,"cream");
    
 
    myHouse.print();

    myHouse.setNumStories(2);
    myHouse.setNumWindows(5);
    myHouse.setColor("red");

    yourHouse.setNumStories(3);
    yourHouse.setNumWindows(10);
    yourHouse.setColor("white");

    // printHouseData(myHouse);
    // printHouseData(yourHouse);

    myHouse.print();
    yourHouse.print();

    newHouse.print();

    return 0;
}

void printHouseData(const House& house)
{
    cout << "The color of your house is " << house.getColor();
    cout << " and it has " << house.getNumStories() << " stories, and also it has ";
    cout << house.getNumWindows() << " windows in it!" << endl;
}