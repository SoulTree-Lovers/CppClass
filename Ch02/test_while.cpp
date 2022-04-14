#include <iostream>
using namespace std;

int main()
{
    int number = 0; // number 초기값을 0으로 설정
    int sum = 0;
    
    // while문 사용
    // cout << "Enter a number: ";
    // cin >> number;

    // while (number >= 0)
    // {
    //     sum += number;

    //     cout << "Enter a number: ";
    //     cin >> number;
    // }
    do
    {
        sum += number;

        cout << "Enter a number: ";
        cin >> number;
    } 
    while (number >= 0);
    
    cout << "\nThe sum is " << sum << endl;
    
    return 0;
}
