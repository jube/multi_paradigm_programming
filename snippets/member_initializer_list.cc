struct A {
  A(int i)
  : a(i)  // initialize X::a to the value of the parameter i
  , b(a)  // initialize X::b to refer to X::a
  , i(i)  // initialize X::i to the value of the parameter i
  {

  }

  int a;
  int& b;
  int i;
  int j; // j is not initialized in the constructor A(int)
};
