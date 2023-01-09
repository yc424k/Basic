#include <iostream>

using namespace std;

int main()
{
    int arr[10]{};

    for (int A : arr)
    {
        A = 1;
    }

    for (int A : arr)
    {
        cout << A << endl;
    }
}