#include <iostream>
using namespace std;

int main()
{
    char grade;

    cout << "input grade : ";
    cin >> grade;

    switch (grade)
    {
        case 'A':
        case 'a':
            cout << "A class" << endl;
            break;
        case 'B':
        case 'b':
            cout << "B class" << endl;
            break;
        case 'C':
        case 'c':
            cout << "C class" << endl;
            break;
        case 'D':
        case 'd':
            cout << "D class" << endl;
            break;
        default:
            cout << "F class" << endl;
            break;
    }


    return 0;
}