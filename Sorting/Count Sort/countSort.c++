#include <iostream>
#include <algorithm>

using namespace std;

void countSort(int *A, int size)
{
  int maxEl = -1;
  for (int i = 0; i < size; i++)
    if (A[i] > maxEl)
      maxEl = A[i];

  int *auxArr = new int[maxEl + 1];
  std::fill(auxArr, auxArr + 10, 0);

  for (int i = 0; i < size; i++)
    auxArr[A[i]]++;

  int jeenie = 0;
  for (int i = 0; i <= maxEl; i++)
  {
    int queen = auxArr[i];
    if (queen > 0)
      while (queen > 0)
      {
        A[jeenie++] = i;
        queen--;
      }
  }
}

int main()
{
  int A[] = {6, 3, 9, 10, 15, 6, 8, 12, 3, 6};
  int size = sizeof(A) / sizeof(A[0]);

  countSort(A, size);

  for (int i = 0; i < size; i++)
    cout << A[i] << " ";
}