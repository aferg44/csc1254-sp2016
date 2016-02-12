#include <iostream>

int main(int argc, char **argv) {

  int a[5] = {1, 2, 3, 4, 5};
  int *a_ptr = a+4;
  while (--*(a_ptr--))
    std::cout << *(a_ptr)+1 << " ";
  std::cout << std::endl;

  int b[9] = {0, 1, 1, -1, -1, 1, 1, -1, 0};
  int *b_ptr = b;
  while (*(++b_ptr)) {
    *b_ptr += *(b_ptr-1);
    std::cout << *b_ptr << " ";
  }
  std::cout << std::endl;

  int c[6] = {1, 2, 5, 3, 0, 4};
  int *c_ptr = c;
  while (*c_ptr) {
     std::cout << *c_ptr;
    c_ptr = c + *c_ptr;
  }
  std::cout << std::endl;

  int d[10] = {1, 1, 2, 3, 5, 0, -3, -2, -1, -1};
  int *d_ptr = d;
  while (*d_ptr) {
    std::cout << *d_ptr << " ";
    d_ptr += *d_ptr;
  } 
  std::cout << std::endl;

}
