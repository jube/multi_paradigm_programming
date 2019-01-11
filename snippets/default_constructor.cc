struct A {
  A() {  } // user-defined default constructor
};

struct B {
  B(int i = 0) {  } // user-defined default constructor
};

struct C {
  // implitly defined default constructor
};

struct D {
  D(int i) {  }
  // no implitly defined default constructor
};
