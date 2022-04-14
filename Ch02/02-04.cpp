#include <iostream>
using namespace std;

int main( )
{
    int countDown;

    cout << "How many greetings do you want? ";
    cin >> countDown;

    // while (boolean expression) {body statements}
    // -> boolean expression이 true인 경우에 body statements를 실행
    while (countDown > 0)
    {
        cout << "Hello ";
        countDown = countDown - 1;
    }

    cout << endl;
    cout << "That's all!\n";

    return 0;
}