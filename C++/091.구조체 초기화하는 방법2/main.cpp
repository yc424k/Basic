#include <iostream>

using namespace std;

struct Data1
{
    int number;
};

struct Data2
{
    Data1 data1;

    int number;
} data2;

int main()
{
    Data1 data1 = {}; //내부 변수를 모두 초기화 하겠다는 의미 0으로 초기화
    Data2 data2{data1, 10}; //순서에 맞춰서 초기화 해야함 {Data1, int}

    cout << "Data1 number : " << data2.data1.number << endl;
    cout << "Data2 number : " << data2.number << endl;

    return 0;
}

