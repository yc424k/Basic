#include <iostream>
using namespace std;

int main()
{
    cout << "에스프레소 2000원, 아메리카노 2300원, 카푸치노 2500원입니다." << endl;
    int sum = 0;
    while (sum < 20000)
    {
        cout << "주문>>";

        char coffee[100];
        int num;

        cin >> coffee >> num;
        if (strcmp(coffee, "에스프레소") == 0)
            sum += 2000 * num;
        if (strcmp(coffee, "아메리카노") == 0)
            sum += 2300 * num;
        if (strcmp(coffee, "카푸치노") == 0)
            sum += 2500 * num;
    }
    cout << "오늘 " << sum << "원을 판매하여 카페를 닫습니다. 내일 봐요~~" << endl;
}