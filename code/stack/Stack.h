#ifndef STACK_H
#define STACK_H

class StackNode {
  public:
    int key;
    StackNode *next;
    StackNode(int);
};

class Stack {
  private:
    StackNode *top;
  public:
    Stack();
    void push(int);
    int  peek();
    int  pop();
    bool empty();
};

#endif 
