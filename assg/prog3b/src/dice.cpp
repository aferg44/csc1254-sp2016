/**
 *  @file
 *  @author   Dennis Castleberry <dcastl2@lsu.edu>
 *  @brief    Library for dice. 
 */
#include "dice.h"
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <iostream>

namespace di {

  /**
   *  Rolls dice and sums their face values.
   *  @param   number  number of dice to roll
   *  @return  sides   number of sides of each di
   */
  int dice_roll(int number, int sides) {
    int result = 0;
    for (int i=0; i<number; i++)
      result += rand()%sides+1;
    return result;
  }

  /**
   *  Calculate pi using Monte Carlo technique
   *  @return  approximate value of pi
   */
  float pi() {
    srand(time(NULL));
    float inside = 0;
    for (int i=0; i<10000; i++) {
      float x = (float)dice_roll(1,1000)/1000.0;
      float y = (float)dice_roll(1,1000)/1000.0;
      if (sqrt(x*x + y*y) < 1)
        inside++;
    }
    return 4.0*inside/10000.0;
  }

}
