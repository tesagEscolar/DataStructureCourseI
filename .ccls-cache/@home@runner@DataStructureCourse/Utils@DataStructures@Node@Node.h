
template<typename T> class Node{
  private: 
    T data;
    Node<T> *next;
    template<T> friend class LinkedList;
};