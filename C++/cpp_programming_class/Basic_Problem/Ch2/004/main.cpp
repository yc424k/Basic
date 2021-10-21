#include <iostream>

using namespace std;

int main()
{
    cout << "5개의 실수를 입력하라>>";
    double max;
    for (int i = 0; i < 5; i++)
    {
        double a;
        cin >> a;
        if (i == 0)
            max = a;
        if (a > max)
            max = a;
    }
    cout << "큰수 = " << max << endl;
}