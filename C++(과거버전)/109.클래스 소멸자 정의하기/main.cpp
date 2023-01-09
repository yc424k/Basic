#include <iostream>
#include <vector>

using namespace std;

class TempClass
{
public:
    TempClass()
    {
        cout << "생성자 호출" << endl;
    };
    ~TempClass()
    {
        cout << "소멸자 호출" << endl;
    };
};

int main()
{
    // 포인터 사용시 힙 영역에 할당됨
    TempClass *temp_class = new TempClass();

    delete temp_class;
    temp_class = nullptr;

    return 0;
}