#include <iostream>
#include <ctime>
using namespace std;
const int ARRAYSIZE = 100000;
class Sort
{
   // int i, j, k;
   // int tmp[100000];

public:
   void merge(int[], int, int, int);
   void mergeSort(int[], int, int);
   void swap(int[], int, int);
   int partition(int [], int, int);
   void quickSort(int[], int, int);
};
void Sort::merge(int A[], int p, int q, int r)
{
   int i = p, j = q + 1, k = p;
   int tmp[100000] = {
       0,
   };
   while (i <= q && j <= r)
   {
      if (A[i] <= A[j])
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
void Sort::swap(int A[], int a, int b)
{
   int temp = A[a];
   A[a] = A[b];
   A[b] = temp;
}
int Sort::partition(int A[], int p, int r){
   int x = A[r];
   int i = p - 1;
   int tmp;
   for (int j = p; j < r; j++)
   {
      if (A[j] <= x)
      {
         swap(A, ++i, j);
      }
   }
   swap(A, i + 1, r);
   return i + 1;
}
void Sort::quickSort(int A[], int p, int r){
   if (p < r)
   {
      int q = partition(A, p, r);
      quickSort(A, p, q - 1);
      quickSort(A, q + 1, r);
   }
}

int main()
{
   clock_t start, end;
   Sort sort;
   srand((unsigned)time(0));
   int mergeInput[ARRAYSIZE];
   int quickInput[ARRAYSIZE];
   double result;
   for (int i = 0; i < 10; i++)
   {
      mergeInput[i] = rand();
      quickInput[i] = rand();
   }
   sort.mergeSort(mergeInput, 0, 9);
   sort.quickSort(quickInput, 0, 9);
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
      for (int j = 0; j < ARRAYSIZE; j++)
      {
         mergeInput[i] = rand();
         quickInput[j] = rand();
      }
      start = clock();
      sort.mergeSort(mergeInput, 0, ARRAYSIZE-1);
      end = clock();
      result = (double)(end - start) / CLOCKS_PER_SEC;
      cout << "Merge Sort: " << result << " ";

      start = clock();
      sort.quickSort(quickInput, 0, ARRAYSIZE-1);
      end = clock();
      result = (double)(end - start) / CLOCKS_PER_SEC;

      cout << "Quick Sort: " << result << endl;
   }
}
