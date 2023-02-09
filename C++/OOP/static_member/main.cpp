// 정적 멤버
// 멤버들 앞에 static을 붙이면 정적 멤버가 됨
// 1. 메모리가 정적 공간에 저장됨
// 2. 메모리 할달이 한번 이뤄짐
// 3. 프로그램이 종료될때 메모리가 해제됨
// 4. 정적 멤버 함수는 정적 멤버 변수만 접근이 가능함
#include <iostream>
#include "Person.h"

using namespace std;

int main() {
#if 0 // 정적 멤버 복습
    for(int i = 0; i < 10; i++)
    {
        int autoVar = 0;
        autoVar++;
        cout << "auto : " << autoVar << endl;

        static int staticVar = 0;
        staticVar++;
        cout << "static : " << staticVar << endl;
    }
#endif
    Person p0;
    Person p1;

    p0.print();
    p1.print();

    Person::print();
}
