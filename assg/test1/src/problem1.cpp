int sum(int n, int k) {
  int s = 0;
  for (int i=1; i<=n; i++)
    if (i % k != 0)
      s += i;
  return s;
}

int main() {
  std::cout << sum(4, 3) << std::endl;
}
