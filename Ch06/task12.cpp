#include <iostream>
using namespace std;

struct CDAccountV1
{
    double balance;         // 통장 예금 잔액
    double interestRate;    // 연 이자율
    int term;//months until maturity
};

void swapStruct(CDAccountV1&, CDAccountV1&);

int main()
{
    struct CDAccountV1 v1 = {10.0, 0.01, 60};
    struct CDAccountV1 v2 = {50.0, 0.02, 30};

    swapStruct(v1, v2);

    cout << "balance: " << v1.balance << " | interest: " << v1.interestRate << " | terms: " << v1.term << endl;
    cout << "balance: " << v2.balance << " | interest: " << v2.interestRate << " | terms: " << v2.term << endl;
    
    return 0;
}

void swapStruct(CDAccountV1& a, CDAccountV1& b)
{
    CDAccountV1 c;
    c = a;
    a = b;
    b = c;
    /*
    c.balance = a.balance;
    c.interestRate = a.interestRate;
    c.term = a.term;
    
    a.balance = b.balance;
    a.interestRate = b.interestRate;
    a.term = b.term;

    b.balance = c.balance;
    b.interestRate = c.interestRate;
    b.term = c.term;
    */
}