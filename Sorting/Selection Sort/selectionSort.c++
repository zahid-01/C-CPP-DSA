#include <iostream>

using namespace std;

void printArray(int *A, int size)
{
  cout << endl;
  for (int i = 0; i < size; i++)
    cout << i[A] << " ";
  cout << endl;
}

void selectionSort(int *A, int len)
{
  for (int i = 0; i < len; i++)
  {
    int j = i, k = i;
    while (k < len)
    {
      if (A[j] > A[k])
        j = k;
      k++;
    }
    swap(A[i], A[j]);
  }
}

int main()
{
  int A[] = {9, 8, 7, 6, 5, 4, 3, 2, 1};
  int size = sizeof(A) / sizeof(A[0]);

  printArray(A, size);
  selectionSort(A, size);
  printArray(A, size);
  return 0;
}