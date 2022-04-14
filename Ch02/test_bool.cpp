#include <iostream>
using namespace std;

int main()
{
    bool isDog = true; // 값이 0이 아닌 모든 수를 할당하면 true

    int x = 2;
    bool result;

    // ()는 모든 연산자보다 가장 최상의 우선순위를 가지고 있음
    result = (x + 1) > 2 || (x + 1) < -3;
    
    cout << "result : " << result << endl;
    
    // bool data type으로 선언된 변수인 isDog을 출력하면 0 또는 1로 나옴
    cout << "is dog? : " << isDog << endl;

    // bool data type으로 선언된 변수인 isDog의 출력값을 true, false로 출력하고 싶은 경우는
    // boolalpha(std에 선언)를 사용
    cout << boolalpha;
    cout << "2nd is dog? : " << isDog;

    return 0;
}