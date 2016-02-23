#include <iostream> 

class Animal {
  public:
    int cuteness;
    virtual std::string noise() {
      return "?";
    }
};

class Owl : public Animal {
  public:
    std::string noise() {
      return "Hoot!";
    }
};

class Fox : public Animal {
};

int main() {

  Owl JordanHolland;
  std::cout << JordanHolland.noise()  << std::endl;

  Fox JacquesComeaux;
  std::cout << JacquesComeaux.noise() << std::endl;

}
