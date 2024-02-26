#include <iostream>
using namespace std;

template <typename T> class BinaryTree {

  class BTNode {
    BTNode(T _data) {
      left = nullptr;
      right = nullptr;
      data = _data;
    }
    BTNode *left, *right;
    friend BinaryTree<T>;
    T data;
  };

  BTNode *root;

public:
  BinaryTree() {
    root = nullptr;
    // root = new BTNode(3);
    
  }

  bool isempty() { return (root == nullptr); }

  void insert(T data) {
    if (root == nullptr) {
      root = new BTNode(data);
      return;
    }
    
    auto x = root;
    BTNode* y = x;
    
    while (x != nullptr) {
        y = x;
        if (data < x->data)
            x = x->left;
        else
            x = x->right;
    }

    if (y == nullptr){
        y = new BTNode(data);
    }
    else if (data < y->data)
        y->left = new BTNode(data);
    else
        y->right = new BTNode(data);    
    return;
  }

  void Inorder(BTNode *newRoot) {
    if (newRoot == nullptr) return;

    Inorder(newRoot->left);
    cout << newRoot->data << ", ";
    Inorder(newRoot->right);
  }

  void Inorder() {    
    cout << "Printing Inorder: " << endl;
    Inorder(root); 
    cout << endl;
  }

  void preOrder()
  {
      preOrder(root);
  }

  void preOrder(BTNode* currRoot)
  {
      if (currRoot != nullptr) {
          cout << " " << currRoot->data;
          preOrder(currRoot->left);
          preOrder(currRoot->right);
      }
  }

  void postOrder(BTNode* currRoot)
  {
      if (currRoot != NULL) 
      {
          postOrder(currRoot->left);
          postOrder(currRoot->right);
          cout << " " << currRoot->key;
      }
  }

  void postOrder(){
      postOrder(root);
  }
};