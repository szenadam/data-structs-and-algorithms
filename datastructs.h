#ifndef DATASTRUCTS_H
#define DATASTRUCTS_H

#include <cstdlib>

class E1
{
public:
  int key;
  E1 *next;
  E1() { next = NULL; };
};

class Stack
{
private:
  int n;
  int A[];

public:
  Stack(int m);
  ~Stack();
  void push(int x);
  int pop();
  int top();
  bool isFull();
  bool isEmpty();
  void setEmpty();
};

Stack::Stack(int m)
{
}

void Stack::push(int x)
{
}

int Stack::pop()
{
}
int Stack::top()
{
}
bool Stack::isFull()
{
}
bool Stack::isEmpty()
{
}
void Stack::setEmpty()
{
}

#endif
