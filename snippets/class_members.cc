class A {
public:             // access specifier
  void f();         // non-static member function
  static void g();  // static member function

  int x;            // non-static data member
  static bool y;    // static data member

  struct B {        // nested class
  };

  using C = double; // type alias declaration

  template<typename T>
  struct D {        // member class template
  };

  static_assert(sizeof(A) == sizeof(int), "!"); // static_assert
};
