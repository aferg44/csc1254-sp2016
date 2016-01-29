#include <iostream>
#include "dice.h"
#include "cards.h"
#include "imag.h"

int main() {

  // *************************************************************************
  // The dice library
  // *************************************************************************

  // Roll a 2d6, calculate pi using Monte Carlo method
  std::cout << "  2d6: "  << di::dice_roll(2,6) << std::endl;
  std::cout << "  pi:  "  << di::pi()           << std::endl;
  std::cout <<                                     std::endl;


  // *************************************************************************
  // The card library
  // *************************************************************************

  // Initialize a deck of cards
  crd::card deck[52];
  for (int suit=0; suit<4; suit++)
    for (int rank=0; rank<13; rank++) {
      deck[suit*13+rank].suit = suit;
      deck[suit*13+rank].rank = rank;
    }

  // Shuffle and print the cards
  crd::shuffle(deck, 52);
  crd::print(deck, 52);
  std::cout << std::endl;



  // *************************************************************************
  // The complex number library
  // *************************************************************************

  // Multiply two complex numbers
  img::imag a, b, c;
  a.real    =  2;
  a.complex =  3;
  b.real    = -3;
  b.complex =  2;
  c = img::multiply(a, b);
  std::cout << "  (" << img::to_string(a) << ") * "
            <<   "(" << img::to_string(b) << ") = "
                     << img::to_string(c) << std::endl;

  // Power of a complex number
  c = img::pow(a, 2);
  std::cout << "  (" << img::to_string(a) << ")^2 = "
                     << img::to_string(c) << std::endl;

}
