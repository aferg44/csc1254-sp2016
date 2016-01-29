#include "color.h"
#include <iostream>

const char heart[]   = "\xe2\x99\xa5";
const char diamond[] = "\xe2\x99\xa6";
const char spade[]   = "\xe2\x99\xa0";
const char club[]    = "\xe2\x99\xa3";

int main() {
  std::cout << color::red   << heart   << std::endl;
  std::cout << color::red   << diamond << std::endl;
  std::cout << color::white << spade   << std::endl;
  std::cout << color::white << club    << std::endl;
}
