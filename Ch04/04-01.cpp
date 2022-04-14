//Law office billing program.
#include <iostream>
using namespace std;

const double RATE = 150.00; //Dollars per quarter hour.

double fee(int hoursWorked, int minutesWorked);
//Returns the charges for hoursWorked hours and
//minutesWorked minutes of legal services.

int main( )
{
    int hours, minutes;
    double bill;

    cout << "Welcome to the law office of\n"
         << "Dewey, Cheatham, and Howe.\n"
         << "The law office with a heart.\n"
         << "Enter the hours and minutes"
         << " of your consultation:\n";
    cin >> hours >> minutes;

    // hours, minutes : (actual) arguments
    bill = fee(hours, minutes);

    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    cout << "For " << hours << " hours and " << minutes
         << " minutes, your bill is $" << bill << endl;

    return 0;
}

// hoursWorked, minutesWorked : parameters
// 1. hoursWorked : hours의 값인 5를 입력받아 메모리에 새로 생성된 변수
// 2. minutesWorked : minutes의 값인 20을 입력받아 메모리에 새로 생성된 변수
// -> call by value 방식. (arguments에 값을 parameter 변수에 copy하는 방식)
// 쉽게 말하자면 값만 복사하는 방식
double fee(int hoursWorked, int minutesWorked)
{
    int quarterHours;
//  hoursWorked = 10; -> error 발생, 이유 : parameter 변수명과 동일하기 때문
    minutesWorked = hoursWorked*60 + minutesWorked;
    quarterHours = minutesWorked/15;
    return (quarterHours*RATE);
}
