//입출력 결과:
// 주소를 입력하세요>>
// Input >> 서울특별시 용산구
// 주소는 서특별시 용산구입니다


#include <iostream>
using namespace std;
int main(){
    cout << "주소를 입력하세요>>";

    char address[100];
    cin.getline(address, 100, '\n');
    //공백이 있는 문자열도 입력 받을 수 있다.
    //cin.getline(char buff[], int size, char delimitChar)
    //buf에 최대 size-1개의 문자 입력. 끝에 '\0'을 붙임
    //delimitChar를 만나면 입력 중단. 끝에 '\0'을 붙임
    //*delimitChar의 default 값은 '\n'(Enter)

    cout << "주소는 " << address << "입니다\n";
}