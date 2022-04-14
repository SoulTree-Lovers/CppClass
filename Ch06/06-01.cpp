//Program to demonstrate the CDAccountV1 structure type.
#include <iostream>
using namespace std;

//Structure for a bank certificate of deposit:
struct CDAccountV1
{
    // member variable (멤버 변수)
    double balance;         // 통장 예금 잔액 
    double interestRate;    // 연 이자율
    int term;               // months until maturity
};

void getData(CDAccountV1& theAccount); // function declaration (call by reference)
//Postcondition: theAccount.balance, theAccount.interestRate, and 
//theAccount.term have been given values that the user entered at the keyboard.

int main( )
{
    CDAccountV1 account;
    getData(account);

    double rateFraction, interest;
    rateFraction = account.interestRate/100.0;
    interest = account.balance*(rateFraction*(account.term/12.0));
    account.balance = account.balance + interest;

    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    cout << "When your CD matures in " 
         << account.term << " months,\n"
         << "it will have a balance of $" 
         << account.balance << endl;

    return 0;
}

//Uses iostream:
void getData(CDAccountV1& theAccount)
{
    cout << "Enter account balance: $";
    cin >> theAccount.balance;
    cout << "Enter account interest rate: ";
    cin >> theAccount.interestRate;
    cout << "Enter the number of months until maturity: ";
    cin >> theAccount.term;
}
