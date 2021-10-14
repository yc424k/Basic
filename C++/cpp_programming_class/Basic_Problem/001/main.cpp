//책 088page 1번 문제
#include <iostream>
using namespace std;
int main()
{
    for (int i = 1; i <= 100; i++)
    {
        if (i > 1 && i % 10 == 1)
            cout << endl;
        cout << i << '\t';
        
    }
}