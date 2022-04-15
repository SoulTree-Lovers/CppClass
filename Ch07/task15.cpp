#include <iostream>
using namespace std;


static int totalSoldNum;

class HotDogStand
{
public:
    HotDogStand(string nameValue);
    HotDogStand();

    void justSold(int sales);
    int getNumSold();
    string getName();
    
    static int getTotalNumSold();
    
private:
    string name;
    int soldNum;
};

int main()
{
    HotDogStand h1("SSU-1"), h2("SSU-2"), h3("CAU-1");

    h1.justSold(20);
    h2.justSold(50);
    h3.justSold(1);

    cout << h1.getName() << " has sold " << h1.getNumSold() << " hotdogs." << endl;
    cout << h2.getName() << " has sold " << h2.getNumSold() << " hotdogs." << endl;
    cout << h3.getName() << " has sold " << h3.getNumSold() << " hotdogs." << endl;
    cout << "Total sales are: " << HotDogStand::getTotalNumSold() << endl;

    return 0;
}


HotDogStand::HotDogStand(string nameValue)
{
    name = nameValue;
    soldNum = 0;
}

HotDogStand::HotDogStand()
{
    name = "";
    soldNum = 0;
}

void HotDogStand::justSold(int sales)
{
    soldNum += sales;
    totalSoldNum += sales;
}

int HotDogStand::getNumSold()
{
    return soldNum;
}

string HotDogStand::getName()
{
    return name;
}

int HotDogStand::getTotalNumSold()
{
    return totalSoldNum;
}