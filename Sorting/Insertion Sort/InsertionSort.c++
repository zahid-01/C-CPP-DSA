#include <iostream>

using namespace std;

void printArray(int *A, int size)
{
  cout << endl;
  for (int i = 0; i < size; i++)
    cout << i[A] << " ";
  cout << endl;
}

void insertionSort(int *A, int len)
{
  for (int i = 1; i < len; i++)
  {
    int key = i[A], j = i - 1;

    while (j >= 0 && key < A[j])
    {
      A[j + 1] = A[j];
      j--;
    }
    A[j + 1] = key;
  }
}

int main()
{
  int A[] = {9, 8, 7, 6, 5, 4, 3, 2, 1};
  int size = sizeof(A) / sizeof(A[0]);

  printArray(A, size);
  insertionSort(A, size);
  printArray(A, size);
}