//출력 결과:
// Hello
// 첫 번째 맛보기입니다.


#include <iostream> // 전처리기에게 내리는 지시
using namespace std;

//C++ 프로그램의 실행을 시작하는 함수
int main() //void main() 표준 X
{
    cout << "Hello\n";
    //cout '객체' 스크린 출력 장치에 연결된 표준 C++ 출력 스트림 객체
    //<<연산자 ostream 클래스에 구현됨
    //\n or endl 다음줄로 넘어가기 위한 조작자
    cout << "첫 번째 맛보기입니다.";
    return 0; //return 문 생략가능
}