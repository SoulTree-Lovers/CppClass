# include <iostream>
using namespace std;


class DayOfYear
{
public:
    /* constructor overload */

    DayOfYear(int monthValue, int dayValue);
    //Initializes the month and day to arguments.
   
    DayOfYear(int monthValue);
    //Initializes the date to the first of the given month.
    
    DayOfYear(string monthValue, int dayValue);

    DayOfYear(string monthValue);

    DayOfYear( );   // default constructor
    //Initializes the date to January 1.
   
    void input( );
    void output( );
    int getMonthNumber( );
    //Returns 1 for January, 2 for February, etc.

    int getDay( );
private:
    int month;
    int day;
    void testDate( );
};

int main()
{
    string sMonth;
    int day;
    cout << "Put an abbreviation of a month (3 chars) and a day (number): ";
    cin >> sMonth >> day;

    DayOfYear date1(sMonth), date2(sMonth, day);
    
    cout << "date1: ";
    date1.output();
    
    cout << endl;

    cout << "date2: ";
    date2.output();

    return 0;
}

DayOfYear::DayOfYear(int monthValue, int dayValue) 
                          : month(monthValue), day(dayValue)
{
    // month = monthValue;
    // day = dayValue;
    testDate( );
}

DayOfYear::DayOfYear(int monthValue) : month(monthValue), day(1)
{
    // month = monthValue;
    // day = 1
    testDate( );
}

DayOfYear::DayOfYear(string monthValue, int dayValue)
{
    if (monthValue == "Jan")
        month = 1;
    else if (monthValue == "Feb")
        month = 2;
    else if (monthValue == "Mar")
        month = 3;
    else if (monthValue == "Apr")
        month = 4;
    else if (monthValue == "May")
        month = 5;
    else if (monthValue == "Jun")
        month = 6;
    else if (monthValue == "Jul")
        month = 7;
    else if (monthValue == "Aug")
        month = 8;
    else if (monthValue == "Sep")
        month = 9;
    else if (monthValue == "Oct")
        month = 10;
    else if (monthValue == "Nov")
        month = 11;
    else if (monthValue == "Dec")
        month = 12;
    else
        cout << "Error";

    day = dayValue;
    testDate();
}

DayOfYear::DayOfYear(string monthValue)
{
    if (monthValue == "Jan")
        month = 1;
    else if (monthValue == "Feb")
        month = 2;
    else if (monthValue == "Mar")
        month = 3;
    else if (monthValue == "Apr")
        month = 4;
    else if (monthValue == "May")
        month = 5;
    else if (monthValue == "Jun")
        month = 6;
    else if (monthValue == "Jul")
        month = 7;
    else if (monthValue == "Aug")
        month = 8;
    else if (monthValue == "Sep")
        month = 9;
    else if (monthValue == "Oct")
        month = 10;
    else if (monthValue == "Nov")
        month = 11;
    else if (monthValue == "Dec")
        month = 12;
    else
        cout << "Error";

    day = 1;
}

DayOfYear::DayOfYear( ) : month(1), day(1)
{/*Body intentionally empty.*/}

//uses iostream and cstdlib:
void DayOfYear::testDate( )
{
    if ((month < 1) || (month > 12))
    {
        cout << "Illegal month value!\n";
        exit(1);
    }
    if ((day < 1) || (day > 31))
    {
        cout << "Illegal day value!\n";
        exit(1);
    }
}

int DayOfYear::getMonthNumber( )
{
    return month;
}

int DayOfYear::getDay( )
{
    return day;
}

//Uses iostream and cstdlib:
void DayOfYear::input( )
{
    cout << "Enter the month as a number: ";
    cin >> month;
    cout << "Enter the day of the month: ";
    cin >> day;
    if ((month < 1) || (month > 12) || (day < 1) || (day > 31))
    {
        cout << "Illegal date! Program aborted.\n";
        exit(1);
    }
}

void DayOfYear::output( )
{
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