#include <iostream>

using namespace std;

void flip(int *a, int *b)
{
  int temp = *a;
  *a = *b;
  *b = temp;
}

void display(int arr[], int length)
{
  for (int i = 0; i <= length; i++)
    cout << arr[i] << " ";
  cout << endl;
}

void sortArray(int arr[], int length)
{
  int p = 0, q = length;

  while (p < q)
  {
    while (arr[p] < 0)
      p++;

    while (arr[q] > 0)
      q--;

    if (p < q)
      flip(&arr[p], &arr[q]);
  }
}

int main()
{
  int arr[] = {-1, 2, 12, -8, -9, 3, 4, -5, 12, -6, 7};
  display(arr, 10);

  // int p = 0, q = 10;

  // while (p < q)
  // {
  //   if (arr[p] > 0 && arr[q] < 0)
  //   {
  //     flip(&arr[p], &arr[q]);
  //     p++;
  //     q--;
  //   }
  //   else if (arr[p] < 0 && arr[q] < 0)
  //     p++;

  //   else if (arr[p] > 0 && arr[q] > 0)
  //     q--;
  //   else
  //   {
  //     p++;
  //     q--;
  //   }
  // }
  sortArray(arr, 10);

  display(arr, 10);
}