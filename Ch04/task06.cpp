#include <iostream>
using namespace std;

void fillArray(int*, int);
void printArray(int*, int);

int main()
{
    int arr[5];

    fillArray(arr, 5);
    printArray(arr, 5);

    return 0;
}

void fillArray(int* arr, int num)
{
    cout << "Put array elements : ";
 
    for (int i=0; i<num; i++)
    {
        cin >> arr[i];
    }
}

void printArray(int* arr, int num)
{
    cout << "Array elements are ";
    for (int i=0; i<num; i++)
    {
        cout << arr[i] << " ";
    }
}