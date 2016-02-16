/**
 *  @file
 *  @author  Dennis Castleberry <dcastl2@lsu.edu>
 *  @brief   Library for imaginary numbers.
 */

#include "imag.h"
#include <cmath> 
#include <sstream> 

namespace img {

  /**
   *  Add imaginary numbers. 
   *  @param  a  number to add
   *  @param  b  number to add
   *  @return    sum of numbers
   */
  imag add(imag a, imag b) {
    imag c;
    c.real    = a.real    + b.real;
    c.complex = a.complex + b.complex;
    return c;
  }

  /**
   *  Multiply imaginary numbers. 
   *  @param  a  number to multiply
   *  @param  b  number to multiply
   *  @return    product of numbers
   */
  imag multiply(imag a, imag b) {
    imag c;
    c.real    = a.real   *b.real - a.complex*b.complex;
    c.complex = a.complex*b.real + a.real   *b.complex;
    return c;
  }

  /**
   *  Take square root of imaginary number.
   *  @param   x  number to take square root of
   *  @return     square root of x
   */
  imag sqrt(float x) {
    imag c;
    if (x>0) {
      c.real    = std::sqrt(x);
      c.complex = 0;
    } else {
      c.real    = 0;
      c.complex = std::sqrt(x);
    }
    return c;
  }

  /**
   *  Take power of imaginary number.
   *  @param   x  imaginary number to exponentiate
   *  @param   n  number to take exponent for
   *  @return     result of exponentiation
   */
  imag pow(imag x, int n) {
    imag y = x;
    for (int i=0; i<n; i++)
      x = multiply(x, y);
    return x;
  }

  /**
   *  Convert imaginary number to string.
   *  @param   a  imaginary number to convert
   *  @return     string representation of number
   */
  std::string to_string(imag a) {
    std::stringstream ss;
    ss << a.real;
         if (a.complex > 0) ss << "+";
    else if (a.complex < 0) ;
    else                    return ss.str();
    ss << a.complex << "i";
    return ss.str();
  }

}

