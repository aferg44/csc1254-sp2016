#include <iostream>

int main() {

  int ois=0, ocs=0, ous=0, iis=0, ics=0, ius=0, ops=0;
  int i, j, n=10;
  for (i=0, ois++;  ocs++, i<=n+1;  i++, ous++)
    for (j=1, iis++;  ics++, j<n-1;  j++, ius++)
      ops++;

  std::cout << "Example case (n=10): "        << std::endl;
  std::cout << "\tOuter\tInner"               << std::endl;
  std::cout << "init\t" << ois << '\t' << iis << std::endl;
  std::cout << "cont\t" << ocs << '\t' << ics << std::endl;
  std::cout << "upd\t"  << ous << '\t' << ius << std::endl;
  std::cout << "i/j\t"  << i   << '\t' << j   << std::endl;

  std::cout << std::endl;
  std::cout << "Generally: "             << std::endl;
  std::cout << "\tOuter\tInner"          << std::endl;
  std::cout << "init\t1    \t(n+2)"      << std::endl;
  std::cout << "cond\t(n+3)\t(n+2)(n-1)" << std::endl;
  std::cout << "upd\t(n+2)\t(n+2)(n-2)"  << std::endl;
  std::cout << "i/j\t(n+2)\t(n-1)"       << std::endl;

  std::cout << std::endl;
  std::cout << "The total code is O(n^2)." << std::endl;

}
