#include "item.hpp"
#include <iostream>
#include <iomanip>

using namespace std;

void itemFrequency::addItem(string item)
{
    int index = indexOfItem(item);

    if (index != -1)
    {
        //item already exists
        frequency[index]++;
    }
    else
    {
        //new item
        items.push_back(item);
        frequency.push_back(1);
    }
}

void itemFrequency::printFrequency() const
{
    for(int i = 0; i < items.size(); i++)
    {
        cout << setw(12) << items[i] << setw(8)
            << frequency[i] << endl;
    }
}

int itemFrequency::indexOfItem(string item) const
{
    int resultIndex = -1;

    for(int i = 0; i < items.size(); i++)
    {
        if (item == items.at(i))
        {
            resultIndex = i;
            break;
        }
    }
    return resultIndex;
}