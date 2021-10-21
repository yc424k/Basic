#include <iostream>
using namespace std;

class Account
{
    int id, money;
    string name;

public:
    Account(string, int, int);
    void deposit(int money) { this->money += money; }
    int withdraw(int money)
    {
        this->money -= money;
        return this->money;
    }
    string getOwner() { return name; }
    int inquiry() { return money; }
};
Account::Account(string name, int id, int money)
{
    this->name = name;
    this->id = id;
    this->money = money;
}

int main()
{
    Account a("kitae", 1, 5000);
    a.deposit(50000);
    cout << a.getOwner() << "의 잔액은 " << a.inquiry() << endl;
    int money = a.withdraw(20000);
    cout << a.getOwner() << "의 잔액은 " << a.inquiry() << endl;
}