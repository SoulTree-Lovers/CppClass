//Program to demonstrate use of the stack template class from the STL.
#include <iostream>
#include <stack>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::stack;
using std::vector;

int main( )
{   
    // default인 deque class를 기반으로 사용
    stack<char> s;
    // vector class를 기반으로 사용
    stack<char, vector<char>> s1;


    cout << "Enter a line of text:\n";
    char next;
    cin.get(next);
    while (next != '\n')
    {
        s.push(next);
        cin.get(next);
    }

    cout << "Written backward that is:\n";
    while ( ! s.empty( ) )
    {
        cout << s.top( );
        s.pop( );
    }
    cout << endl;

    return 0;
}
