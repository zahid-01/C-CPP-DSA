#include <iostream>

using namespace std;

struct Node
{
  Node *left;
  Node *right;
  int height;
  int key;
};

Node * LLRotation(Node *head){
  
}

int BalanceFactor(Node *head)
{
  int Hlst = (head && head->left) ? head->left->height : 0;
  int Rlst = (head && head->right) ? head->right->height : 0;

  return Hlst - Rlst;
}

int NodeHeight(Node *head)
{
  int hl = (head && head->left) ? head->left->height : 0;
  int hr = (head && head->right) ? head->right->height : 0;

  return hl > hr ? hl + 1 : hr + 1;
}

Node *RInsert(Node *head, int key)
{
  if (!head)
    return new Node{nullptr, nullptr, 1, key};

  if (key < head->key)
    head->left = RInsert(head->left, key);
  if (key > head->key)
    head->right = RInsert(head->right, key);

  // Calculate the height of current node
  head->height = NodeHeight(head);

   // Balance Factor and Rotation
  if (BalanceFactor(head) == 2 && BalanceFactor(head->left) == 1)
  {
    return LLRotation(head);
  }
  else if (BalanceFactor(head) == 2 && BalanceFactor(head->left) == -1)
  {
    return LRRotation(head);
  }
  else if (BalanceFactor(head) == -2 && BalanceFactor(head->right) == -1)
  {
    return RRRotation(head);
  }
  else if (BalanceFactor(head) == -2 && BalanceFactor(head->right) == 1)
  {
    return RLRotation(head);
  }
}

int main()
{
  return 0;
}