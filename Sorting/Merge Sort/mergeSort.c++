#include <iostream>
#include <cmath>

using namespace std;

int *mergeLists(int *A, int *B, int m, int n)
{
  int *X = new int[m + n];

  int i = 0, j = 0, k = 0;
  while (i < m && j < n)
  {
    if (A[i] < B[j])
      X[k++] = A[i++];

    else if (B[j] < A[i])
      X[k++] = B[j++];
  }

  for (; i < m; i++)
    X[k++] = A[i];

  for (; j < n; j++)
    X[k++] = B[j];

  return X;
}

// Merge two lists in same array
void merge(int *A, int low, int mid, int high)
{
  int p = low, q = mid, r = mid + 1, s = high;
  int k = 0;

  int newArraySize = (high - low) + 1;
  int *X = new int[newArraySize];
  while (p <= mid && r <= high)
  {
    if (A[p] < A[r])
      X[k++] = A[p++];
    else if (A[r] < A[p])
      X[k++] = A[r++];
  }

  for (; p <= mid; p++)
    X[k++] = A[p];

  for (; r <= high; r++)
    X[k++] = A[r];

  for (int l = 0; l < newArraySize; l++)
    A[low++] = X[l];

  delete[] X;
}

void mergeSort(int *A, int low, int high)
{
  if (low == high)
    return;
  int mid = (high + low) / 2;
  mergeSort(A, low, mid);
  mergeSort(A, mid + 1, high);
  merge(A, low, mid, high);
}

int main()
{
  // int A[] = {2, 10, 18, 20, 23};
  // int B[] = {4, 9, 19, 25};

  // int C[] = {8, 5};

  // int *C = merge(A, B, 5, 4);

  // merge(C, 0, 1, 1);

  int unsortedArray[] = {1, 9, 7, 6, 5, 4, 3, 2, 20};
  int size = sizeof(unsortedArray) / sizeof(unsortedArray[0]);

  mergeSort(unsortedArray, 0, size - 1);

  for (int i = 0; i < size; i++)
    cout << unsortedArray[i] << " ";
}