#include <iostream>

using namespace std;

void shellSort(int *A, int size)
{
  int gap = size / 2;
  while (gap >= 1)
  {
    int i = 0;
    while ((i + gap) < size)
    {
      int key = A[i];
      if (key > A[i + gap])
      {
        A[i] = A[i + gap];
        A[i + gap] = key;
      }

      int j = i;
      while ((j - gap) >= 0 && A[j] < A[j - gap])
      {
        int temp = A[j];
        A[j] = A[j - gap];
        A[j - gap] = temp;
        j -= gap;
      }

      i++;
    }
    gap /= 2;
  }
}
int main()
{
  int A[] = {9, 5, 16, 8, 13, 6, 12, 10, 4, 2, 3};
  int size = sizeof(A) / sizeof(A[0]);

  shellSort(A, size);

  for (int i = 0; i < size; i++)
    cout << A[i] << " ";
}