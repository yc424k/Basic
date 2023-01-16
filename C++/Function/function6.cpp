// 함수 오버로딩
// 함수 오버로딩이랑 같은 이름을 가지고 있지만 parameter의 개수와 type이 다른 함수를 만들수 있고
// 알아서 맞는 함수를 바인딩 해줌
// return type이 다르면 오버로딩이 안됨
#include <iostream>

using namespace std;

int countDigit(int num)
{
    if (num == 0)
        return 1;

    int count = 0;
    while (num)
    {
        num /= 10;
        count++;
    }

    return count;
}

int countDigitStr(string num)
{
    return countDigit(stoi(num));
}
int countDigit(string num)
{
    return countDigit(stoi(num));
}

int main()
{
    cout << countDigit(12345) << endl;
    // 같은 기능을 함수인데 다른 이름을 하고 있음
    cout << countDigitStr("12345") << endl;
    cout << countDigit("123456") << endl;

    // 함수 오버로딩 사용되는 예제
    cout << "a" << endl;
    cout << (int)"a" << endl;
}