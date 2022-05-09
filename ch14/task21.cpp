#include <iostream>
#include "univhourlyemployee.h"
#include "univHourlyEmployee.cpp"

using namespace SavitchEmployees;
using namespace std;

int main()
{
    UnivHourlyEmployee john("JohnDoe", "123456", "SSU", 10, 40);
    john.printInfo();
    return 0;
}
