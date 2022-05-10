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
    
        void printInfo( );
        string getUnivName( );
        void setUnivName(string newUnivName);

    private:
        string univName;
    };

}//SavitchEmployees

#endif