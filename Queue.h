//
//  Queue.h
//  Assignment 3 cs2
//
//
//

#ifndef Queue_h
#define Queue_h

template <class T>

class Queue {
private:
    
  T *a;
  int rear;
  int front;
  int nItems;

public:
  Queue() {
    
    a = new T[100];
    rear = -1;
    front = 0;
    nItems = 0;
  }
  void push(T x) {
    
    if (rear == 100)
      rear = 0;
    else
      rear++;
    a[rear] = x;

    nItems++;
  }
  T pop() {
    T x = a[front];
      
    if (front == 100)
      front = 0;
    else
      front++;

    nItems--;

    return x;
  }
  bool isEmpty() {
    if (nItems == 0)
      return true;
    else
      return false;
  }
  int length() {
      return nItems;
      
  }
    
};


#endif /* Queue_h */
