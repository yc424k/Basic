#include <iostream>
using namespace std;

int main(void){
    cout << "첫 번째 수 : ";
    int a;
    cin >> a;
    cout << "두 번째 수 : ";
    int b;
    cin >> b;

    int sum = 0;
    for(int i = a; i <= b ; i++)
        sum += i;
    
    cout <<"1에서 10까지 더한 결과는 "<<sum<<"입니다."<<endl;

}