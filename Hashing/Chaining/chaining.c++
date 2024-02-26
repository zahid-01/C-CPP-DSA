#include <iostream>

using namespace std;

class Node
{
public:
  int el;
  Node *next;

  Node() {}
  Node(int key)
  {
    el = key;
    next = nullptr;
  }
};

class Chaining
{
private:
  Node **A;
  int balanceFactor;
  int keys;
  int size;

public:
  Chaining(int size, int keys);
  void insert(int el);
  void printHashTable();
};

Chaining::Chaining(int size, int keys)
{
  this->size = size;
  A = new Node *[this->size];
  balanceFactor = keys / size;
  for (int i = 0; i < size; i++)
    A[i] = nullptr;
}

void Chaining::insert(int key)
{
  int index = key % 10;
  Node *newNode = new Node(key);
  if (!A[index])
  {
    A[index] = newNode;
  }
  else
  {
    Node *head = A[index];
    Node *last = nullptr;
    while (head && head->el < key)
    {
      last = head;
      head = head->next;
    }
    if (!last)
    {
      newNode->next = head;
      A[index] = newNode;
    }
    else
    {
      last->next = newNode;
      newNode->next = head;
    }
  }
}

void Chaining::printHashTable()
{
  for (int i = 0; i < size; i++)
  {
    Node *temp = A[i];
    while (temp)
    {
      cout << temp->el << " ";
      temp = temp->next;
    }
    cout << endl;
  }
}

main()
{
  Chaining co(10, 10);
  co.insert(16);
  co.insert(12);
  co.insert(25);
  co.insert(39);
  co.insert(6);
  co.insert(122);
  co.insert(5);
  co.insert(68);
  co.insert(75);

  co.printHashTable();
  return 0;
}