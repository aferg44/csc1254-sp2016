#include <string>

class Shirt {
  public:
    std::string color;
};

class Person {
  public:
    Shirt s;
    std::string name;
};

int main() {
  Person Austrum;
}
