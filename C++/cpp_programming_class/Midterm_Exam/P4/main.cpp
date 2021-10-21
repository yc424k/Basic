#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
//#include <Window.h>
#include <unistd.h>
using namespace std;
class BattleGround
{
    long energy;

public:
    BattleGround();
    long getEnergy();
    void setEnergy(long newValue);
    void Attack(BattleGround *bg);
};

long BattleGround::getEnergy()
{
    return energy;
}
BattleGround::BattleGround()
{
    energy = 100;
    cout << "새로운 캐릭터가 생성되었습니다.(Energy: " << energy << ")" << endl;
}
void BattleGround::setEnergy(long newValue)
{
    energy = newValue - 20;
}
void BattleGround::Attack(BattleGround *bg)
{
    bg->setEnergy(bg->getEnergy());
    cout << "공격했습니다.(Energy: " << bg->getEnergy() << ")" << endl;
}

int main()
{
    srand((unsigned int)time(0));
    BattleGround a;
    BattleGround b;
    float randNum;

    while (true)
    {
        randNum = (float)rand() / RAND_MAX;
        if (randNum > 0.5)
        {
            cout << "A가 ";
            a.Attack(&b);
            if (b.getEnergy() <= 0)
            {
                cout << "A 승리!" << endl;
                break;
            }
        }
        else
        {
            cout << "B가 ";
            b.Attack(&a);
            if (a.getEnergy() <= 0)
            {
                cout << "B 승리!" << endl;
                break;
            }
        }
        //Sleep(500);
        usleep(500);
    }
}
