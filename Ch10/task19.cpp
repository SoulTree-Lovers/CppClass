#include <iostream>
using namespace std;

typedef int* intPtr;

int* allocArray(int size);
void* printArray(int arr[], int size);
void freeArray(int arr[]);


int main()
{
    int* arr;
    int size;
    
    cout << "Enter the array size: ";
    cin >> size;
    
    arr = allocArray(size);

    for (int i=0; i<size; i++)
    {
        cout << "Put an array element: ";
        cin >> arr[i];
    }

    printArray(arr, size);
    freeArray(arr);
    
    return 0;
}

int* allocArray(int size)
{
    intPtr arr1 = new int[size];
    return arr1;
}

void* printArray(int arr[], int size)
{
    for (int i=0; i<size; i++)
    {
        cout << arr[i] << " ";
    }
}

void freeArray(int arr[])
{
    delete[] arr;
}
