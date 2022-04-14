#include <iostream>
using namespace std;

int main()
{
    int a[8] = {10, 20, 30, 40, 50, 60, 70, 80};
    int *p = &a[0];

    for (int i=0; i<8; i++)
    {
        cout << "a[" << i << "] : " << a[i] << endl;
    }

    cout << "*p : " << *p << endl;
    *p = 5;
    cout << "a[0] : " << a[0] << endl;

    return 0;
}