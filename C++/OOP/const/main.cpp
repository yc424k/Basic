#include <iostream>

using namespace std;

class Person
{
#if 0 // 기존에 알고 있던 const
private:
    const string _name; // = "abs" 선언할때 초기화
public:
    Person(const string& name) : _name(name) // 멤버 초기화 리스트
    {
//        _name = name; // const이기 때문에 변경 불가능
    }
#endif
private:
    const string _name;
    float _weight;
    float _height;
public:
    Person(const string& name, float weight, float height)
        : _name(name), _weight(weight), _height(height)
    {
    }
    float getWeight(/*const Person* this*/) const
    {
//        _weight = 10; // this->weight = 10;
        return _weight;
    }
};




int main() {
    Person person("David", 75.f, 181.f);
    cout << person.getWeight() << endl;

    const Person person1("John", 70.f, 170.f);
    cout << person1.getWeight() << endl;

}
