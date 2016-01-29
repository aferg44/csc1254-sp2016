#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

int main() {
  std::cout << "10 random numbers in range [1, 100]:" << std::endl;
  srand(time(NULL));
  for (int i=0; i<10; i++)
    std::cout << std::setw(4) << rand()%100+1;
  std::cout << std::endl;
}
