#include <iostream>
using namespace std;

int add(int i1, int i2);
double add(double d1, double d2);
string add(string s1, string s2);

int main()
{
    int i1 = 10, i2 = 30;
    double d1 = 0.5, d2 = 3.5;
    string s1 = "Hello", s2 = "World";

    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(1);

    cout << add(i1, i2) << ", " << add(d1, d2) << ", " << add(s1, s2) << endl;
}

int add(int i1, int i2)
{
    return i1 + i2;
}

double add(double d1, double d2)
{
    return double(d1 + d2);
}

string add(string s1, string s2)
{
    return s1 + s2;
}