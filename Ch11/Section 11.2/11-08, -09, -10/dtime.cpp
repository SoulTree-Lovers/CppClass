//This is the implementation file: dtime.cpp of the class DigitalTime.
//The interface for the class DigitalTime is in the header file dtime.h.
#include <iostream>
#include <cctype>
#include <cstdlib>
using std::istream;
using std::ostream;
using std::cout;
using std::cin;
#include "dtime.h"

// namespace 다음에 이름이 없는 경우를 unnamed namespace라고 함
// 1. digitToInt() 함수 등은 DigitalTime class와 무관하게 함수로 선언됨
// 2. readMinute() 함수 등은 DigitalTime class에서 직접 사용 가능
//    -> 마치 DigitalTime class의 private으로 선언된 함수와 같은 효과를 냄
// 3. 모든 compilation unit file은 1개의 unnamed namespace를 가질 수 있음

// unnamed namespace를 사용하는 가장 큰 목적
// -> class 안에서 private function으로 사용할 함수를 unnamed namespace에 선언하여 사용하는 것을 권장
// -> 
namespace
{
    int digitToInt(char c)
    {
        return ( int(c) - int('0') );
    }

    //Uses iostream, cctype, and cstdlib:
    void readMinute(int& theMinute)
    {
        char c1, c2;
        cin >> c1 >> c2;

        if (!(isdigit(c1) && isdigit(c2)))
        {
            cout << "Error illegal input to readMinute\n";
            exit(1);
        }

        theMinute = digitToInt(c1)*10 + digitToInt(c2);

        if (theMinute < 0 || theMinute > 59)
        {
            cout << "Error illegal input to readMinute\n";
            exit(1);
        }
    }

    //Uses iostream, cctype, and cstdlib:
    void readHour(int& theHour)
    {
        char c1, c2;
        cin >> c1 >> c2;
        if ( !( isdigit(c1) && (isdigit(c2) || c2 == ':' ) ) )
        {
            cout << "Error illegal input to readHour\n";
            exit(1);
        }

        if (isdigit(c1) && c2 == ':')
        {
            theHour = digitToInt(c1);
        }
        else //(isdigit(c1) && isdigit(c2))
        {
            theHour = digitToInt(c1)*10 + digitToInt(c2);
            cin >> c2; //discard ':'
            if (c2 != ':')
            {
                cout << "Error illegal input to readHour\n";
                exit(1);
            }
        }

        if (theHour == 24)
            theHour = 0; //Standardize midnight as 0:00

        if ( theHour < 0 || theHour > 23 )
        {
            cout << "Error illegal input to readHour\n";
            exit(1);
        }
    }
} //unnamed namespace


namespace DTimeSavitch
{

    //Uses iostream:
    istream& operator >>(istream& ins, DigitalTime& theObject)
    {
        readHour(theObject.hour);
        readMinute(theObject.minute);
        return ins;
    }
 
    ostream& operator <<(ostream& outs, const DigitalTime& theObject)
    {
        outs << theObject.hour << ':';
        if (theObject.minute < 10)
            outs << '0';
        outs << theObject.minute;
        return outs;
    }
 
    bool operator ==(const DigitalTime& time1, const DigitalTime& time2)
    {
        return (time1.hour == time2.hour && time1.minute == time2.minute);
    }

    DigitalTime::DigitalTime(int theHour, int theMinute)
    {
        if (theHour < 0 || theHour > 24 || theMinute < 0 || theMinute > 59)
        {
            cout << "Illegal argument to DigitalTime constructor.";
            exit(1);
        }
        else
        {
            hour = theHour;
            minute = theMinute;
        }

        if (hour == 24)
            hour = 0; //standardize midnight as 0:00
    }

    DigitalTime::DigitalTime( )
    {
        hour = 0;
        minute = 0;
    }  

    int DigitalTime::getHour( ) const
    {
        return hour;
    }

    int DigitalTime::getMinute( ) const
    {
        return minute;
    }

    void DigitalTime::advance(int minutesAdded)
    {
        int grossMinutes = minute + minutesAdded;
        minute = grossMinutes%60;

        int hourAdjustment = grossMinutes/60;
        hour = (hour + hourAdjustment)%24;
    }

    void DigitalTime::advance(int hoursAdded, int minutesAdded)
    {
        hour = (hour + hoursAdded)%24;
        advance(minutesAdded);
    }


} //DTimeSavitch

