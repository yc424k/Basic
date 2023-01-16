// 값을 전달하는 함수
// 단점 매우 큰 변수를 전달할때 오버헤드가 발생 할 수 있음
// 장점
#include <iostream>

using namespace std;

void swap(int px, int py)
{
    cout << "px addr : " << &px << endl;
    cout << "py addr : " << &py << endl;
    int temp = px;
    px = py;
    py = temp;
}

struct Weapon
{
    int price;
    int power;
};

void upgrade(Weapon weapon)
{
    weapon.power += 10;
    weapon.price += 10;
}

int main()
{
    int x = 10;
    int y = 20;

    cout << "x : " << x << endl;
    cout << "y : " << y << endl;

    // cout << "x addr : " << &x << endl;
    // cout << "y addr : " << &y << endl;

    // int temp = x;
    // x = y;
    // y = temp;
    swap(x, y);

    // cout << "x addr : " << &x << endl;
    // cout << "y addr : " << &y << endl;

    cout << "x : " << x << endl;
    cout << "y : " << y << endl;

    Weapon weapon{10, 20};
    cout << "Price : " << weapon.price << endl;
    cout << "Power : " << weapon.power << endl;

    upgrade(weapon);

    cout << "Price : " << weapon.price << endl;
    cout << "Power : " << weapon.power << endl;
}