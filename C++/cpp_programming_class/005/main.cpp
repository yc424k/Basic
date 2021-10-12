//입출력 결과:
// 암호>>
// Input >>
// 암호가 틀립니다~~
// 암호>>
// Input >> C
// 암호가 틀립니다~~
// 암호>>
// Input >> C++
// 프로그램을 정상 종료합니다.
#include <iostream>
#include <cstring> // strcmp()함수를 사용하기 위한 헤더 파일
using namespace std;

int main()
{
    char password[11];
    cout << "프로그램을 종료하려면 암호를 입력하세요." << endl;
    while (true)
    {
        cout << "암호>>";
        cin >> password;
        //strcmp() 문자열을 비교하는 함수 참이면 0을 출력한다.
        if (strcmp(password, "C++") == 0)
        {
            cout << "프로그램을 정상 종료합니다." << endl;
            break;
        }
        else
            cout << "암호가 틀립니다~~" << endl;
    }
}