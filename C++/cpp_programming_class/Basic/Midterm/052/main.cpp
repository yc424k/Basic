#include <iostream>

using namespace std;

class Person
{
public:
    double money;
    void addMoney(int money)
    {
        this->money = money;
    }

    static int shareMoney;
    static void addShared(int n)
    {
        shareMoney += n;
    }
};

int Person::shareMoney = 10;

int main()
{
    Person::addShared(50);
    cout << Person::shareMoney << endl;

    Person han;
    han.money = 100;
    han.shareMoney = 200;
    Person::shareMoney = 300;
    Person::addShared(100);
`
    cout << han.money << ' ' << Person::shareMoney << endl;
}