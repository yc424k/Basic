#include <iostream>
using namespace std;

class SUM
{
    //int sum = 0;

public:
    int sum(int);
    int sum(int, int);
};

int SUM::sum(int a)
{
    int sum = 0;
    for (int i = 1; i <= a; i++)
        sum += i;

    return sum;
}

int SUM::sum(int a, int b)
{
    int sum = 0;
    for (int i = a; i <= b; i++)`
        sum += i;

    return sum;
}

int main()
{
    SUM sum;
    cout << sum.sum(3, 5) << endl;
    cout << sum.sum(3) << endl;
    cout << sum.sum(100) << endl;
}