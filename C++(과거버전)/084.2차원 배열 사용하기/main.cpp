#include <iostream>

using namespace std;

int main()
{
    int data1[2][2] = {1,2,3}; // 1 2 3 0으로 초기화
    int data2[2][3] = {{1,}}; // 1 1 1 0 0 0으로 초기화

    for (auto i : data1)
        cout << i << endl;

    for (auto i : data2)
        cout << i << endl;

    return 0;
}