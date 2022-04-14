#include <iostream>
using namespace std;

int main()
{
    double grade;
    int discreteMath;
    int programmingLanguage;
    int dataStructure;

    cout << "Put the discrete math score: ";
    cin >> discreteMath;
    
    cout << "Put the programming language score: ";
    cin >> programmingLanguage;
    
    cout << "Put the data structure score: ";
    cin >> dataStructure;

    cout << fixed;
    cout.precision(2);

    grade = (discreteMath + programmingLanguage + dataStructure) / 3.0;

    
    if (grade > 95)
    {
        cout << "The average score is " << grade << " and the grade is A+";
    }
    else if (grade > 90)
    {
        cout << "The average score is " << grade << " and the grade is A0";
    }
    else if (grade > 85)
    {
        cout << "The average score is " << grade << " and the grade is B+";
    }
    else if (grade > 80)
    {
        cout << "The average score is " << grade << " and the grade is B0";
    }
    else if (grade > 75)
    {
        cout << "The average score is " << grade << " and the grade is C+";
    }
    else if (grade > 70)
    {
        cout << "The average score is " << grade << " and the grade is C0";
    }
    else
    {
        cout << "The average score is " << grade << " and the grade is F";
    }

    return 0;
}