#include <iostream>
using namespace std;

int main()
{
    // array에 초기값을 줄 때 배열 전체 원소 갯수보다 작을 경우는 나머지 배열 원소값을 0으로 초기화한다.
    int price[3] = {5, 2}; 

    for (int i=0; i<3; i++)
    {
        cout << "price[" << i << "] : " << price[i] << endl;
    }
    
    return 0;
}