// 생성자
#include <iostream>
#include <string>
using namespace std;

class Player
{
private:
    int _health;
    int _power;
    const string _name;

public:
// 생성자는 오버로딩이 가능함
#if 1
    // Player() = delete; // default 생성자를 못쓰게 하는 방법
    Player() : Player(100, 50, "noname")
    {
        // _health = 100;
        // _power = 50;
        // cout << "Player " << _health << ", " << _power << endl;
    }
    Player(int health, int power, string name)
        : _health(health), _power(power), _name(name) // 초기화 하는 방법, 초기화 순서는 위치를 바꿔도 선언된 순서로 초기화 됨
    {
        // _health = health;
        // _power = power;
        // _name = name;// 초기화를 하는게 아니라 대입을 하는 거임, 상수라서 값을 대입할 수 없음
        cout << "Player " << _name << ", " << _health << ", " << _power << endl;
    };
#endif

#if 0
// 의도치 않은 방식으로 사용될 수 있음 //001 코드 참조
    Player(int health = 100, int power = 50)
    {
        _health = health;
        _power = power;
        cout << "Player " << _health << ", " << _power << endl;
    }
#endif

    void print()
    {
        cout << _name << ":" << _health << ":" << _power << endl;
    }
};

int main()
{
    // Player player0(200, 10);
    // Player player1 = Player(300, 150);
    // Player *player2 = new Player(400, 200);

    // parameter가 없는 생성자는 default 생성자라고 함
    Player player3;
    Player player4 = Player();
    Player *player5 = new Player();
    player3.print();
    // 001
    // 체력만 초기화하는 의도치 않은 상황
    // Player player6(100);
}