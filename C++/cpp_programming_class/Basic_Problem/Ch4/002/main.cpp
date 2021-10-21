#include <iostream>
using namespace std;

int main()
{
    cout << "정수 5개 입력>>";
    int num;
    //cin >> num;

    int *array = new int[5];
    for (int i = 0; i < 5; i++)
        cin >> array[i];

    double sum = 0;

    for (int i = 0; i < 5; i++)
        sum += array[i];

    cout << "평균" << sum / 5 << endl;
}