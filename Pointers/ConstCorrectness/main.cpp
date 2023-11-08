#include <iostream>

using namespace std;

void noConst();
void cp2ncd();
void nc2pcd();
void cp2cd();

void noChange();

int main()
{
    noConst();
    cout << endl;

    cp2ncd();
    cout << endl;

    nc2pcd();
    cout << endl;

    cp2cd();
    cout << endl;

    noChange();
    cout << endl;

    return 0;
}

//neither is a constant, so both can be changed
void noConst()
{
    cout << "In noConst" << endl;
    int* intPtr = new int(50);

    cout << "\torig value: " << *intPtr << endl;

    *intPtr = 100;
    cout << "\tchanged date: " << *intPtr << endl;

    delete intPtr; //delete current dynamic int

    intPtr = new int(150);
    cout << "\tnew int entirely: " << *intPtr << endl;

    delete intPtr;

}

//pointer is constant, so it can't be changed
void cp2ncd() 
{
    cout << "In cp2ncd" << endl;

    int* const intPtr = new int(100);
    cout << "\torig value: " << *intPtr << endl;

    *intPtr = 250;
    cout << "\tnew int value: " << *intPtr << endl;

    delete intPtr;

    //intPtr = new int(222); 
}

//pointer is not constant, which can be changed
//data is constant, which can't be changed
void nc2pcd()
{
    cout << "In nc2pcd" << endl;
    
    const int* intPtr = new int(500);
    cout << "\torig: value: " << *intPtr << endl;

    delete intPtr;

    intPtr = new int(100); //Ok

    delete intPtr;

    //*intPtr = 1500; //spits an error because data is const


}
//pointer is const
//data is const
void cp2cd()
{   
    const int* const intPtr = new int(5000);

    cout << "inside cp2cd" << endl;
    cout << "\torig value: " << *intPtr << endl;

    //no changes allowed
    //*intPtr = 1212; error - data is const
    //intPtr = new int(1212); error - pointer is const

}

//pointer and data are const
void noChange()
{
    const double* const doubPtr = new double(3.14159);

    cout << "inside nochange" << endl;
    cout << "\torig value: " << *doubPtr << endl;

    delete doubPtr;

}