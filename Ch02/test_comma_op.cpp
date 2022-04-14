#include <iostream>
using namespace std;

int main()
{
    int first, second, result;
    int sum, count;

    // comma operator의 특징 : 맨 마지막에 실행한 결과값이 result 변수에 저장된다.
    result = (first = 2, second = first + 1);
    cout << "result: " << result << endl;
    cout << "first: " << first << endl;
    cout << "second: " << second << endl;

    // sum = 0, count = 1 -> init action (for문에 대한 초기값 설정)
    // count < 5 -> boolean expression (true인 동안에 for문 body statements를 실행)
    // count++ -> update action (for문 body statements를 실행할 때마다 한 번씩 실행)
    for (sum = 0, count = 1; count < 5; count++)
    {
        sum += count;
    }

    cout << "sum: " << sum << endl;
    
    while (sum > 0) // while (sum > 0); -> infinite loop (무한루프 실행)
    {
        cout << "program end" <<endl;
        sum--;
    }

    return 0;
}