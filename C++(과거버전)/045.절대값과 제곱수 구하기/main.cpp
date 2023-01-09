#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    cout << "==절대값 구하기" << endl;
    cout <<"-10의 절대값 : " <<abs(-10) << endl;
    cout << "-5.72의 절대값 : " <<fabs(5.72) << endl; // c++은 실수 절대값도 abs로 구할수 있음

    cout << "==제곱수 수하기==" << endl;
    cout << "2의2승 : " << pow(2,2) << endl;

    return 0; 
}