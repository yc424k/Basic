// 함수 inline

#include <iostream>

using namespace std;

// inline int squre(int x);
// 프로토 타입을 inline 해줘도 됨
// 프로토 타입을 inline화는 잘 안함
// inline을 선언해줘도 컴파일러가 inline을 할지 안할지 결정함
// 전처리를 사용한 inline 과거 코드는 아래처럼 적혀 있음
// #define squre(x) x * x
inline int squre(int x)
{
    return x * x;
}

int main()
{
    // inline시 컴파일은
    // int x = squre(5);를
    // int x = 5 * 5;로 바꿔줌
}