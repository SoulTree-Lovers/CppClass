#include <iostream>
using namespace std;

int sum_value(int x, int y);
int sum_referrance(int& x, int& y);

int main()
{
    int a = 2, b = 3;
    int result_1 = sum_value(a, b);
    int result_2 = sum_referrance(a, b);

    cout << result_1 << endl;
    cout << result_2 << endl;

    return 0;
}


/* call by value */

int sum_value(int x, int y)
{
    return (x+y);
}

/* call by referrance */
/* 새로운 메모리를 생성하지 않아 call by value보다 효율적이다. */
/* 특히 class를 파라미터로 받을 때 주로 사용한다. */

int sum_referrance(int& x, int& y)
{
    return (x+y);
}

/* const 타입의 멤버 변수는 const 타입의 멤버 메소드만 호출할 수 있다. */
