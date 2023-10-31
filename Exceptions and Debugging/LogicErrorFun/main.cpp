#include <iostream>
#include <vector>
#include <stdexcept>

using namespace std;

int main()
{
    
    vector<int> myNums;

    

    try
    {
        myNums.resize(myNums.max_size() + 1);
    }
    catch(const length_error & e)
    {
        cerr << e.what() << endl;
    }
    

    cout << "This is a huge vector!" << endl;





    return 0;
}