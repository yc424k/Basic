#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str;
    string address("서울시 성북구 삼선동 389");
    //address의 문자열을 복사한 스트링 객체
    string copyAddress(address);

    char text[] = {'L', 'o', 'v', 'e', ' ', 'c', '+', '+', '\0'};
    string title(text);

    cout << str << endl;
    cout << address << endl;
    cout << copyAddress << endl;
    cout << title << endl;
}