#include <iostream>

using namespace std;

int main ()
{
    int intVar1 = 1, intVar2 = 2;

    double doubleVar;

    doubleVar = static_cast<double>(intVar1) / intVar2;

    cout << "1st string" << endl; // endl : \n (enter key와 같은 효과)
    cout << "doubleVar : " << doubleVar;

    return 0;
}