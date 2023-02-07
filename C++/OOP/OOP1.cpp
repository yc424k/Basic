// 클래스와 객체
#include <iostream>
#include <string>

using namespace std;

class Player
{
    // 멤버 변수 default는 private
private:
    int _health;
    int _power;
    string _name;

public:
    // 생성자
    Player(int health, int power, string name)
    {
        _health = health;
        _power = power;
        _name = name;
    }
    int test;
    // Reference를 사용하지 않으면 값이 변경되지 않음
    void attack(Player &target)
    {
        cout << "Attack" << _name << "->" << target._name << endl;
        target.damaged(_power);
    }

    void damaged(int power)
    {
        _health -= power;
        if (_health <= 0)
        {
            cout << "Died. " << _name << endl;
        }
    }
};

int main()
{
    // 인스턴스 화
    Player player0(200, 100, "P1");
    Player player1(200, 100, "P2");
    player0.attack(player1);
    player0.attack(player1);
    player0.damaged(200);
    // 협업을 할때 멤버 변수를 직접 변경하여 에러를 발생시킬수 있음
    // player0._health = 0;
#if 0
    // struct와 차이점
    // struct는 멤버 변수가 public
    // class는 멤버 변수가 private

    player0.test = 100;
    // player0.power = 50; // error
    cout << player0.test << endl;
#endif
}