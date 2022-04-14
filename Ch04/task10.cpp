#include <iostream>
using namespace std;

void sort_three (int& a, int& b, int& c);

int main()
{
    int i1 = 100, i2 = 90, i3 = 500;
    sort_three (i1, i2, i3);
    cout << "Three numbers are: " << i1 << " , " << i2 << " , " << i3 << endl;

    return 0;
}

void sort_three (int& a, int& b, int& c)
{
    int temp;

    if (b < c)
    {
        temp = b;
        b = c;
        c = temp;
    }   

    if (a < b)
    {
        temp = a;
        a = b;
        b = temp;
    }
    
    if (a < c)
    {
        temp = a;
        a = c;
        c = temp;    
    }

}