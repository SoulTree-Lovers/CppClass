#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;

int main()
{
    // pseudo : 진짜가 아닌, 진짜를 가장한..
    // pseudo random number : 프로그램을 실행할 때 마다 똑같은 난수값들을 가져온다.
    // 다른 사람의 컴퓨터에서 실행해도 마찬가지..
    for (int i=0; i<10; i++)
    {
        cout << (i+1) << "th rand : " << rand() << endl; 
    }

    for (int i=0; i<10; i++)
    {
        cout << "dice result : " << (rand() % 6) + 1 << endl;
    }
}