#include <iostream>
#include <string>
#pragma warning(disable : 4996)

using namespace std;

int main()
{
    // C++ Style과 C Style의 문자열 차이
    // C++ Style은 문자열이 어떻게 구현되어 있는지 안보임
    // C Style은 문자열이 어떻게 구현되어 있는지 보임

    // C++ Style
    // 잘 짜여진 객체지향 코드는 영어 문장처럼 보임
    string s0 = "Hello";
    string s1 = " World";
    // append는 s0객체의 함수
    s0.append(s1);
    // s0 += s1; 이렇게도 가능
    cout << s0 << endl;

    // C Style
    char s2[100] = "Hello";
    char s3[] = " World";
    // s2에 문자열을 붙이기 위해서는 문자열 크기를 신경써야함
    // C++ style은 신경쓸 필요가 없음 -> 코드를 깔끔하고 가독성 있게 만들어줌
    strcat(s2, s3);
    cout << s2 << endl;
}