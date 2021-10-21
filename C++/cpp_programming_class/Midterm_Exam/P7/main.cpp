#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <unistd.h>
using namespace std;

class Player
{
    string name;

public:
    Player(string name)
    {
        cout << name << " 캐릭터가 생성되었습니다." << endl;
        this->name = name;
    }
    string getName() { return name; }
};

class BattleGround
{
public:
    static int energy;
    static void Attack(Player *name);
};
int BattleGround::energy = 100;
void BattleGround::Attack(Player *name)
{
    cout << name->getName() << "(이) 공격했습니다."
         << "(Energy: " << energy - 20 << ")" << endl;
    energy -= 20;
}
int main()
{
    srand((unsigned int)time(0));
    Player a("젠지");
    Player b("담원");
    cout << "몬스터의 에너지는 " << BattleGround::energy << "입니다." << endl;
    float randNum;
    while (true)
    {
        randNum = (float)rand() / RAND_MAX;
        if (randNum > 0.5)
        {
            BattleGround::Attack(&b);
            if (BattleGround::energy <= 0)
            {
                cout << b.getName() << " 승리!" << endl;
                break;
            }
        }
        else
        {
            BattleGround::Attack(&a);
            if (BattleGround::energy <= 0)
            {
                cout << a.getName() << " 승리!" << endl;
                break;
            }
        }
        usleep(500);
    }
}