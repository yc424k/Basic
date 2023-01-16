// default 매개 변수

#include <iostream>

using namespace std;

// default 매개 변수는 앞에 선언하면 뒤에 parameter도 모두 default 매개 변수가 되어야 함
// int pow(int base = 2, int exp) // error
int pow(int base, int exp = 2) // 기본으로 2의 제곱을 구하는 함수
{
    int sum = 1;
    for (int i = 0; i < exp; i++)
    {
        sum *= base;
    }
    return sum;
}

// 선언 함수에서도 default 매개 변수를 사용할 수 있음
// int pow(int base, int exp = 2);
// int pow(int, int = 2);
// int foo();
struct Person
{
    float weight;
    float height;
};

Person p{67.5f, 175.3f};

// void foo(Person p0 = Person{70.5f, 180.3f})
void foo(Person p0 = p)
{
    cout << p0.weight << endl;
    cout << p0.height << endl;
}

void print(Person *p0 = nullptr)
{
    if (p0 == nullptr)
        cout << "invalid" << endl;
    else
    {
        cout << p0->weight << endl;
        cout << p0->height << endl;
    }
}
int main()
{
    // cout << pow(2, 10) << endl;
    // cout << foo() << endl;
    // foo();
    // foo(Person{70.5f, 180.3f});

    print();
    print(&p);
}