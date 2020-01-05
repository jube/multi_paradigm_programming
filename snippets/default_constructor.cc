struct A {
  A() {  } // user-defined default constructor
};

struct B {
  B(int i = 0) {  } // user-defined default constructor
};

struct C {
  // implicitly defined default constructor
};

struct D {
  D(int i) {  }
  // no implicitly defined default constructor
};
