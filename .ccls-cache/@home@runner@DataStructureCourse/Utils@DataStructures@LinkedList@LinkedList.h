#include "../Node/Node.h"
#include <iostream>
using namespace std;

template <typename T> class LinkedList {
  public: 
    Node<T> *head;
  
    LinkedList(){
      head = NULL;
    }

  void insert(T value){
  Node <T> *node = new Node <T> ;
  if (node == NULL)
  {
    cout << "Memory overflow\n";
  }
  else
  {
    node->data = value;
    node->next = NULL;
    if (head == NULL)
    {
      head = node;
    }
    else
    {
      Node < T > *temp = head;
      while (temp->next != NULL)
      {
        temp = temp->next;
      }
      temp->next = node;
    }
  }
}

  friend ostream& operator<<(ostream& out, const LinkedList& list){
     if (list.head == NULL)
      {
        out<< "Empty linked list";
      }
      else
      {
        Node<T> *temp = list.head;
        out << "\nLinked List : ";
        while (temp != NULL)
        {
          out << temp->data << " ";
          temp = temp->next;
        }
      }

      return out;
  }

};