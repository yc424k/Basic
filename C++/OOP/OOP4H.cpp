#include "OOP4H.h"

Person::Person(float weight, float height, const std::string &name)
    : _weight(_weight), _height(height), _name(name)
{
}

void Person::print()
{
    using namespace std;
    cout << _name << endl;
}

// 함수의 정의 분리
void foo()
{
    Person p(60.f, 160.f, "P2");
    p.print();
}
