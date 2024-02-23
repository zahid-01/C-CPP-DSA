#include <iostream>
#include <cmath>

using namespace std;

class Heap
{
private:
  int *elements;
  int size;
  int head;

public:
  Heap(int size);
  void insertElement(int el);
  void printHeap();
  void deleteHeap();
  void heapSort();
};

Heap::Heap(int size)
{
  this->size = size;
  elements = new int[this->size];
  this->head = -1;
}

void Heap::insertElement(int el)
{
  if (head == size - 1)
    return;

  elements[++head] = el;
  int i = head;
  int temp = elements[head];

  while (i >= 0 && temp > elements[i / 2])
  {
    elements[i] = elements[i / 2];
    i /= 2;
  }

  elements[i] = temp;
}

void Heap::printHeap()
{
  cout << endl;
  for (int i = 0; i <= head; i++)
  {
    cout << elements[i] << " ";
  }
  cout << endl;
}

void Heap::deleteHeap()
{
  int x = elements[0];
  elements[0] = elements[head--];
  elements[head + 1] = x;

  int i = 0, j = 2 * i + 1;

  while (j < head)
  {
    if (elements[j + 1] > elements[j])
      j = j + 1;

    if (elements[i] < elements[j])
    {
      int temp = elements[i];
      elements[i] = elements[j];
      elements[j] = temp;
      i = j;
      j = 2 * i + 1;
    }
    else
      break;
  }
}

void Heap::heapSort()
{
  while (head >= 0)
    deleteHeap();

  cout << endl;
  for (int i = 0; i < size; i++)
    cout << elements[i] << " ";
  cout << endl;
}

void heapify(int *A, int length)
{
  for (int i = length - 1; i >= 0; i--)
  {
    if (2 * i - 1 > length - 1)
      continue;

    int j = i, k = 2 * j + 1;
    while (k < length - 1)
    {
      if (A[k + 1] > A[k])
        k = k + 1;
      if (A[j] < A[k])
      {
        swap(A[j], A[k]);
        j = k;
        k = j * 2 + 1;
      }
      else
        break;
    }
  }

  for (int i = 0; i < length; i++)
    cout << A[i] << " ";
}

int main()
{
  // Heap heap(10);
  // heap.insertElement(30);
  // heap.insertElement(20);
  // heap.insertElement(15);
  // heap.insertElement(5);
  // heap.insertElement(12);
  // heap.insertElement(6);
  // heap.printHeap();

  // heap.insertElement(25);

  // heap.printHeap();

  // heap.deleteHeap();

  // heap.printHeap();

  // heap.heapSort();
  // heap.printHeap();

  int A[] = {5, 10, 30, 20, 35, 40, 15};
  heapify(A, sizeof(A) / sizeof(A[0]));
  return 0;
}