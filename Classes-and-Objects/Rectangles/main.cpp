#include <iostream>
#include "rectangle.h"

using namespace std;

int main()
{
    Rectangle r1;
    Rectangle r2(5.0,2.0);

    cout << "The area of r1 is " << r1.area() << endl;
    cout << "The area of r2 is " << r2.area() << endl;

    r1.setLength(22);
    r1.setWidth(12);

    cout << "The length of r1 is " << r1.getLength() << endl;
    cout << "The width of r1 is " << r1.getWidth() << endl;

    cout << "The area of r1 now is " << r1.area() << endl;
    cout << "The permieter of r1 is " << r1.perimeter() << endl;

    return 0;
}