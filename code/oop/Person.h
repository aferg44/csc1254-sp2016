#ifndef PERSON_H
#define PERSON_H
#include <string>

class Person {

  private:
    int personality[10];
    std::string name;

  public:
    Person();
    Person(std::string name, int personality[10]);
    void describe();
    void setName(std::string name);
    void setPersonality(int personality[10]);
    int *getPersonality();
    int  distance(Person p);
};

#endif
