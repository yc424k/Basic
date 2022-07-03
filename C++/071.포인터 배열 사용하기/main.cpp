#include <iostream>

using namespace std;

int main()
{
    const int kSize = 3;
    
    int numbers[kSize] = {10,20,30};
    int *pointer1 = numbers;

    int no1 = 1;
    int no2 = 2;
    int no3 = 3;

    int *pointer2[kSize] = {&no1 , &no2, &no3};

    // numbers의 주소를 통해 number의 값에 접근함
    cout << " == Pointer1 == " << endl; 
    for (int i = 0; i < kSize; i++)
        cout << *(pointer1 + i) << endl;
    
    // 변수의 주소를 이미 저장한 상태
    cout << " == Pointer2 == " << endl;
    for (int i = 0; i < kSize; i++)
        cout << *pointer2[i] << endl;
}