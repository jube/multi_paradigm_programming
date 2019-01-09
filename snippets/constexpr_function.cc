constexpr int factorial(int n) {
  if (n <= 1) {
    return 1;
  }

  return n * factorial(n - 1);
}

constexpr int x = factorial(10);
int array[factorial(5)];
