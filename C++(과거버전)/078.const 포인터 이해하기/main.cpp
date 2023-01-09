#include <iostream>

using namespace std;

int main()
{
    int number1 = 10;
    int number2 = 20;

    // 가리키는 값을 직접 못바꿈 주소로 바꾸면 됨
    int const *ptr1;
    ptr1 = &number1;
    cout << ptr1 << " " << *ptr1 << endl;

    ptr1 = &number2;
    cout << ptr1 << " "<< *ptr1 << endl;


    // 가리키는 주소를 못바꿈
    int *const ptr2 = &number1;
    *ptr2 = number2;

    return 0;
}