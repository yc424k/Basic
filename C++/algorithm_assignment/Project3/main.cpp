#include <iostream>
#include <ctime>
using namespace std;

void merge(int A[], int p, int q, int r)
{
    int *sort = new int[r];

    int i, j, k, l;
    i = p;
    j = q + 1;
    k = p;

    while (i <= q + 1 && j <= r)
    {
        if (A[i] <= A[j])
            sort[k++] = A[i++];
        else
            sort[k++] = A[j++];
    }
    if (i > q)
    {
        for (l = j; l <= r; l++)
            sort[k++] = A[l];
    }
    else
    {
        for (l = i; l <= q; l++)
            sort[k++] = A[l];
    }
    for (l = p; l <= r; l++)
    {
        A[l] = sort[l];
    }
}

void mergeSort(int A[], int p, int r)
{
    if (p < r)
    {
        int q = (p + r) / 2;
        mergeSort(A, p, q);
        mergeSort(A, q + 1, r);
        merge(A, p, q, r);
    }
}

void swap(int A[], int a, int b)
{
    int temp = A[a];
    A[a] = A[b];
    A[b] = temp;
}

int partition(int A[], int p, int r)
{
    int pivot = A[p];
    int low = p + 1;
    int high = r;

    while (low < high)
    {
        while (pivot > A[low])
            low++;
        while (pivot < A[high])
            high--;

        if (low <= high)
            swap(A, low, high);
    }
    swap(A, p, high);
    return high;
}

void quickSort(int A[], int p, int r)
{
    if (p <= r)
    {
        int pivot = partition(A, p, r);
        quickSort(A, p, pivot - 1);
        quickSort(A, pivot + 1, r);
    }
}

int main()
{
    clock_t start, end, end2;
    srand((unsigned)time(0));
    int mergeInput[100000];
    int quickInput[100000];
    double result1, result2;
    for (int i = 0; i < 10; i++)
    {
        mergeInput[i] = rand();
        quickInput[i] = rand();
    }
    mergeSort(mergeInput, 0, 10);
    quickSort(quickInput, 0, 10);
    for (int i = 0; i < 10; i++)
    {
        cout << mergeInput[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << quickInput[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 100; j++)
        {
            mergeInput[i] = rand();
            quickInput[i] = rand();
        }
        start = clock();
        mergeSort(mergeInput,0,100);
        end = clock();
       result1 = (double)(end- start) / CLOCKS_PER_SEC;

        start = clock();
        quickSort(quickInput,0,100);
        end = clock();
        result2 = (double)(end - start) / CLOCKS_PER_SEC;
        cout << "Merge Sort: " << result1<<" ";
        cout << "Quick Sort: " << result2 << endl;
    }
}
