#include <iostream>
#include <stdexcept>
using namespace std;
//Creating a project that will throw and handle an out of range exception.

char getLetterGrade(int numGrade);

int main()
{
    //cout << "Welcome to the Barely Functioning Grader. I hope you enjoy our services!" << endl;


    //cout << "Please enter a number grade for me to convert: ";

    char grade;

    try
    {
        grade = getLetterGrade(95);
        cout << grade << endl;

        grade = getLetterGrade(75);
        cout << grade << endl;

        grade = getLetterGrade(11);
        cout << grade << endl;
    }
    catch(const out_of_range& e)
    {
       cerr << e.what() << '\n';
    }
    


    //cout << "I will now take that number and convert it to a letter grade to make grading much simpler. " << endl;




    return 0;
}

char getLetterGrade(int numGrade)
{

    char letGrade;

    if (numGrade < 0 || numGrade > 100)
    {
        throw out_of_range("Your grade is not within the acceptable range. Enter a number between 0 and 100");
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
    
    
};