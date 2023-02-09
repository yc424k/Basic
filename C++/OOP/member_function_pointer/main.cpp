#include <iostream>
#include <functional>
using namespace std;

class Person
{
public:
    void print(int i)
    {
        cout << i << endl;
    }

};

int main() {
    void(Person::*fn)(int) = &Person::print; // 타입(Class :: 변수명)(parameter)
    Person person; // this로 가르킬수 있도록 구체화
    (person.*fn)(1);

    typedef void(Person::*FuncType)(int);
//    using FuncType = void (Person::*)(int);
    FuncType fn1 = &Person::print;
    (person.*fn1)(1);

    function<void(Person*, int)> func = &Person::print;
    func(&person, 1);

//    void (*fn)(int) = &Person::print; // static 함수
//    fn(2);
}
