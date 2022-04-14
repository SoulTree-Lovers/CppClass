#include <iostream>
using namespace std;

class DayOfYear
{
public:
    int month;
    int day;
    void output();
    void adjustDay(int date);
};

int main()
{
    DayOfYear d1;
    d1.month = 8;
    d1.day = 20;

    d1.adjustDay(20);
    cout << "Adjusted date is: ";
    d1.output();
    return 0;
}

void DayOfYear::output()
{
    // member variable을 . operator 없이 사용 가능 (month, day)
    switch (month)
    {
        case 1:
            cout << "January "; break;
        case 2:
            cout << "February "; break;
        case 3:
            cout << "March "; break;
        case 4:
            cout << "April "; break;
        case 5:
            cout << "May "; break;
        case 6:
            cout << "June "; break;
        case 7:
            cout << "July "; break;
        case 8:
            cout << "August "; break;
        case 9:
            cout << "September "; break;
        case 10:
            cout << "October "; break;
        case 11:
            cout << "November "; break;
        case 12:
            cout << "December "; break;
        default:
            cout << "Error in DayOfYear::output. Contact software vendor.";
    }

    cout << day;
}

void DayOfYear::adjustDay(int date)
{
    day += date;
    switch (month)
    {
        case 1: // 1월의 전 달은 12월이므로 12월로 초기화.
            if (day > 31)
            {
                day -= 31;
                month++;
            }
            else if (day < 0)
            {
                day = 31 + day;
                month = 12;
            }

        case 2:     // 2월은 28일까지이므로 따로 계산함.
            if (day > 28)
            {
                day -= 28;
                month++;
            }
            else if (day < 0)
            {
                day = 31 + day;
                month--;
            }
            break;

        case 3: // 3월의 전 달은 2월이므로 음수일 때 28에서 빼야함.
            if (day > 31)
            {
                day -= 31;
                month++;
            }
            else if (day < 0)
            {
                day = 28 + day;
                month--;
            }
        case 8: // 8월의 전 달은 7월이므로 음수일 때 31에서 빼야함.
            if (day > 31)
            {
                day -= 31;
                month++;
            }
            else if (day < 0)
            {
                day = 31 + day;
                month--;
            } 
            break;
        case 5:
        case 7:
        case 10:    // 5, 7, 10월의 전 달은 모두 30일로 같음.
            if (day > 31)
            {
                day -= 31;
                month++;
            }
            else if (day < 0)
            {
                day = 30 + day;
                month--;
            } 
            break;
        case 4:
        case 6:
        case 9:
        case 11:    // 4, 6, 9, 11월의 전 달은 모두 31일로 같음.
            if (day > 30)
            {
                day -= 30;
                month++;
            }
            else if (day < 0)
            {
                day = 31 + day;
                month--;
            }
            break;
        case 12:    // 12월의 다음 달은 1월이므로 따로 계산함.
            if (day > 31)
            {
                day -= 31;
                month = 1;
            }
            else if (day < 0)
            {
                day = 30 + day;
                month--;
            } 
            break;
        
        default:
            cout << "Error in DayOfYear::adjustDay. Contact software vendor.";
    }
}