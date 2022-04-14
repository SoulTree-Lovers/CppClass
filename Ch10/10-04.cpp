//Program to demonstrate the way call-by-value parameters
//behave with pointer arguments.
#include <iostream>
using namespace std;

typedef int* IntPointer;

void sneaky(IntPointer temp);

int main( )
{
    IntPointer p;

    *p = 77;
    cout << "Before call to function *p == " << *p << endl;

    // p의 값(a변수의 주소)이 sneaky 함수의 aprameter인 temp로 전달
    sneaky(p);

    cout << "After call to function *p == " << *p << endl;

    return 0;
}

void sneaky(IntPointer temp)
{
    *temp = 99;
    cout << "Inside function call *temp == "
         << *temp << endl;
}
