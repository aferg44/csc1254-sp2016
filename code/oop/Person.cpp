#include "Person.h"
#include <iostream>
#include <iomanip>
#include <cmath>

Person::Person() {
}

Person::Person(std::string name, int personality[10]) {
  for (int i=0; i<10; i++)
    this->personality[i] = personality[i];
  this->name = name;
}

void Person::setName(std::string name) {
  this->name = name;
}

void Person::setPersonality(int personality[10]) {
  for (int i=0; i<10; i++)
    this->personality[i] = personality[i];
}

void Person::describe() {
  std::cout << name << "\t";
  for (int i=0; i<10; i++)
    std::cout << std::setw(4) << this->personality[i];
  std::cout << std::endl;
}

int *Person::getPersonality() {
  return this->personality;
}

int Person::distance(Person p) {
  int d = 0;
  int *other = p.getPersonality();
  for (int i=0; i<10; i++)
    d += std::abs(personality[i] - other[i]);
  return d;
}
