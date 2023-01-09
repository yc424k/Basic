// static
// 굳이 저장할 필요가 없는 데이터나 단순 연산으로 결과만 얻고 싶을 때 사용하면 좋음

#include <iostream>

using namespace std;

static class Calculator
{
public:
    int Plus(const int x, const int y) const
    {
        return x + y;
    }
} calc;

int main()
{
    cout << "1 + 2 = " << calc.Plus(1, 2) << endl;

    return 0;
}