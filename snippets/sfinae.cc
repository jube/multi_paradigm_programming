struct Test {
  typedef int foo;
};
template <typename T>
void f(typename T::foo) { } // Definition #1
template <typename T>
void f(T) { }               // Definition #2
int main() {
  f<Test>(10); // Call #1.
  f<int>(10);  // Call #2. Without error thanks to SFINAE.
}
