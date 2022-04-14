#include <iostream>
using namespace std;

int main()
{
    double celsius;
    
    cout << "Put the degree in Celsius: ";
    cin >> celsius;

    cout << "The degree in Fahrenheit is: " << celsius * 1.8 + 32;

    return 0;
}