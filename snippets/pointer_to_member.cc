struct C {
  int m;
  void f(int n) { std::cout << n << '\n'; }
};
int main() {
  int C::* p = &C::m;
  C c = {7};
  std::cout << c.*p << '\n';   // prints 7
  C* cp = &c;
  cp->m = 10;
  std::cout << cp->*p << '\n'; // prints 10

  void (C::* p)(int) = &C::f;
  C c;
  (c.*p)(1);                  // prints 1
  C* cp = &c;
  (cp->*p)(2);                // prints 2
}
