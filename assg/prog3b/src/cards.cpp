/**
 *  @file
 *  @author   Dennis Castleberry <dcastl2@lsu.edu>
 *  @brief    Library for dealing with cards.
 */
#ifndef CARDS_H
#define CARDS_H

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <sstream>
#include "color.h"
#include "cards.h"

namespace crd {

  // Representation of a card
  struct card {
    int suit, rank;
  };

  // UTF-8 representations of heart, diamond, club, spade
  const char symbol[4][4] = { "\xe2\x99\xa5", 
                              "\xe2\x99\xa6", 
                              "\xe2\x99\xa0", 
                              "\xe2\x99\xa3"  };

  /**
   *  Convert a card rank to a string. 
   *  @param   rank  rank to convert
   *  @return        string version of the rank
   */
  std::string to_string(int rank) {
    ostringstream converter;
         if (rank==11) converter << "J";
    else if (rank==12) converter << "Q";
    else if (rank==13) converter << "K";
    else               converter << rank;
    return converter.str();
  }

  /**
   *  Converts a card to a string. 
   *  @param  card  card to convert
   *  @return       string version of the card
   */
  std::string to_string(card c) {
    return
      (c.suit<2 ? color::red : color::white)
        + 
      to_string(c.rank)
        +
      std::string(symbol[c.suit]);
  }

  /**
   *  Prints out array of cards.
   *  @param   c  array of cards
   *  @param   n  size of array
   */
  void   print(card c[], int n) {
    for (int i=0; i<n; i++) {
      std::cout << std::setw(13) << to_string(c[i]);
      if (i%13==12) std::cout << std::endl;
    }
  }

  /**
   *  Shuffle cards. 
   *  @param   c  array of cards
   *  @return  n  size of array
   */
  void shuffle(card c[], int n) {
    srand(time(NULL));
    for (int i=0; i<n; i++)
      std::swap(c[i], c[rand()%n]);
  }

}

#endif
