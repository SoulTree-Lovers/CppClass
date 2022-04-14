#include <iostream>
using namespace std;

int main()
{
    int max;
    int n = 2;
    int m = 3;

    // if (n > m)
    // {
    //     max = n;
    // }
    // else
    // {
    //     max = m;
    // }

    max = (n > m) ? n : m;

    cout << "max : " << max << endl;

    return 0;
}