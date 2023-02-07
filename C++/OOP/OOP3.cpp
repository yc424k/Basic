// 소멸자
#pragma warning(disable : 4996)
#include <iostream>
#include <cstring>
using namespace std;

#if 0
class Player
{
private:
    int _num;

public:
    Player(int num) : _num(num)
    {
        cout << "Contructor : " << _num << endl;
    }
    // 소멸자는 parameter가 없음
    // 소멸자는 선언하지 않으면 컴파일러가 자동으로 만들어줌
    ~Player()
    {
        cout << "Destructor : " << _num << endl;
    }
};
Player player0(0);
Player *player1 = new Player(1);

void func()
{
    static Player player2(2);
    // 정적 메모리에 있기 때문에 한번만 할당함
}

int main()
{

    Player player3(3);
    Player *player4 = new Player(4);
    {
        Player player5(5);
        Player *player6 = new Player(6);
    }
    delete player4;
    func();
    func();
    // 1번이랑 6번은 삭제가 안되는걸 알 수 있음
}
#endif
class String
{
private:
    char *_str;

public:
    String(const char *str)
    {
        int len = strlen(str);
        _str = new char[len + 1]; // '\0'을 위해 +1
        strcpy(_str, str);
    }
    void print()
    {
        cout << _str << endl;
    }
    ~String()
    {
        delete[] _str;
    }
};
int main()
{
    String str("abc");
    str.print();
}