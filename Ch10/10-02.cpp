//Program to demonstrate pointers and dynamic variables.
#include <iostream>
using namespace std;

int main( )
{
    int *p1, *p2;
    int a = 10;

    p2 = &a;
    *p2 = *p2 + 2; // a = a + 2;

    /* new int => compiler에게 memory에 int type에 해당하는 메모리 4bytes를 생성해달라는 요청 */
    /* compiler는 program을 실행하는 동안에 메모리에 4bytes를 할당하여 address를 전달함 */
    /* p1 : dynamic variable */
    p1 = new int;  // new int : 변수 이름이 없는 (nameless) int type의 변수
    *p1 = 42;
    p2 = p1;
    cout << "*p1 == " << *p1 << endl;
    cout << "*p2 == " << *p2 << endl;

    *p2 = 53;
    cout << "*p1 == " << *p1 << endl;
    cout << "*p2 == " << *p2 << endl;

    p1 = new int;
    *p1 = 88;
    cout << "*p1 == " << *p1 << endl;
    cout << "*p2 == " << *p2 << endl;

    cout << "Hope you got the point of this example!\n";
    return 0;
}
