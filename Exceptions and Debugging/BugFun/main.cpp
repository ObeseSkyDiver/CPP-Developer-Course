#include <iostream>
#include <stdexcept>

using namespace  std;

int imBroke(int num1,int num2);

int main()
{

    int a;

    try
    {
        a = imBroke(10,5);

        cout << a << endl;

        a= imBroke(10,0);

        cout << a << endl;
    }
    catch(const invalid_argument& e)
    {
        cout << e.what() << '\n';
    }

    return 0;
}

int imBroke(int num1, int num2)
{
    int result = 0;

    if (num2 != 0)
    {
        result = num1 /num2;
    }
    else
    {
        throw invalid_argument("Cannot divide by 0");
    }
    return result;

}