#include <iostream>
#include <iomanip>

#define N 4

void print(int a[N][N]) {
  for (int i=0; i<N; i++) {
    std::cout << "  ";
    for (int j=0; j<N; j++)
      std::cout << std::setw(4) << a[i][j];
    std::cout << std::endl;
  }
}

int trace(int a[N][N]) {
  int s = 0;
  for (int i=0; i<N; i++)
    for (int j=0; j<N; j++)
      if (i==j)
        s += a[i][j];
  return s;
}

void transpose(int a[N][N]) {
  for (int i=0; i<N; i++)
    for (int j=0; j<i; j++)
      std::swap(a[i][j], a[j][i]);
}

int main() {
  int a[N][N] = { {1,  2,  3,  4},
                  {5,  6,  7,  8},
                  {9,  10, 11, 12},
                  {13, 14, 15, 16} };
  std::cout << "For the following matrix:" << std::endl ;
  print(a);
  std::cout << "The trace is: " << trace(a) << std::endl;
  std::cout << "The transpose is: " << std::endl;
  transpose(a);
  print(a);
}
