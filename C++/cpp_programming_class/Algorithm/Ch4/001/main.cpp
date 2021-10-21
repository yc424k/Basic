#include <iostream>
using namespace std;

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void selectionSort(int data[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int *min = &data[i];

        for (int j = i + 1; j < n - 1; j++)
        {
            if (data[j] < data[i])
                min = &data[j];
        }
        swap(data[i], *min);
    }
}
void bubbleSort(int data[], int n)
{
}
void insertSort(int data[], int n)
{
}

int main()
{
    int data[10] = {1, 8, 6, 4, 7, 3, 0, 2, 4, 29};
    for (int i = 0; i < 10; i++)
        cout << data[i] << " ";
    cout << endl;
    selectionSort(data, 10);
    for (int i = 0; i < 10; i++)
        cout << data[i] << " ";
    cout << endl;
}