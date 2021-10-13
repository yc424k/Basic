//멤버변수의 초기화와 위임 생성자 활용
#include <iostream>
using namespace std;

class Point
{
    int x, y;

public:
    Point();
    Point(int, int);
    void show()
    {
        cout << "(" << x << ", " << y << ")" << endl;
    }
};
Point::Point() : Point(0, 0) {} //위임 생성자
Point::Point(int a, int b) : x(a), y(b) {} // 타겟 생성자
int main()
{
    Point origin;
    Point target(10, 20);
    origin.show();
    target.show();
}