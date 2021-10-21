#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

int main()
{
    cout << "아래에 한 줄을 입력하세요.(exit를 입력하면 종료합니다)" << endl;
    string str;
    do
    {
        cout << ">>";
        getline(cin, str, '\n');
        reverse(str.begin(),str.end());
        cout << str << endl;
    }while ("exit" == str);
}
