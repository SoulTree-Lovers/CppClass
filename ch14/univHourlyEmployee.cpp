#include <string>
#include <iostream>
#include "univhourlyemployee.h"
#include "hourlyemployee.h"
#include "hourlyemployee.cpp"
#include "employee.h"
#include "employee.cpp"

using std::string;
using std::cout;
using std::endl;

namespace SavitchEmployees
{

    UnivHourlyEmployee::UnivHourlyEmployee( ) : HourlyEmployee( ), wageRate(0), hours(0)
    {
        //deliberately empty
    }

    UnivHourlyEmployee::UnivHourlyEmployee(const string&  theName, const string&  theSsn, const string& affliation ,double theWageRate, double theHours)
        : HourlyEmployee(theName, theSsn, theWageRate, theHours), univName(affliation)
    {
        //deliberately empty
    }
    
    void UnivHourlyEmployee::setRate(double newWageRate)
    {
        wageRate = newWageRate;
    }

    double UnivHourlyEmployee::getRate( ) const
    {
        return wageRate;
    }

    void UnivHourlyEmployee::setHours(double hoursWorked)
    {
        hours = hoursWorked;
    }

    double UnivHourlyEmployee::getHours( ) const
    {
        return hours;
    }
    
    string UnivHourlyEmployee::getUnivName( )
    {
        return univName;
    } 
    
    void UnivHourlyEmployee::setUnivName(string newUnivName)
    {
        univName = newUnivName;
    }
    
    void UnivHourlyEmployee::printInfo( )
    {
        setNetPay(hours * wageRate);
        cout << "Employee name:" << getName() << ", " << getUnivName() ;
        cout << "\n________________________________________________\n";
        cout << "Pay to the order of " << getName( ) << endl;
        cout << "The sum of " << getNetPay( ) << " Dollars\n";
        cout << "________________________________________________\n";
        cout << "Check Stub: NOT NEGOTIABLE\n";
        cout << "Employee Number: " << getSsn( ) << endl;
        cout << "Hourly Employee. \nHours worked: " << hours
             << " Rate: " << wageRate << " Pay: " << getNetPay( ) << endl;
        cout << "_________________________________________________\n";
    }


}//SavitchEmployees
