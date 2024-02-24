#include <iostream>

using namespace std;

void printArray(int *A, int size)
{
  cout << endl;
  for (int i = 0; i < size; i++)
    cout << i[A] << " ";
  cout << endl;
}

void QuickSort(int *A, int s, int q)
{
  if (s >= q)
    return;

  int pivot = s;
  int i = s + 1;
  int j = q;

  while (i <= j)
  {
    while (A[i] <= A[pivot])
      i++;

    while (A[j] > A[pivot])
      j--;

    if (i < j)
      swap(A[i], j[A]);
  }
  swap(A[pivot], A[j]);

  QuickSort(A, j + 1, q);
  QuickSort(A, s, j);
}

int main()
{
  int A[] = {50, 70, 60, 90, 40, 80, 10, 20, 30};
  // int A[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
  // int A[] = {9, 8, 7, 6, 5, 4, 3, 2, 1};
  int size = sizeof(A) / sizeof(A[0]);

  printArray(A, size);
  QuickSort(A, 0, size - 1);
  printArray(A, size);
}