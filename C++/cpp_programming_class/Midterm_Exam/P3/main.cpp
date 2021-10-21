#include <iostream>
using namespace std;

int main()
{
    cout << "입력할 정수의 개수는?";
    int num;
    cin >> num;
    double *arr = new double[num];

    double sum = 0;
    for (int i = 0; i < num; i++)
    {
        cout << i + 1 << " 번째 정수: ";
        cin >> arr[i];
        sum += arr[i];
    }

    cout << "합=" << sum << endl;
    cout << "평균=" << sum / num << endl;
}