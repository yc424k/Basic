//소멸자 예시
#include <iostream>
using namespace std;

class Circle
{
public:
    int radius;
    Circle();
    Circle(int);
    //소멸자
    ~Circle();
    double getArea();
};

Circle::Circle() : Circle(1) {}
Circle::Circle(int r) : radius(r){
    cout << "반지름" << radius << " 원 생성" << endl;
}
Circle::~Circle(){
    cout << "반지름" << radius << " 원 소멸" << endl;
}

double Circle::getArea(){
    return 3.14*radius*radius;
}

int main(){
    Circle donut;
    Circle pizza(30);

    return 0;
}