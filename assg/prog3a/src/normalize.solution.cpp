#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>

/**
 *  Find mean of floating-point array 
 *  @param   a  floating-point array to find mean of
 *  @param   n  size of floating-point array
 *  @return     mean of array
 */
float mean(float *a, int n) {
  float s = 0;
  for (int i=0; i<n; i++)
    s += a[i];
  return s/n;
}

/**
 *  Find standard deviation of floating-point array 
 *  @param   a  floating-point array to find standard deviation of
 *  @param   n  size of floating-point array
 *  @return     standard deviation of array
 */
float stddev(float *a, int n) {
  float s = 0, m = mean(a, n);
  for (int i=0; i<n; i++)
    s += pow(a[i]-m, 2);
  return sqrt(s/(n-1));
}

/**
 *  Find normalized array.
 *  @param   a  floating-point array to find normalization of
 *  @param   n  size of floating-point array
 *  @return     normalized array
 */
float *normalize(float *a, int n) {
  float *norm = (float *) malloc(n*sizeof(float));
  float m = mean(a, n), S = stddev(a, n);
  for (int i=0; i<n; i++)
    norm[i] = (a[i] - m)/S;
  return norm;
}


int main() {

  int i=0, n=1;
  float *a = (float *) malloc(n*sizeof(float));
  std::string buffer;

  std::cout << "> ";
  while (std::cin >> buffer) {
    if (buffer=="quit") break;
    else a[i++] = stof(buffer);
    if (i>=n) {
      n *= 2;
      a  = (float *) realloc(a, n*sizeof(float));
    }
    std::cout << "> ";
  }

  float *norm = normalize(a, i);
  for (int j=0; j<i; j++) {
    if ((j)%5 == 4) std::cout << std::endl;
    std::cout << std::setw(8) << std::setprecision(2) << norm[j];
  }
  std::cout << std::endl;

  free(a);
  free(norm);
}
