struct A {
  int i;
  A(int i) : i(i) { std::cout << "c" << i << ' '; }
  ~A() { std::cout << "d" << i << ' '; }
};

A a0(0);

int main() {
  A a1(1);
  A* p;
  { // nested scope
    A a2(2);
    p = new A(3);
  } // a2 out of scope
  delete p; // calls the destructor of a3
}
// prints: c0 c1 c2 c3 d2 d3 d1 d0
