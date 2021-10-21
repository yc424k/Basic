#include <iostream>
using namespace std;

class Big
{
public:
    int big(int a, int b) { return a > b ? a : b; }
    int big(int[], int);
};
int Big::big(int a[], int size)`
{

    int max = a[0];
    for (int i = 0; i < size; i++)
    {
        if (max < a[i])
            max = a[i];
    }
    return max;
}

int main()
{
    Big big;
    int array[5] = {1, 9, -2, 8, 6};
    cout << big.big(2, 3) << endl;
    cout << big.big(array, 5) << endl;
}