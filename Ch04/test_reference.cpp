#include <iostream>
using namespace std;

int main()
{
    int robert = 23;
    // bob은 robert의 별명(alias)
    int& bob = robert; // reference(, alias), bob은 robert의 별칭(별명)

    cout << "robert : " << robert << endl;

    bob = 25;
    cout << "bob : " << bob << endl;
    cout << "robert : " << robert << endl;

    robert = 28;
    cout << "bob : " << bob << endl;
    cout << "robert : " << robert << endl;

    return 0;
}