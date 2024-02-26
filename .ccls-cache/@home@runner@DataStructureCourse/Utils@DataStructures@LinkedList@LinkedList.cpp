#include <iostream>
using namespace std;

template <typename T> class LinkedList {

  class Node {
    T data;
    Node *next;
    friend LinkedList<T>;
    Node(T data) {
      this->data = data;
      this->next = NULL;
    }
  };

private:
  Node *head;

public:
  LinkedList<T>() { head = NULL; }
  void insert(T value) {
    Node *node = new Node(value);
    if (node == NULL) {
      cout << "Memory overflow\n";
      return;
    }

    if (head == NULL) {
      head = node;
      return;
    }

    Node *temp = head;
    while (temp->next != NULL) {
      temp = temp->next;
    }
    temp->next = node;
  }

  void insertFront(T value){
    Node *node = new Node(value);
    
    if (node == NULL) {
      cout << "Memory overflow\n";
      return;
    }

    if (head == NULL) {
      head = node;
      return;
    }

    node->next = head;
    head = node;
  }

  

  friend ostream &operator<<(ostream &out, const LinkedList<T> &list) {
    if (list.head == NULL) {
      out << "Empty linked list";
      return out;
    }

    Node *temp = list.head;
    out << "\nLinked List : ";
    while (temp != NULL) {
      out << temp->data << ", ";
      temp = temp->next;
    }

    return out;
  }

  LinkedList<T> operator+(LinkedList<T> const &list){
    if(list.head == NULL) return this;

    Node *temp = list.head;
    while(temp != NULL){
      this->insert(temp->data);
      temp = temp->next;
    }
    return this;
  }

  LinkedList<T> operator+(T const &value){
    this->insert(value);
    return this;
  }
};
