#include <iostream>
#include "pizza.h"

using namespace std;

void printPizzaData(const Pizza& pizza);

int main()
{
    Pizza samPizza("Cheese", 5, 8);
    Pizza alexPizza("Pepperoni", 7, 8);
    alexPizza.addTopping("green pepper");

    Pizza special("The Special Pizza", 12, 10);

    special.addTopping("cheese");
    special.addTopping("pepperoni");
    special.addTopping("green pepper");
    special.addTopping("olives");

    printPizzaData(samPizza);
    printPizzaData(alexPizza);
    printPizzaData(special);

    return 0;
}

void printPizzaData(const Pizza& pizza)
{
    cout << "Name: " <<pizza.getName() << endl;
    cout << "Cost: $" << pizza.getCost() << endl;
    cout << "Diameter: " << pizza.getDiameter() << endl;
    cout << "Toppings: " << endl;

    pizza.printToppings();
    cout << endl;
}
