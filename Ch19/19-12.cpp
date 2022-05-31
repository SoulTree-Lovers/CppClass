//Program to demonstrate use of the set template class.
#include <iostream>
#include <set>
using std::cout;
using std::endl;
using std::set;

int main( )
{
    // set의 특징 : 1. 정렬, 2. 중복 X, 3. key값이 곧 value
    set<char> s;

    s.insert('A');
    s.insert('D');
    s.insert('D');
    s.insert('C');
    s.insert('C');
    s.insert('B');

    cout << "The set contains:\n";
    set<char>::const_iterator p;
    for (p = s.begin( ); p != s.end( ); p++)
    cout << *p << " ";
    cout << endl;

    cout << "Set contains 'C': ";
    if (s.find('C')==s.end( ))
	cout << " no " << endl;
    else
	cout << " yes " << endl;

    cout << "Removing C.\n";
    s.erase('C');
    for (p = s.begin( ); p != s.end( ); p++)
    cout << *p << " ";
    cout << endl;

    cout << "Set contains 'C': ";
    if (s.find('C')==s.end( ))
	cout << " no " << endl;
    else
	cout << " yes " << endl;

    return 0;
}
