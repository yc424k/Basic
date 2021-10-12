// //출력 내용:
// #5.5-3hello1
// 면적은28.26

#include <iostream>
using namespace std;
//함수의 원형 선언
double area(int);
double area(int r){
    return 3.14 * r *r;
}

int main(){
    int n = 3;
    char c = '#';
    cout << c << 5.5 << '-' << n << "hello" << true << endl;
    // c에는 '#'이 대입 true는 1이라는걸 알 수 있다.
    cout << "면적은" << area(n);
    //area함수에 3을 전달
}