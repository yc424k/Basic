#include <iostream>
using namespace std;

class Circle
{
private:
    int radius;

public:
    Circle();
    Circle(int r);
    ~Circle();
    double getArea() { return 3.14 * radius * radius; }
    int getRadius() { return radius; }
    void setRadius(int radius) { this->radius = radius; }
};

Circle::Circle() : Circle(1) {}
Circle::Circle(int r) : radius(r)
{
    cout << "생성자 실행 radius = " << radius << endl;
}

Circle::~Circle()
{
    cout << "소멸자 실행 radius = " << radius << endl;
}

void increase(Circle *c)
{
    int r = c->getRadius();
    c->setRadius(r + 1);
}

int main()
{
    Circle waffle(30);
    increase(&waffle);
    cout << waffle.getRadius() << endl;
}