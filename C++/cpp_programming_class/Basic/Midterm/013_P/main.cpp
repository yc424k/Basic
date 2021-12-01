#include <iostream>
using namespace std;

class Rectangle{
int weight;
int height;

public:
    Rectangle();
    Rectangle(int );
    Rectangle(int, int);
    int isSquare();
};

Rectangle::Rectangle() : Rectangle(0,0) {}
Rectangle::Rectangle(int a) : Rectangle(a, a) {}
Rectangle::Rectangle(int a, int b) : weight(a), height(b){}
int Rectangle::isSquare(){
    return (weight == height) ? 1 : 0;
}

int main(){
    Rectangle rect1;
    Rectangle rect2(3, 5);
    Rectangle rect3(3);

    if(rect1.isSquare()) cout << "rect1은 정사각형이다." << endl;
    if(rect2.isSquare()) cout << "rect2은 정사각형이다." << endl;
    if(rect3.isSquare()) cout << "rect3은 정사각형이다." << endl;
}
