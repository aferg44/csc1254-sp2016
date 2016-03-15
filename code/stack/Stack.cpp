#include "Stack.h"

#include <cstdlib>

Stack::Stack() {
  top = NULL;
}

int Stack::pop() {
  int popkey = -1;
  StackNode *popme = top;
  if (top)
    popkey = top->key;
  top = popme->next;
  delete popme; 
  return popkey;
}

void Stack::push(int key) {
  StackNode *newtop = new StackNode(key); 
  newtop->next = top;
  top = newtop;
}

int Stack::peek() {
  int key = -1;
  if (top)
    key = top->key;
  return key;
}

bool Stack::empty() {
  if (top)
    return false;
  return true;
}
