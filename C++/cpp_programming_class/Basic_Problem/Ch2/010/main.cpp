#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char str[100];
    cout << "문자열 입력>>";
    cin.getline(str, 100);

    for (int i = 0; i < strlen(str); i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << str[j];
        }
        cout << endl;
    }
}