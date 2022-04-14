#include <iostream>
using namespace std;

int main( )
{
    // declaration statement, variable naming : camel notation
    // variable declare example : int numberOfLanguages;        declare는 변수만 선언한 경우
    // variable define example : int numberOfLangurages = 1;    define은 변수에 초기값을 준 경우

    int numberOfLanguages;  // variable이 undefined상태
    int a;

    a = 3; // = : assign operator(할당 연산자)

    cout << "Hello reader.\n" 
         << "Welcome to C++.\n";    // expression statement

    cout << "How many programming languages have you used? ";
    cin >> numberOfLanguages;

    if (numberOfLanguages < 1) 
        cout << "Read the preface. You may prefer\n"
             << "a more elementary book by the same author.\n";
    else
        cout << "Enjoy the book.\n";

    return 0;
}