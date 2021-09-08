#include <iostream>
using namespace std;

bool equal(int *, int *);

int main()
{
    int a = 5, b = 5;
    if (equal(&a, &b))
        cout << "equal"
             << "\n";
    else
        cout << "not equal"
             << "\n";
}

bool equal(int *p, int *q)
{
    if (*p == *q)
        return true;
    else
        return false;
}