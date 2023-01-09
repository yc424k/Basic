#include <iostream>

using namespace std;

// 함수 호출이 빈번할 때 사용
inline int Max(int x, int y)
{
    return x > y ? x : y;
}

int main()
{
    for (int i = 0; i < 5; i++)
        cout << Max(i, i + 10) << endl;

    return 0;
}