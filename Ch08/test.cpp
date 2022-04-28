#include <iostream>
using namespace std;




int& sum(int& x, int& y, int& result)
{
	result = x + y;
	return result;
}

int main()
{
    int a=2, b=3;
    int result;

    sum(a, b, result);
    cout << result << endl;


    return 0;
}
