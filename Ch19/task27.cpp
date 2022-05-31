//Program to demonstrate use of the map template class.
#include <iostream>
#include <map>
#include <string>
#include <typeinfo>

using namespace std;
using std::cout;
using std::endl;
using std::map;
using std::string;


int main( )
{
    // map의 특징 : 1. key를 통해 정렬, 2. key: iter->first / value: iter->second 로 가져온다.
    
    map<unsigned int, string> id;

    unsigned int num;
    string name;

    
    while (true)
    {
        cout << "Enter the ID number: ";
        cin >> num;
        

        if (num == 0)
        {  
            cout << "Enter the searching ID number: ";
	        cin >> num;
            cout << "The student name is " << id[num] << endl;
            
            break;
        }
        else
        {
            cout << "Enter the student name: ";
            cin >> name;
            id[num] = name;
        }
    }
    return 0;
}
