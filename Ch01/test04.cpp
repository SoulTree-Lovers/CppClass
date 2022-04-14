#include <iostream>
using namespace std;

int main()
{
    double price = 78.5;

    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);

    cout << "The price is $" << price << endl;

    return 0;
}

// 출력값
// The price is $78.50
