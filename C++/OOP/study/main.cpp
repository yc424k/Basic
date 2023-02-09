#include <iostream>

using namespace std;

class Player
{
private:
    int _health;
    int _power;
    const string _name;

public:
    Player() : Player(100, 50, "noname")
    {
    };
    Player(int health, int power, string name)
    :_health(health), _power(power), _name(name)
    {
        cout << "Player " << _name <<", " << _health <<", " << _power << endl;
    }
};

int main()
{
    Player player0;
}