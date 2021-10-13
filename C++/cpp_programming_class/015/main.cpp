//객체의 생성 및 소멸
//출력 결과:
// 반지름1000 원 생성
// 반지름2000 원 생성
// 반지름1 원 생성
// 반지름30 원 생성
// 반지름100 원 생성
// 반지름200 원 생성
// 반지름200 원 소멸
// 반지름100 원 소멸
// 반지름30 원 소멸
// 반지름1 원 소멸
// 반지름2000 원 소멸
// 반지름1000 원 소멸

#include <iostream>
using namespace std;

class Circle
{
public:
    int radius;
    Circle();
    Circle(int);
    ~Circle();
    double getArea();
};

Circle::Circle() : Circle(1) {}
Circle::Circle(int r) : radius(r){
    cout<<"반지름"<<radius<<" 원 생성" << endl;
}
Circle::~Circle(){
    cout << "반지름" <<radius << " 원 소멸" << endl;
}

double Circle::getArea(){
    return 3.14 * radius * radius;
}

Circle globalDonut(1000);
Circle globalPizza(2000);

void f(){
    Circle fDonut(100);
    Circle fPizza(200);
}

int main(){
    Circle mainDonut;
    Circle mainpizza(30);
    f();
}