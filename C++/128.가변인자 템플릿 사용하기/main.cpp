#include <iostream>
#include <string>

using namespace std;

void Type1(string msg, int no, double value)
{
    cout << msg << ", 에러번호 " << no << ", 오류값 " << value << endl;
}

void Type2(int no, double value)
{
    cout << no << ", 오류값" << value << endl;
}

template <typename... T>
void PrintLog(T... arg0)
{
    Type1(arg0...);
    // Type2(arg0 ...);
}
int main()
{
    // PrintLog<int, double>(101, 56.6);
    PrintLog<string, int, double>("Warning", 100, 22.5);

    return 0;
}