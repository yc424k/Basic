#include <iostream>
using namespace std;

class DefaultArgc
{
public:
    void default1();
    void default1(char);
    void default1(char, int);
};
void DefaultArgc::default1()
{
    for (int i = 0; i < 10; i++)
        cout << " ";
    cout << endl;
}
void DefaultArgc::default1(char c)
{
    for (int i = 0; i < 10; i++)
        cout << c;
    cout << endl;
}

void DefaultArgc::default1(char c, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 10; j++)
            cout << c;
        cout << endl;
    }
}

int main()
{
    DefaultArgc f;
    f.default1();
    f.default1('%');
    f.default1('@', 5);
}