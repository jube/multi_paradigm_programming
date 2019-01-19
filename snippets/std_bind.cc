void f(int n1, int n2, int n3, const int& n4, int n5) {
}
int g(int n) {
  return n;
}
int main() {
  using namespace std::placeholders;  // for _1, _2, _3...
  int n = 7;
  // (_1 and _2 are from std::placeholders, and represent future
  // arguments that will be passed to f1)
  auto f1 = std::bind(f, _2, _1, 42, std::cref(n), n);
  n = 10;
  f1(1, 2, 1001);
  // 1 is bound by _1, 2 is bound by _2, 1001 is unused
  // makes a call to f(2, 1, 42, n, 7)

  auto f2 = std::bind(f, _3, std::bind(g, _3), _3, 4, 5);
  f2(10, 11, 12); // makes a call to f(12, g(12), 12, 4, 5);
}
