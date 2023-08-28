#include <iostream>

using namespace std;

int main()
{

    double num1;
    double num2;
    double num3;

    double sum;
    double average;

    cout << "Please input 3 numbers: " ;
    cin >> num1 >> num2 >> num3;

    cout << "We will calculate the average of the numbers you gave us. Here are the steps to get an average. " << endl;
    cout << "First we add the numbers together." << endl;
    cout << "Lets add " << num1 << " " << num2 << " " << num3 << " together." << endl;

    sum = (num1 + num2 + num3);
    cout << "The sum of the 3 numbers is " << sum << "." << endl;

    cout << "Next we take the sum and divide it by the number of inputs, which in this case is 3." << endl;
    cout << "Lets take " << sum << " and divide it by 3 to get the average." << endl;

    average = (sum / 3);
    cout << "The total average is " << average << endl;

    return 0;
}
