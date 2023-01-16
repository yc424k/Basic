// 참조를 통한 전달

#include <iostream>

using namespace std;

// void swap(int *px, int* py)
// 기존 swap 함수
// 레퍼런스를 통하면 코드가 깔끔하고 사고가 간편해짐
void swap(int &px, int &py)
{
    int temp = px;
    px = py;
    py = temp;
}

void print(const int &x, const int &y)
{
    cout << x << endl;
    cout << y << endl;
    // x = y; // 변경 불가능
}

int squarev(int value)
{
    return value * value;
}

int squarer(int &ref)
{
    return ref * ref;
}

// 해당함수는 return하면 num이 메모리에서 사라지기 때문에 위험함 조심해야됨
// int &func()
// {
//     int num = 0;
//     return num;
// }

struct Weapon
{
    int price;
};
// 값을 return하는데 값 변경을 허용하고 싶지 않으면 const를 붙이면 됨
int &func(Weapon &weapon)
{
    return weapon.price;
}
int main()
{

#if 0 int x = 10;
        int y = 20;
        // swap(&x, &y); // 코드가 안이쁘고 직접적이지 않음

        swap(x, y);
        // 레퍼런스는 추상화/
        //  추상화? 구체적인것을 숨김
        //  int &px = x;
        //  int &py = y;
        //  int temp = px;;
        //  px = py;
        //  py = temp;

        cout << x << endl;
        cout << y << endl;

        print(x, y);

        int num;
        cin >> num; // >>은 레퍼런스를 사용하는걸 알 수 있음

        int arr[] = {1, 2, 3, 4};
        for (int num : arr)
        {
            num = 0;
        }
        for (int num : arr)
        {
            cout << num << endl;
        }
        // const를 붙이면 값을 못바꾸는것 같음
        // 장점 = 작은 메모리를 사용할 수 있으
        // const를 사용함으로 의도를 명확하게 알려줄수 있음(읽기만 하는 기능)
        for (int &num : arr)
        {
            num = 0;
        }
        for (int num : arr)
        {
            cout << num << endl;
        }

        // reference 관련 이야기
        // 임시 객체를 만들고 가르킴
        const int &ref0 = 1;
        float f = 1.f;
        const int &ref1 = f;

        f = 10.1f;

        // ref1의 값이 안바뀌는 이유 -> 내부적으로 f가 아니라 임시 객체를 만들고 ref1은 임시 객체를 가르킴
        cout << f << endl;
        cout << ref1 << endl;
#endif

    int x = 10;
    cout << squarev(x) << endl;
    cout << squarer(x) << endl;

    // reference는 변수가 있어야 되기 때문에 안됨
    // const를 붙이면 해결이 가능함
    // cout << squarer(10) << endl;

    Weapon weapon{10};
    func(weapon) = 20;

    cout << weapon.price << endl;
}