#include <iostream>
#include <cstdlib>
using namespace std;

int main( )
{
    int month, day;
    cout << "Welcome to your friendly weather program.\n"
         << "Enter today's date as two integers for the month and the day:\n";
    cin >> month;
    cin >> day;
    srand(month*day);   // month*day 값이 seed임. 
                        // srand() : seed값에 따라서 pseudo random number sequence를 생성함.
                        // rand() : seed가 없고, 하나의 pseudo random number sequence를 생성함.
                        // time() : 현재 시간을 가져온다. (초 단위로 계산한 정수값을 return, 1970년 1월 1일 0시 0분 0초를 기준으로 현재까지 걸린 초)
                        // srand(time()) : seed값을 현재 시간으로 설정하여 항상 다른 pseudo random number sequence를 생성 (진정한 의미의 random)
    int prediction;
    char ans;
    cout << "Weather for today:\n";
    do
    {
        prediction = rand();
        cout << "prediction random number : " << prediction << endl;
        prediction %= 3;
        switch (prediction)
        {
            case 0:
                cout << "The day will be sunny!!\n";
                break;
            case 1:
                cout << "The day will be cloudy.\n";
                break;
            case 2:
                cout << "The day will be stormy!.\n";
                break;
            default:
                cout << "Weather program is not functioning properly.\n";
        }
        cout << "Want the weather for the next day?(y/n): ";
        cin >> ans;
    }while (ans == 'y' || ans == 'Y');
    cout << "That's it from your 24 hour weather program.\n";
    return 0;
}
