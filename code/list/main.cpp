#include <iostream>
#include "Node.h"

int main() {

  Node<int> *head = new Node<int>(2);
  head->add(3);
  head->add(7);
  head->add(11);
  head->print();
  
  head->insert(5);
  head->print();

  head->deTail();
  head->print();

}
