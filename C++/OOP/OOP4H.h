#pragma once
#include <iostream>

// using namespace std; // 이름이 충돌날수 있기 때문에 사용하지 않는것이 좋음

class Person
{
private:
    float _weight;
    float _height;
    const std::string _name;
    // 객체지향에서는 내부 구조가 궁금한게 아니라 어떤 parameter와 return 값이 있는지가 중요함
    // 그래서 예시 코드처럼 분리할수 있음
public:
    Person(float weight, float height, const std::string &name);
    // 정의와 선언 분리
    //     : _weight(weight), _height(height), _name(name)
    // {
    // }
    // 정의와 선언 분리
    // 헤더파일에 선언하면 암묵적으로 inline이 됨 
    void print();
    // {
    //     std::cout << _name << std::endl;
    // }
};

void foo();