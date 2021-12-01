#include <iostream>
using namespace std;

class Circle
{
private:
    int radius;

public:
    Circle() { radius = 1; }
    Circle(int radius) { this->radius = radius; }
    void setRadius(int radius) { this->radius = radius; }
    double getArea() { return 3.14 * radius * radius; }
};

void readRadius(Circle &c)
{
    int r;
    cout << "정수 값으로 반지름을 입력하세요>>";
    cin >> r;
    c.setRadius(r);
}

int main()
{
    Circle donut;
    readRadius(donut);
    cout << "donut의 면적 = " << donut.getArea() << endl;
}