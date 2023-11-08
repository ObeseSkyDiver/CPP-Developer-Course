#include <iostream>
#include <stdexcept>

using namespace std;

char getLetterGrade(int numGrade);

int main()
{
    char grade;

    try
    {
        grade = getLetterGrade(95);
        cout << grade << endl;

        grade = getLetterGrade(69);
        cout << grade << endl;

        grade = getLetterGrade(102);
        cout << grade << endl;
    }
    catch (const out_of_range & e)
    {
        cout << e.what() << endl;
    }

    return 0;
}

char getLetterGrade(int numGrade)
{
    char letGrade;

    if(numGrade < 0 || numGrade > 100 )
    {
        throw out_of_range("This number is out of the acceptable range. Acceptable Range: 0 - 100)");
    }
    else if (numGrade >= 90)
    {
        letGrade = 'A';
    }
    else if (numGrade >= 80)
    {
        letGrade = 'B';
    }
    else if (numGrade >= 70)
    {
        letGrade = 'C';
    }
    else if (numGrade >= 60)
    {
        letGrade = 'D';
    }
    else
    {
        letGrade = 'F';
    }
    
    return letGrade;
    
}