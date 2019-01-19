struct Base { virtual void foo() {} }; // polymorphic
struct Derived : Base {};

int main() {
  std::string str;
  std::cout << typeid(str).name() << '\n';
  // NSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
  // with c++filt -t: std::__cxx11::basic_string<char,
  //    std::char_traits<char>, std::allocator<char>>

  int a = 0;
  std::cout << typeid(a = a + 1) << '\n'; // i
  std::cout << a << '\n'; // 0

  Derived d;
  Base& b = d;
  std::cout << typeid(b).name() << '\n'; // 7Derived
}
