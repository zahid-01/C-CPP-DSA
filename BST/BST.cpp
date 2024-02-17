#include <iostream>

using namespace std;

class Node
{
private:
public:
  Node *left;
  int data;
  Node *right;
  Node(int data)
  {
    this->data = data;
    this->left = nullptr;
    this->right = nullptr;
  }
};

class BST
{
private:
public:
  Node *root;
  BST(int data)
  {
    root = new Node(data);
  }

  void insert(int data);
  Node *search(int data);
  void inOrderTraversal(Node *root);
};

void BST::insert(int data)
{
  Node *currentNode = root;
  Node *newNode = new Node(data);

  while (currentNode)
  {
    if (data > currentNode->data)
    {
      if (currentNode->right)
        currentNode = currentNode->right;
      else
      {
        currentNode->right = newNode;
        break;
      }
    }
    else if (data < currentNode->data)
    {
      if (currentNode->left)
        currentNode = currentNode->left;
      else
      {
        currentNode->left = newNode;
        break;
      }
    }
    else if (data == currentNode->data)
    {
      cout << "Element exists" << endl;
      delete newNode;
      break;
    }
  }
}

Node *BST::search(int key)
{
  Node *currentNode = root;

  while (currentNode)
  {
    if (key == currentNode->data)
      return currentNode;

    if (key < currentNode->data)
      currentNode = currentNode->left;
    if (key > currentNode->data)
      currentNode = currentNode->right;
  }

  return nullptr;
}

void BST::inOrderTraversal(Node *root)
{
  if (!root)
    return;
  inOrderTraversal(root->left);
  cout << root->data << " ";
  inOrderTraversal(root->right);
}

int main()
{
  BST *myBst = new BST(20);
  myBst->insert(10);
  myBst->insert(30);
  myBst->insert(4);
  myBst->insert(7);
  myBst->insert(35);
  myBst->insert(25);

  cout << "Search for 26 returned " << myBst->search(26) << endl;
  cout << "Search for 25 returned " << myBst->search(25)->data << endl;

  myBst->inOrderTraversal(myBst->root);
  return 0;
}