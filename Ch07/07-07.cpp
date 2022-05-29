#include <iostream>
#include <vector>
using namespace std;

int main( )
{
    // vector<int> : 원소의 data type이 int형
    vector<int> v;
    cout << "Enter a list of positive numbers.\n"
         << "Place a negative number at the end.\n";

    int next;
    cin >> next;
    while (next > 0)
    {
        // push_back() : vector class의 멤버 함수 (원소 추가할 때 사용)
        v.push_back(next);
        cout << next << " added. ";

        // size() : vector class의 멤버 함수 (vector 안에 들어 있는 전체 원소 갯수)
        cout << "v.size( ) = " << v.size( ) << endl;
        cin >> next;
    }

    cout << "You entered:\n";
    for (unsigned int i = 0; i < v.size( ); i++)
        cout << v[i] << "\n";
        cout << "v.size( ):\n" << v.size( ) << endl;
    cout << endl;

    return 0;
}