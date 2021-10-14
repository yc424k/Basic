#include <iostream>
using namespace std;

//클래스 생성
class Rectangle
{
public:
    int width;
    int height;
    int getArea();
};
//클래스 구현
int Rectangle::getArea()
{
    return width * height;
}

int main()
{
    Rectangle rect;
    rect.width = 3;
    rect.height = 5;
    cout << "사각형의 면적은 " << rect.getArea() << endl;
}