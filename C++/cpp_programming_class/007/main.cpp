#include <iostream>
#include <string> //string 클래스를 사용하기 위한 헤더파일
using namespace std;

int main()
{
    string song("Falling in love with you");
    string elvis("Elvis Presley");
    string singer;

    cout << song + "를 부른 가수는"; // +로 문자열을 연결 가능
    cout << "(힌트 : 첫글자는 " << elvis[0] << "?";

    getline(cin, singer);
    if (singer == elvis)
        cout << "맞았습니다.";
    else
        cout << "틀렸습니다." + elvis + "입니다." << endl;
}