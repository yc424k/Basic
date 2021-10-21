#include <iostream>
using namespace std;

char &tolower(char a[], int &cnt, bool &success)
{
    for (int i = 0; a[i] != '\0'; i++)
    {
        if (a[i] < 90)
        {
            a[i] += 32;
            cnt++;
            success = true;
        }
    }
    return a[0];
}

int main()
{
    char s[] = "MIke";
    bool b = false;
    int num = 0;
    char &loc = tolower(s, num, b);
    if (b == false)
    {
        cout << "대문자를 발견할 수 없습니다." << endl;
        return 0;
    }
    cout << s << endl;
    cout << num << "개의 문자를 변경하였습니다." << endl;
    loc = 'n';
    cout << s << endl;
}