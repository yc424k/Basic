#include <iostream>
using namespace std;

class Circle
{
    int radius;

public:
    Circle();
    Circle(int r);
    ~Circle();
    void setradius(int r) { radius = r; }
    double getArea() { return 3.14 * radius * radius; }
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

int main()
{
    Circle *pArray = new Circle[3];

    pArray[0].setradius(10);
    pArray[1].setradius(20);
    pArray[2].setradius(30);

    for (int i = 0; i < 3; i++)
    {
        cout << pArray[i].getArea() << endl;
    }

    Circle *p = pArray;
    for (int i = 0; i < 3; i++)
    {
        cout << p->getArea() << endl;
        p++;
    }
    delete[] pArray;
}