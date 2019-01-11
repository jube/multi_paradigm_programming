struct B {
    explicit B() { }
    explicit B(int) { }
    explicit B(int, int) { }
};
int main() {
/* B b1 = 1; */
      // error: copy-initialization does not consider B::B(int)
  B b2(2);
      // OK: direct-initialization selects B::B(int)
  B b3{4, 5};
      // OK: direct-list-initialization selects B::B(int, int)
/* B b4 = {4, 5}; */ // error: explicit constructor B::B(int, int)
  B b5 = static_cast<B>(1);
      // OK: static_cast, direct-initialization
  B b6;   // OK, default-initialization
  B b7{}; // OK, direct-list-initialization
/* B b8 = {}; */ // error: explicit constructor B::B()
}
