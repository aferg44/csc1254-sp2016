#include <iostream>
#include <fstream>
#include <sstream>
#include <climits>
#include "Person.h"

#define N 23

int main() {

  Person students[N];
  std::ifstream infile("people.dat");

  std::string name;
  int j=0, personality[10];

  while(infile >> name) {
    for (int i=0; i<10; i++)
      infile >> personality[i];
    students[j].setName(name);
    students[j].setPersonality(personality);
    j++;
  }

  for (int i=0; i<N; i++) {
    int mindex=0, distance, mindistance = INT_MAX;
    for (int k=0; k<N; k++) {
      if (i!=k) {
        distance = students[i].distance(students[k]);
        if (distance < mindistance) {
          mindistance = distance;
          mindex      = k;
        }
      }
    }
    students[i].describe();
    students[mindex].describe();
    std::cout << std::endl;
  }


}
