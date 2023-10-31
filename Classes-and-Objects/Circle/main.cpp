#include <iostream>
#include "circle.h"

using namespace std;

void printCircleData(const Circle& c);

int main()
{
    Circle cir1;
    Circle cir2(10);

    printCircleData(cir1);
    printCircleData(cir2);


    return 0;
}

void printCircleData(const Circle& c)
{
    cout << "Circle with radius " << c.getRadius() << endl;
    cout << "\tCircumfrence: " << c.circumference() << endl;
    cout << "\tArea: " << c.area() << endl;
    cout << endl;
}