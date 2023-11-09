#ifndef ITEM_HPP
#define ITEM_HPP

#include <string>
#include <vector>
using namespace std;

class itemFrequency
{
    public:
        void addItem(string item);
        void printFrequency() const;


    private:
        vector<string> items;
        vector<int> frequency;
        int indexOfItem(string item) const;



};
#endif