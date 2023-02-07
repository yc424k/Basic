// 선언과 정의의 분리 및 전방선언
#include <iostream>
#include "OOP4H.h" // 유저 정의 헤더파일이라 ""을 사용함
using namespace std;
// 선언은 2가지가 있음 정의가 포함된 선언과 정의가 포함되어 있지 않음선언
// 정의가 포함되어 있지 않은 선언 -> 함수 프로토 타입
// 정의가 포함된 선언 -> 함수 정의

// 정의를 포함한 선언
// c++에는 one definition rule이 있기 때문에 여러번 정의하면 안됨
// 예외가 있는데 intline함수나 template함수 여러번 정의가 가능함
// 지금 같은 경우 다른 파일이기 떄문에 가능함
// 하지만 class 내용이 같아야됨

#if 0 // 헤더 파일 만들면서 사용안함
class Person
{
private:
    float _weight;
    float _height;
    const string _name;

public:
    Person(float weight, float height, const string &name)
        : _weight(weight), _height(height), _name(name)
    {
    }

    void print()
    {
        cout << _name << endl;
    }
};
#endif

int main()
{
    Person person(70.0f, 180.0f, "P1");
    person.print();
    foo();
}