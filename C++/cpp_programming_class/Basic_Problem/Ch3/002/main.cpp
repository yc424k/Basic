#include <iostream>
#include <cstring>
#include <string>
using namespace std;

class Date
{
    int year, month, day;

public:
    Date(int, int, int);
    Date(string);
    void Show() { cout << year << "," << day << "," << day << endl; }
    int getYear() { return year; }
    int getMonth() { return month; }
    int getDay() { return day; }
};
Date::Date(int year, int month, int day)
{
    this->year = year;
    this->month = month;
    this->day = day;
}
Date::Date(string a)
{
    year = stoi(a.substr(0, 4));
    month = stoi(a.substr(5, 7));
    day = stoi(a.substr(7, 10));
}

int main()
{
    Date birth(2014, 3, 20);
    Date independenceDay("1945/8/15");
    independenceDay.Show();
    cout << birth.getYear() << "," << birth.getMonth() << "," << birth.getDay() << endl;
}