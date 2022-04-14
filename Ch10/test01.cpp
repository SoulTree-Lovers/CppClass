#include <iostream>
using namespace std;

int main()
{
    double *p;  // pointer p 변수를 선언, double type의 변수의 주소를 갖는다는 의미
    double d = 10.5;

    int *p1;     // data type이 같아야 할당이 가능
    int a = 10;

    p = &d;      // p변수 값에 변수 d의 memory 주소를 할당
    
    cout << "p : " << p << endl;
    cout << "*p : " << *p << endl;
    
    p1 = &a;


    return 0;
}