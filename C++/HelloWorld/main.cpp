#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void merge(int A[], int p, int q, int r) {
   //정렬되어 있는 두 배열 A[p...q]와 A[q+1...r]을 합하여
   //정렬된 하나의 배열 A[p...r]을 만든다.
   int i = p, j = q + 1, t = 1;
   int tmp[100000];

   while(i <= q && j <= r) {
      if (A[i] <= A[j])
         tmp[t++] = A[i++];
      else
         tmp[t++] = A[j++];
   }


   while (i <= q)
      tmp[t++] = A[i++];
   while (j <= r)
      tmp[t++] = A[j++];

   i = p, t = 1;
   while (i <= r)
      A[i++] = tmp[t++];

}

void mergeSort(int A[], int p, int r) { 
   //p = 배열 시작 인덱스, r = 배열 끝 인덱스
   if (p < r) {
      int q = (p + r) / 2; // q = 가운데 인덱스
      mergeSort(A, p, q);
      mergeSort(A, q + 1, r);
      merge(A, p, q, r);
   }
}

int partition(int A[], int p, int r) {
   //배열 A[p...r]의 원소들을 A[r]을 기준으로 양쪽으로 재배치하고
   //A[r]이 자리한 위치를 리턴;
   
   int x = A[r];
   int i = p - 1;
   for (int j = p; j <= r - 1; j++) {
      if (A[j] <= x) {
         int tmp = A[++i];
         A[i] = A[j];
         A[j] = tmp;
            
      }
   }
   
   int tmp = A[i + 1];
   A[i + 1] = A[r];
   A[r] = tmp;
   
   return i + 1;
}

void quickSort(int A[], int p, int r) {
   //p = 배열 시작 인덱스, r = 배열 끝 인덱스
   if (p < r){
      int q = partition(A, p, r);
      quickSort(A, p, q - 1);
      quickSort(A, q + 1, r);
   }
}

int main() {
   int mergeInput[100000], quickInput[100000];

   srand((unsigned)time(0));

   cout << "Merge Sort: ";   
   for (int i = 0; i < 10; i++) {
      mergeInput[i] = rand();
   }
   mergeSort(mergeInput, 0, 9);

   for (int i = 0; i < 10; i++) {
      cout << mergeInput[i] << " ";
   }



   cout << endl << "Quick Sort: ";

   for (int i = 0; i < 10; i++) {
      quickInput[i] = rand();
   }
   quickSort(quickInput, 0, 9);
   for (int i = 0; i < 10; i++) {
      cout << quickInput[i] << " ";
   }

   //정렬
   // 
   //정렬
   

   /*
   float a = 0;
   for (int j = 0; j < 5; j++) {
      //난수10만개 삽입

      //정렬

      //정렬
      cout << "Merge Sort: " << mergeSort(mergeInput, 0, j);
      cout << "Quick Sort: " << quickSort(quickInput, 0, j);
   }
   
   */

   /*
   mergeSort(mergeInput, 0, 100000);
   quickSort(quickInput, 0, 100000);
   */


   



}