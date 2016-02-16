#ifndef IMAG_H
#define IMAG_H

#include <string>

namespace img {

  struct imag {
    float real, complex;
  };

  imag      add(imag a, imag b);
  imag multiply(imag a, imag b);

  imag sqrt(float x);
  imag  pow(imag x, int n);

  std::string to_string(imag a);

}

#endif
