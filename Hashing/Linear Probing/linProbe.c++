#include <iostream>

using namespace std;

void linProbing(int *A, int key)
{
  int index = key % 10;

  int counter = 1;
  while (A[index] != 0 && counter <= 10)
  {
    index = (index + 1) % 10;
    counter++;
  }

  if (A[index])
  {
    cout << "NO SPACE!" << endl;
    return;
  }

  A[index] = key;
}

void searching(int *A, int key)
{
  cout << endl;
  int index = key % 10;

  if (A[index] == key)
  {
    cout << key << " found!" << endl;
    return;
  }

  int x = index + 1;
  while (x != index && A[x] != 0)
  {
    if (A[x] == key)
    {
      cout << key << " found!" << endl;
      return;
    }
    x = (x + 1) % 10;
  }

  cout << "Element not found" << endl;
}

int main()
{
  int A[] = {0};

  linProbing(A, 26);
  linProbing(A, 30);
  linProbing(A, 45);
  linProbing(A, 23);
  linProbing(A, 25);
  linProbing(A, 43);
  linProbing(A, 74);
  linProbing(A, 19);
  linProbing(A, 29);
  linProbing(A, 39);
  // linProbing(A, 49);

  for (int i = 0; i < 10; i++)
  {
    cout << A[i] << " ";
  }

  searching(A, 39);
}