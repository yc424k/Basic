#pragma once
// 컴파일 할때 한번만 포함하도록 함
// #pragma once는 표준이 아니기 때문에 다른 컴파일러에서는 동작하지 않을 수 있음
// #pragma once는 #ifndef ~ #endif로 대체할 수 있음

#include <vector>

// person의 내부를 알필요가 없기 때문에 전방선언만 해도 됨
class Person;

class Village
{
private:
    std::vector<Person> persons;

public:
    void add(Person);
    // void print();
};