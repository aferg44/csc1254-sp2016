#include "problem6.h"

namespace util {

  int factorial(int n) {
    int p=1;
    for (int i=2; i<=n; i++)
      p*=i;
    return p;
  }

  int sum(int n) {
    return (n*(n+1)/2);
  }

}
