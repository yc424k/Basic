// 함수 기초

#include <iostream>

using namespace std;

// 함수안에 함수를 사용하기 위해서는 맨위에 프로토 타입을 선언해야함, 또는 해당 함수가 위에 선언 되어 있으면 됨
int cabs(int);

int abssum(int x, int y)
{
    return cabs(x) + cabs(y);
}

int sum(int x, int y)
{
    return x + y;
}
int cabs(int x)
{
    // return x >= 0 ? x : -x; // 조건이 True면 앞에 값을 반환 False면 뒤에 값을 반환
    if (x >= 0)
        return x;
    else
        return -x;
}
// return 을 사용해 함수를 중간에 끊을 수 있음
void print0(int x, int y)
{
    cout << x << endl;
    if (y < 0)
        return;
    cout << y << endl;
}
// parameter가 없는 함수도 만들 수 있음
void print1()
{
    cout << "Hello World!" << endl;
}

int main()
{
    cout << sum(5, 10) << endl;
    cout << cabs(-10) << ' ' << cabs(10) << endl;
    print0(10, -20);
    print1();

    cout << abssum(10, -20) << endl;
}