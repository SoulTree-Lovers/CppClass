#ifndef UNIVHOURLYEMPLOYEE_H
#define UNIVHOURLYEMPLOYEE_H

#include <string>
#include "hourlyemployee.h"

using std::string;

namespace SavitchEmployees
{
    // univHourlyEmployee : child class
    class UnivHourlyEmployee : public HourlyEmployee
    {
    public:
        UnivHourlyEmployee( );
        UnivHourlyEmployee(const string&  theName, const string&  theSsn, const string& univName ,double theWageRate, double theHours);
        void setRate(double newWageRate);
        double getRate( ) const;
        void setHours(double hoursWorked);
        double getHours( ) const;
        
        void printInfo( );
        string getUnivName( );
        void setUnivName(string newUnivName);

    private:
        double wageRate;
        double hours;
        string univName;
    };

}//SavitchEmployees






#endif