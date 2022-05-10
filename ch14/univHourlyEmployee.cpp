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

    UnivHourlyEmployee::UnivHourlyEmployee( ) : HourlyEmployee( ) , univName("None")
    {
        //deliberately empty
    }

    UnivHourlyEmployee::UnivHourlyEmployee(const string&  theName, const string&  theSsn, const string& affliation ,double theWageRate, double theHours)
        : HourlyEmployee(theName, theSsn, theWageRate, theHours), univName(affliation)
    {
        //deliberately empty
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
        setNetPay(getHours() * getRate());

        cout << "Employee name:" << getName() << ", " << getUnivName() ;
        cout << "\n-----------------------------------------------\n";
        cout << "Pay to the order of " << getName( ) << endl;
        cout << "The sum of " << getNetPay( ) << " Dollars\n";
        cout << "-----------------------------------------------\n";
        cout << "Check Stub: NOT NEGOTIABLE\n";
        cout << "Employee Number: " << getSsn( ) << endl;
        cout << "Hourly Employee. \nHours worked: " << getHours()
             << " Rate: " << getRate() << " Pay: " << getNetPay( ) << endl;
        cout << "-----------------------------------------------\n";
    }


}//SavitchEmployees
