//출력 결과:
// 이름을 입력하세요>>
// Input >> Blue
// 이름은 Blue입니다

// 이름을 입력하세요>>
// Input >> B lue
// 이름은 B입니다 
//cin 함수는 빈 칸을 만나면 문자열 입력을 종료함

#include <iostream>
using namespace std;

int main()
{
    cout << "이름을 입력하세요>>";

    char name[11]; //한글은 5글자 영문은 10글자까지 저장가능
    cin >> name;

    cout << "이름은 " << name << "입니다\n";
    return 0;
}