#include <iostream>
#include <cmath>



//////////////////////////////////////////////////////////////////////////////
//  sum_odds
//////////////////////////////////////////////////////////////////////////////
/**
 * Target: O(1).
 * This function sums the odd numbers up to n.
 */
int inefficient_sum_odds(int n) {
  int s = 0;
  for (int i=1; i<=n; i++)
    if (i%2) s += i;
  return s;
}

/**
 * To render it O(1), we need to find a formula. Observe that 1+3=4, 1+3+5=9,
 * 1+3+5+7=16, etc.  So the sum of odd numbers has a quadratic relationship
 * with n.  If n is even, we just take (n/2)^2, but if odd, we can add 1 before
 * dividing to get ((n+1)/2)^2.  So we can simply return pow((n+1)/2, 2).
 */
int efficient_sum_odds(int n) {
  return pow((n+1)/2, 2);
}



//////////////////////////////////////////////////////////////////////////////
//  is_perfect
//////////////////////////////////////////////////////////////////////////////
/**
 * Target: O(sqrt(n)).
 * Basically, a number is perfect if the sum of its proper divisors is equal
 * to that number.  This function tests if n is perfect.
 */
bool inefficient_is_perfect(int n) {
  int s = 0;
  for (int i=1; i<n; i++)
    if (n%i == 0) s+=i;
  return (s==n);
}

/**
 * To render it O(sqrt(n)), we need to go up to sqrt(n) like we do for
 * is_prime, but add the factors which are "reflected" across sqrt(n).
 */
bool efficient_is_perfect(int n) {
  int s = 1;
  for (int i=2; i<=sqrt(n); i++)
    if (n%i == 0) 
      s+=(i+n/i);
  return (s==n);
}



//////////////////////////////////////////////////////////////////////////////
// trace
//////////////////////////////////////////////////////////////////////////////
/**
 * Target: O(n).
 * This function sums the diagonal elements of a matrix.
 */
int inefficient_trace(int a[3][3], int n) {
  int s = 0;
  for (int i=0; i<n; i++)
    for (int j=0; j<n; j++)
      if (i==j) s+= a[i][j];
   return s;
}

/**
 * Since we are only summing the diagonal, we can cut out the inner for loop
 * and just range over i to sum the diagonal elements.
 */
int efficient_trace(int a[3][3], int n) {
  int s = 0;
  for (int i=0; i<n; i++)
      s+= a[i][i];
   return s;
}



//////////////////////////////////////////////////////////////////////////////
// range
//////////////////////////////////////////////////////////////////////////////
/**
 * Target: O(n).
 * This function returns the range of the data (max-min).
 */
int inefficient_range(int a[], int n) {
  int d = a[1]-a[0];
  for (int i=0; i<n; i++)
    for (int j=0; j<i; j++)
      if (a[i]-a[j]>d) d = a[i]-a[j];
  return d;
}

/**
 * To do it in O(n), we simultaneously find the max and min of the array,
 * then return the difference.
 */
int efficient_range(int a[], int n) {
  int max=a[0], min=a[0];
  for (int i=1; i<n; i++) {
      if (a[i] < min) min=a[i];
      if (a[i] > max) max=a[i];
  }
  return max-min;
}



int main() {
  int a[3][3] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };
  int b[9] =    {  1, 2, 3,   4, 5, 6,   7, 8, 9 };
  std::cout << inefficient_sum_odds(7)    << std::endl;
  std::cout <<   efficient_sum_odds(8)    << std::endl;
  std::cout << inefficient_is_perfect(12) << std::endl;
  std::cout <<   efficient_is_perfect(6)  << std::endl;
  std::cout << inefficient_trace(a, 3)    << std::endl;
  std::cout <<   efficient_trace(a, 3)    << std::endl;
  std::cout << inefficient_range(b, 9)    << std::endl;
  std::cout <<   efficient_range(b, 9)    << std::endl;
}
