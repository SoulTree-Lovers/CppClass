//Program to demonstrate call-by-reference parameters.
#include <iostream>
using namespace std;

void getNumbers(int& input1, int& input2);
//Reads two integers from the keyboard.

void swapValues(int& variable1, int& variable2);
//Interchanges the values of variable1 and variable2.

void showResults(int output1, int output2);
//Shows the values of variable1 and variable2, in that order.

int main( )
{
    int firstNum, secondNum;

    getNumbers(firstNum, secondNum);
    swapValues(firstNum, secondNum);
    showResults(firstNum, secondNum);
    return 0;
}

// input1, input2 : parameters
// 1. input1 : firstNum의 reference (firstNum의 별명이 input1)
// 2. input2 : secondNum의 reference (secondNum의 별명이 input2)
// getNumbers함수 내에서 input1, input2의 값이 변경되면 firstNum, secondNum의 값이 변경됨.
// -> call by reference 방식

void getNumbers(int& input1, int& input2)
{
    cout << "Enter two integers: ";
    cin >> input1
        >> input2;
}

// variable1 앞에 const라고 선언하면, swapValues 함수 내에서 variable1의 값을 변경하면 error 발생.
void swapValues(const int& variable1, const int& variable2)
{
    int temp;

    temp = variable1;
    variable1 = variable2;
    variable2 = temp;
}

void showResults(int output1, int output2)
{
    cout << "In reverse order the numbers are: "
         << output1 << " " << output2 << endl;
}
