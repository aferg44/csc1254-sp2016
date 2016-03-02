
class Demo {

  /**
   * Sum of numbers 1 to n.
   * @param n  number to sum to
   * @return   sum of numbers
   */
  public static int sum(int n) {
    int s = 0;
    for (int i=1; i<=n; i++)
      s += i;
    return s;
  }

  /**
   * Easy way to reverse string; found on-line.
   * @param s  string to reverse
   * @return   reverse of string
   */
  public static String reverse(String s) {
    return new StringBuilder(s).reverse().toString();
  }

  public static void main(String[] args) {
    System.out.println(sum(10));
    System.out.println(reverse("hello"));
  }

}
