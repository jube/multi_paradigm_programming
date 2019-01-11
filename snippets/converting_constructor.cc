struct A {
    A() { }         // converting constructor (since C++11)
    A(int) { }      // converting constructor
    A(int, int) { } // converting constructor (since C++11)
};
int main() {
  A a1 = 1;
      // OK: copy-initialization selects A::A(int)
  A a2(2);
      // OK: direct-initialization selects A::A(int)
  A a3{4, 5};
      // OK: direct-list-initialization selects A::A(int, int)
  A a4 = {4, 5};
      // OK: copy-list-initialization selects A::A(int, int)
  A a5 = static_cast<A>(1);
      // OK: static_cast, direct-initialization
}
