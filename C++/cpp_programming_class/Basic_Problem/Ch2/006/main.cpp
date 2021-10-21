#include <iostream>
using namespace std;

int main(){
    cout << "새 암호를 입력하세요>>";
    string str1;
    cin >> str1;
    cout << "새 암호를 다시 한 번 입력하세요>>";
    string str2;
    cin >> str2;
    
    str1 == str2 ? cout << "같습니다" << endl : cout << "같지 않습니다." << endl;
}