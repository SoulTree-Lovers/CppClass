#include <iostream>
using namespace std;

int main()
{
    int x = 2;

    // = : assign operator -> x가 12가 됨
    // if (x = 12) -> if (12) -> if (true)
    // if (x = 0) -> if (0) -> if (false)
    // if (boolean expression -> true or false)
    if (x == 12)
    {
        cout << "x is equal to 12." << endl;
    } 
    else
    {
        cout << "x is not equal to 12." << endl;
    }
}