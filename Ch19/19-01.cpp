//Program to demonstrate STL iterators.
#include <iostream>
#include <vector>
using std::cout;
using std::endl;
using std::vector;
// using std::vector<int>::iterator; -> 컴파일러에 따라 에러 발생 가능

// class Myclass{
//     public:
// }


int main( )
{
    // vector<Myclass> container; 가능
    vector<int> container;

    for (int i = 1; i <= 4; i++)
        container.push_back(i);

    for (unsigned int i = 0; i < container.size(); i++)
    {
        cout << container[i] << " ";
    }

    cout << endl;

    cout << "Here is what is in the container:\n";

    // iterator : vector class의 public으로 선언된 member variable
    vector<int>::iterator p;
    for (p = container.begin( ); p != container.end( ); p++)
        cout << *p << " ";
    cout << endl;

    // reverse iterator (이렇게 해야함)
    vector<int>::reverse_iterator r;
    cout << "reverse_iterator: ";
    for (r = container.rbegin(); r != container.rend(); r++)
        cout << *r << " ";
    cout << endl;


    // reverse iterator (이렇게 하면 안된다 함. 근데 왜?)
    // for (p = container.end()-1; p != container.begin()-1; p--)
    // {
    //     cout << *p << " ";
    // }
    // cout << endl;

    
    cout << "Setting entries to 0:\n";
    for (p = container.begin( ); p != container.end( ); p++)
        *p = 0;
    cout << "Container now contains:\n";
 
    for (p = container.begin( ); p != container.end( ); p++)
        cout << *p << " ";
    cout << endl;

    // for (p = container.end()-1; p != container.begin()-1; p--)
    // {
    //     cout << *p << " ";
    // }
    // cout << endl;

    return 0;
}
