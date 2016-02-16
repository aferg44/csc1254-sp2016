#ifndef CARDS_H
#define CARDS_H


namespace crd {

  struct card {
    int suit, rank;
  }; 

  std::string to_string(int rank);
  std::string to_string(card c);
  void            print(card c[], int n);
  void          shuffle(card c[], int n);

}

#endif
