#include <iostream>
using namespace std;

int main()
{
    int a[4][4] = {10, 20, 30, 40, 5, 4, 3, 99, 15, 100, 42, 100, 0, 105, 2, 11};
    int max = a[0][0];
    int max2;
    
    for (int i=0; i<4; i++)
    {
        for (int j=0; j<4; j++)
        {

            if (max < a[i][j])
            {
                max2 = max;
                max = a[i][j];
            }
            
        }
    }

    cout << "The largest number is " << max << endl;
    cout << "The second-largest number is " << max2;
    return 0;
}