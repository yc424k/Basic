#include "OOP4H.h"

using namespace std;
#if 0
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
void foo()
{
    Person p(50.f, 180.f, "P2");
    p.print();
}