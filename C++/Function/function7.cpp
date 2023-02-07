// 함수 포인터
#include <iostream>
#include <functional>

using namespace std;

int sum(int x, int y)
{
    return x + y;
}
enum struct RequestType
{
    // 암묵적으로 Login = 0, Register = 1, Update = 2, Delete = 3
    Login,
    Register,
    Update,
    Delete
};

bool onLogin(string id, string password)
{
    cout << "onLogin" << endl;
    cout << id << endl;
    cout << password << endl;
    return true;
}
bool onRegister(string id, string password)
{
    cout << "onRegister" << endl;
    cout << id << endl;
    cout << password << endl;
    return true;
}
bool onUpdate(string id, string password)
{
    cout << "onUpdate" << endl;
    cout << id << endl;
    cout << password << endl;
    return true;
}
bool onDelete(string id, string password)
{
    cout << "onDelete" << endl;
    cout << id << endl;
    cout << password << endl;
    return true;
}
struct Character
{
    int health;
    void (*dieCallback)();
};
// Reference를 사용하지 않으면 값이 복사가 되기 때문에 값이 안바뀜
void damaged(Character &character)
{
    character.health -= 100;
    if (character.health <= 0)
    {
        cout << "died" << endl;
        if (character.dieCallback)
            character.dieCallback();
    }
}

void gameOver()
{
    cout << "gameOver" << endl;
}
// typedef float real32;
// typedef double real64;
// typedef void (*FuncType)();
// c++11 부터 추가된 using

using real32 = float;
using real64 = double;
int main()
{
// 괄호를 안치면 포인터를 반환하는 함수가 됨
// &가 없어도 됨
#if 0
    int (*f)(int, int) = &sum;

    cout << (*f)(1, 2) << endl;
    cout << f(1, 2) << endl;
#endif
#if 0
    // 함수 포인터를 배열로 만들어서 사용할수 있음
    bool (*callbacks[])(string, string){
        onLogin,
        onRegister,
        onUpdate,
        onDelete};
    callbacks[(int)RequestType::Login]("Kim", "1234");
    callbacks[(int)RequestType::Register]("Kim", "1234");
    callbacks[(int)RequestType::Update]("Kim", "1234");
    callbacks[(int)RequestType::Delete]("Kim", "1234");
#endif
#if 0
    Character character0{200, nullptr};  // 몬스터랑 gameOver가 되면 안됨
    Character character1{200, gameOver}; // Player이기 때문에 죽으면 gameOver가 되어야함

    damaged(character0);
    damaged(character0);

    damaged(character1);
    damaged(character1);
#endif
#if 0
    // void (*f)() = gameOver;
    // callerable 함수를 사용하면 함수 포인터를 사용하지 않아도 됨
    function<void()> a = gameOver;
    auto &r = gameOver;
    // auto f = gameOver;
    // f();
    r();
    a();

    real32 r32;
    real64 r64;

    cout << typeid(r32).name() << endl;
    cout << typeid(r64).name() << endl;

    void (*f)() = gameOver;
    FuncType f2 = gameOver;
    f();
#endif
    // using이 사용가능한 환경이면 using을 사용하는게 좋음
    using FuncType = void (*)();
    real32 r32;
    real64 r64;
    cout << typeid(r32).name() << endl;
    cout << typeid(r64).name() << endl;
    FuncType f = gameOver;
    f();
}