#include <iostream>

using namespace std;

void printArray(int *A, int size)
{
  cout << endl;
  for (int i = 0; i < size - 1; i++)
    cout << i[A] << " ";
  cout << endl;
}

void bubbleSort(int *A, int size)
{
  bool swaped = true;
  for (int i = 0; i < size - 1; i++)
  {
    swaped = false;
    for (int j = 0; j < (size - 1) - i; j++)
      if (A[j] > A[j + 1])
      {
        swap(A[j], A[j + 1]);
        swaped = true;
      }
    if (!swaped)
      break;
  }
}

int main()
{
  // int A[] = {8, 5, 7, 3, 2};
  int A[] = {1, 2, 3, 5, 6, 7};
  int size = sizeof(A) / sizeof(A[0]);

  printArray(A, size);
  bubbleSort(A, size);
  printArray(A, size);
}