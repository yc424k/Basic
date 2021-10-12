#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Sort
{
public:
    void merge(int[], int, int, int);
    void mergeSort(int[], int, int);
};
void Sort::merge(int A[], int p, int q, int r)
{
    int i = p, j = q + 1, k = p;
    int tmp[100000] = {
        0,
    };
    while (i <= q && j <= r)
    {
        if (A[i] >= A[j])
            tmp[k++] = A[i++];
        else
            tmp[k++] = A[j++];
    }
    while (i <= q)
        tmp[k++] = A[i++];
    while (j <= r)
        tmp[k++] = A[j++];
    for (int a = p; a <= r; a++)
        A[a] = tmp[a];
}
void Sort::mergeSort(int A[], int p, int r)
{
    if (p < r)
    {
        int q = (p + r) / 2;
        mergeSort(A, p, q);
        mergeSort(A, q + 1, r);
        merge(A, p, q, r);
    }
}

int main()
{
    Sort sort;
    ifstream file("input.txt");
    string content;
    file >> content;
    int test_case = stoi(content);
    while (file >> content)
    {
        for (int i = 0; i < test_case; i++)
        {
            int tmp[100000] = {
                0,
            };
            int SUM = 0;
            int sum = 0;
            file >> content;
            int cloth_num = stoi(content);
            for (int i = 0; i < cloth_num; i++)
            {
                file >> content;
                tmp[i] = stoi(content);
            }

            sort.mergeSort(tmp, 0, cloth_num - 1);

            for (int i = 0; i < cloth_num; i++)
            {
                SUM += tmp[i];
                if (i % 3 == 2)
                    sum += tmp[i];
            }
            cout << SUM - sum << endl;
        }
    }
    return 0;
}